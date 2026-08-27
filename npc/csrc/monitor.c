#include "/home/wang/InternalDependent_ysyx-workbench/npc/include/test.h"

void _init(int argc, char** argv, Vtop* top){

    parse_args(argc, argv);
    
    // malloc ram
    init_ram();

    // rst
    reset(top);

    // load code
    load_memory(argv[1], ram, &img_size);

    #if TRACE_ENABLE
    init_disasm();
    ftrace_init(argv[1]);
    #endif
}


// ------------------------------------------------------------------------------------

void parse_args(int argc, char *argv[]) {
    assert(argc >= 2);
    printf("%s", ANSI_FMT("ARGS: \n", ANSI_FG_CYAN));
    for (int i = 0; i < argc; i++)
    {
        printf("Argument[%d]: %s\n", i, argv[i]);
    }

    static struct option last_options[] = {
        {"diff",     required_argument, NULL, 'd'},
        {"batch",    no_argument,       NULL, 'b'},
        {0,          0,                 NULL,  0 }
    };

    int o;
    while ((o = getopt_long(argc, argv, "-bd:h", last_options, NULL)) != -1) {
        switch (o) {
            case 'd':
                diff_so_file = optarg;
                printf("%s", ANSI_FMT("[NPC] Using Difftest REF: ", ANSI_FG_CYAN));
                printf("%s\n", diff_so_file);
                break;
            case 'b':
                batch_mode = true;
        }
    }
}

void init_ram(){
    ram = (uint32_t*)malloc(sizeof(uint32_t) * RAM_SIZE);
    assert(ram); 
}

void reset(Vtop* top){
    top->rst = 1;  
    tick(top);
    top->rst = 0; 
    printf("Reset Released. Starting execution...\n");
}

void load_memory(char* filename, uint32_t* M, size_t *img_size) {
    FILE *fp = fopen(filename, "rb");
    assert(fp);

    fseek(fp, 0, SEEK_END);   
    size_t size = ftell(fp);   
    printf("image size: %zu\n", size); 
    fseek(fp, 0, SEEK_SET);      

    if (img_size != NULL) {
        *img_size = size;
    }
    assert(img_size <= RAM_SIZE);

    size_t loaded_instr = fread(M, sizeof(uint32_t), RAM_SIZE, fp);
    fclose(fp);

    printf("--LOAD %zu INSTR (%zu BYTES) TO M[]\n", loaded_instr, size);
}