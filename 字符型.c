#include <stdio.h>

int main() {
    char letter = 'A';         // 宣告字符變數 letter 並賦值 'A'
    unsigned char uletter = 65; // 宣告無符號字符變數 uletter 並賦值 ASCII 65 (即 'A')

    // 印出字符型變數的值
    printf("char: %c\n", letter);
    printf("unsigned char (ASCII): %c\n", uletter);

    return 0;
}
