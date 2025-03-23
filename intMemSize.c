#include <stdio.h>

int main(){
    
    // %lu是unsigned long的意思 4bytes 或 8bytes 在硬體層面是整數(Unsigned Integer)或長整數(Unsigned Long Integer)
    printf("An int takes up %lu bits of memory.\n", sizeof(int)*8); //sizeof(int)*8是因為sizeof(int)是以byte為單位

    return 0;
}