#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // variable declaration section
      int lucky; // 用來存放幸運數字
    int x; // 用來存放隨機數

    // input section

    // processing section
      srand(time(NULL)); // srand()是一個隨機數種子函數，time(NULL)返回從1970年1月1日0時0分0秒到現在所經過的秒數
      x = rand(); // rand()是一個隨機數函數，返回一個隨機數
      lucky = x % 10; // 除以10取餘數，得到0-9的隨機數

    // output section
      printf("Eenie meenie miney mo...\n"); // 念咒語
      printf("The lucky number is %d!\n", lucky); // 印出幸運數字

}
