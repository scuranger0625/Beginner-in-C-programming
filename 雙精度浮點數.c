#include <stdio.h>

int main() {
    // 宣告雙精度浮點數變數 a 並賦值 3.141592
    double a = 3.141592;

    // 使用雙精度浮點數進行計算
    double b = a * 2;  // 將 a 乘以 2，結果為 6.283184
    double c = a / 2;  // 將 a 除以 2，結果為 1.570796

    // 印出雙精度浮點數變數的值
    printf("原始雙精度浮點數: %.6f\n", a);
    printf("雙精度浮點數乘以 2: %.6f\n", b);
    printf("雙精度浮點數除以 2: %.6f\n", c);

    return 0;
}
