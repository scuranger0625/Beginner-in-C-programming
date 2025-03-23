#include <stdio.h>

int main() {
    printf("A float number takes %lu bits of memory\n", 
        sizeof(float) * 8); // sizeof(float) 是 float 的大小，單位是 byte，所以乘以 8 就是 bits
    printf("A double number takes %lu bits of memory.\n",
        sizeof(double) * 8); // sizeof(double) 是 double 的大小，單位是 byte，所以乘以 8 就是 bits
    printf("A long double number takes %lu bits of memory.\n",
        sizeof(long double) * 8); // sizeof(long double) 是 long double 的大小，單位是 byte，所以乘以 8 就是 bits
}