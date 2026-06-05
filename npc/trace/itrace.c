#include <trace.h>

/*
make itrace string
append to trace.txt every circle
*/

#define STR_HELPER(x) #x        
#define STR(x) STR_HELPER(x)    

#define IMAGE_QUOTED STR(IMAGE)

#define ELF ".elf"
#define TXT ".txt"
#define IMAGEELF (IMAGE_QUOTED ELF)
#define IMAGETXT (IMAGE_QUOTED TXT)

void get_itrace_line(unsigned int pc, char *buffer, size_t buf_size) {
    FILE *fp = fopen(IMAGETXT, "r");
    if (!fp) {
        perror("Failed to open file");
        return;
    }

    char line[256];
    char target[20];
    snprintf(target, sizeof(target), "%08x:", pc);

    int found = 0;
    while (fgets(line, sizeof(line), fp)) {
        if (strncmp(line, target, 8) == 0) {
            strncpy(buffer, line, buf_size - 1);
            buffer[buf_size - 1] = '\0';
            found = 1;
            break;
        }
    }
    if (!found) {
        snprintf(buffer, buf_size, "PC 0x%08x not found in original code", pc);
    }

    fclose(fp);
}

void append_to_file(const char *filename, const char *text) {
    FILE *fp = fopen(filename, "a");
    if (!fp) {
        perror("Failed to open file");
        return;
    }
    fprintf(fp, "\n%s", text);

    fclose(fp);
}