#include <stdio.h>

int main() {
    int x; 
    short int y; // short int是2bytes 
    long int z; // long int是4bytes

    printf("Please input an int: ");
    // 從鍵盤輸入一個整數 &x是x的記憶體位置
    scanf("%d", &x); 
    // %o是8進位, %x是16進位
    printf("%d_decimal = %o_octal = %x_hexadecimal\n", x, x, x); 
    
    printf("Please input a short int in octal: ");
    // %ho是short int的octal &y是y的記憶體位置
    scanf("%ho", &y);  
    // %hd是short int的decimal %hx是short int的hexadecimal
    printf("%hd_decimal = %ho_octal = %hx_hexadecimal\n", y, y, y); 

    printf("Please input a long int in hexadecimal: ");
    // %lx是long int的hexadecimal &z是z的記憶體位置
    scanf("%lx", &z); 
    // %ld是long int的decimal %lo是long int的octal %lx是long int的hexadecimal
    printf("%ld_decimal = %lo_octal = %lx_hexadecimal\n", z, z, z); 
}