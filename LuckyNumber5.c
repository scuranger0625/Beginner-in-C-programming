#include<stdio.h> // 這是標準輸入輸出的標頭檔
#include<stdlib.h> // 這是標準函式庫的標頭檔
#include<time.h> // 這是時間函式庫的標頭檔

int main()
{
// Variables declaration section
  int lucky; // 這是幸運數字
  int x; 
  int min;
  int max;

// input section
  printf("Please input the minimum number: ");
  scanf("%d", &min); // 這是輸入最小數字
  printf("Please input the maximum number: ");
  scanf("%d", &max); // 這是輸入最大數字

// Process section
  srand(time(NULL)); // 這是設定亂數種子
  x = min + rand() % (max - min + 1); // 這是產生亂數
  lucky = x; // 這是將亂數指定給幸運數字

// Output section
  printf("Eenie meenie miney mo...\n");
  printf("The lucky number is %d!\n", lucky);
}
    