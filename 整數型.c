#include <stdio.h>

int main() {
    int a = 10;            // 宣告整數變數 a 並賦值 10
    short int b = 20;      // 宣告短整數變數 b 並賦值 20
    long int c = 30000;    // 宣告長整數變數 c 並賦值 30000
    unsigned int d = 50;   // 宣告無符號整數變數 d 並賦值 50

    // 印出不同整數型變數的值
    printf("int: %d\n", a);
    printf("short int: %d\n", b);
    printf("long int: %ld\n", c);
    printf("unsigned int: %u\n", d);

    return 0;
}
