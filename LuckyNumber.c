#include <stdio.h>

int main()
{
    int num ; // 宣告一個整數變數num
    int lucky ; // 宣告一個整數變數lucky
    printf("Please input a number: ") ;
    /*"%d"表示輸入的是10進位整數 &num表示將輸入的數字存入num變數中*/
    scanf("%d", &num) ; // scanf()函數用來讀取使用者輸入的資料
    lucky = num + 1 ;
    printf("Your lucky number is %d! \n", lucky) ;
}

/*.\ 表示「目前這個資料夾」。
所以 .\LuckyNumber.exe 就是「執行這個資料夾裡的 LuckyNumber.exe」。*/