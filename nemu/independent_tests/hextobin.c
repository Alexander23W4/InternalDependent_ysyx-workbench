#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

char* hex_to_bin(const char *hex) {
    if (!hex) return NULL;

    // skip 0x / 0X
    int i = 0;
    if (hex[0] == '0' && (hex[1] == 'x' || hex[1] == 'X')) {
        i = 2;
    }

    // count valid hex chars
    int len = 0;
    for (int j = i; hex[j]; j++) {
        char c = toupper(hex[j]);
        if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'F')) {
            len++;
        }
    }

    // max 32 bits → 32 chars + 3 spaces + '\0'
    char *bin = (char *)malloc(32 + 3 + 1);
    if (!bin) return NULL;

    char tmp[128];
    int pos = 0;

    // build raw binary (no padding, no spaces)
    for (; hex[i]; i++) {
        char c = toupper(hex[i]);
        int val;

        if (c >= '0' && c <= '9') val = c - '0';
        else if (c >= 'A' && c <= 'F') val = c - 'A' + 10;
        else continue;

        for (int b = 3; b >= 0; b--) {
            tmp[pos++] = ((val >> b) & 1) + '0';
        }
    }

    tmp[pos] = '\0';

    // ensure 32-bit (left pad with '0')
    int total_bits = pos;
    int pad = 32 - total_bits;
    if (pad < 0) pad = 0;  // ignore overflow case

    char full[33];
    int idx = 0;

    // padding
    for (int k = 0; k < pad; k++) {
        full[idx++] = '0';
    }

    // original bits
    for (int k = 0; k < total_bits && idx < 32; k++) {
        full[idx++] = tmp[k];
    }

    full[32] = '\0';

    // insert space every 8 bits
    int out = 0;
    for (int k = 0; k < 32; k++) {
        bin[out++] = full[k];
        if ((k % 8 == 7) && k != 31) {
            bin[out++] = ' ';
        }
    }

    bin[out] = '\0';
    return bin;
}

int main(void){
    char* hex = "0x1f5833";
    char* bin = hex_to_bin(hex);
    printf("result: %s\n", bin);
}
