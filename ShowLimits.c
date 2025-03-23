#include <stdio.h>
#include <limits.h> // 這是一個標準的標頭檔，裡面包含了整數型態的最大值和最小值

int main(){
    printf("short int [%d, %d]\n", SHRT_MIN, SHRT_MAX); // SHRT_MIN, SHRT_MAX 是 short int 的最小值和最大值
    printf("int [%d, %d]\n", INT_MIN, INT_MAX); // INT_MIN, INT_MAX 是 int 的最小值和最大值
    printf("long int [%ld, %ld]\n", LONG_MIN, LONG_MAX); // LONG_MIN, LONG_MAX 是 long int 的最小值和最大值
    printf("unsigned short int [0, %u]\n", USHRT_MAX); // USHRT_MAX 是 unsigned short int 的最大值
    printf("unsigned int [0, %u]\n", UINT_MAX); // UINT_MAX 是 unsigned int 的最大值
    printf("unsigned long int [0, %lu]\n", ULONG_MAX); // ULONG_MAX 是 unsigned long int 的最大值
}
