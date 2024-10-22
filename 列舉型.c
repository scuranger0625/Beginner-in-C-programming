#include <stdio.h>

// 定義列舉型 week
enum week {Sun, Mon, Tue, Wed, Thu, Fri, Sat};

int main() {
    enum week today;  // 宣告列舉變數 today
    today = Wed;      // 設定 today 為星期三 (值為 3，因為列舉從 0 開始)

    // 印出列舉變數的值
    printf("今天是星期: %d\n", today);

    return 0;
}
