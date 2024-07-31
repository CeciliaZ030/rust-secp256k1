#include <stdio.h>

int __ctzsi2(int x) {
    if (x == 0) return 32; // Assuming a 32-bit integer
    int count = 0;
    while ((x & 1) == 0) {
        x >>= 1;
        count++;
    }
    return count;
}