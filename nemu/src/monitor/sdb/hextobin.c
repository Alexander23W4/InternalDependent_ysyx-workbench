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

    // max 32 bits → 32 bits + 5 spaces + '\0'
    char *bin = (char *)malloc(32 + 5 + 1);
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
    if (pad < 0) pad = 0;

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

    // ===== NEW: RISC-V field formatting =====
    int out = 0;

    // [31:25] 7 bits
    for (int k = 0; k < 7; k++) bin[out++] = full[k];
    bin[out++] = ' ';

    // [24:20] 5 bits
    for (int k = 7; k < 12; k++) bin[out++] = full[k];
    bin[out++] = ' ';

    // [19:15] 5 bits
    for (int k = 12; k < 17; k++) bin[out++] = full[k];
    bin[out++] = ' ';

    // [14:12] 3 bits
    for (int k = 17; k < 20; k++) bin[out++] = full[k];
    bin[out++] = ' ';

    // [11:7] 5 bits
    for (int k = 20; k < 25; k++) bin[out++] = full[k];
    bin[out++] = ' ';

    // [6:0] 7 bits
    for (int k = 25; k < 32; k++) bin[out++] = full[k];

    bin[out] = '\0';
    return bin;
}