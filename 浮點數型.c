#include <stdio.h>

int main() {
    float a = 3.14f;          // 單精度浮點數變數 a，賦值為 3.14
    double b = 3.141592;      // 雙精度浮點數變數 b，賦值為 3.141592
    long double c = 3.141592653589L;  // 長雙精度浮點數變數 c

    // 印出不同浮點數型變數的值
    printf("float: %.2f\n", a);
    printf("double: %.6f\n", b);
    printf("long double: %.12Lf\n", c);

    return 0;
}
