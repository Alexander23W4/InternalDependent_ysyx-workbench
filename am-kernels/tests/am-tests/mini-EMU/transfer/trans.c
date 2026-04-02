#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fin = fopen("./vga.hex", "r");
    if (!fin) {
        perror("fopen input");
        return 1;
    }

    FILE *fout = fopen("./v.hex", "w");
    if (!fout) {
        perror("fopen output");
        fclose(fin);
        return 1;
    }

    char line[512];

    while (fgets(line, sizeof(line), fin)) {
        char *ptr = line;

        // find ':'
        ptr = strchr(ptr, ':');
        if (!ptr) continue;
        ptr++;  // dis ':'

        // read word
        char word[16];
        while (sscanf(ptr, "%8s", word) == 1) {
            fprintf(fout, "%s\n", word);

            // find next word
            while (*ptr && *ptr != ' ') ptr++;
            while (*ptr == ' ') ptr++;
        }
    }

    fclose(fin);
    fclose(fout);

    return 0;
}