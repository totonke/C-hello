#include <stdio.h>

int main(void) {
    int number = 200;  // 例として200を使う (11001000)

    // 7ビット目（最上位ビット）
    int bit7 = (number >> 7) & 1;
    printf("%d", bit7);

    // 6ビット目
    int bit6 = (number >> 6) & 1;
    printf("%d", bit6);

    // 5ビット目
    int bit5 = (number >> 5) & 1;
    printf("%d", bit5);

    // 4ビット目
    int bit4 = (number >> 4) & 1;
    printf("%d", bit4);

    // 3ビット目
    int bit3 = (number >> 3) & 1;
    printf("%d", bit3);

    // 2ビット目
    int bit2 = (number >> 2) & 1;
    printf("%d", bit2);

    // 1ビット目
    int bit1 = (number >> 1) & 1;
    printf("%d", bit1);

    // 0ビット目（最下位ビット）
    int bit0 = (number >> 0) & 1;
    printf("%d", bit0);

    printf("\n");
    return 0;
}

#include <stdio.h>

int main(void) {
    int number = 200;  // 例: 200 = 11001000

    printf("number = %d\n", number);

    // 8ビット分を順に処理
    for (int i = 7; i >= 0; i--) {
        int shifted = number >> i;   // iビット右にシフト
        int bit = shifted & 1;       // 右端の1ビットを取り出す

        // デバッグ表示（途中経過）
        printf("i=%d, shifted=%3d, bit=%d\n", i, shifted, bit);
    }

    // まとめて8桁の出力
    printf("Binary = ");
    for (int i = 7; i >= 0; i--) {
        int bit = (number >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");

    return 0;
}

#include <stdio.h>

int main(void) {
    int number = 200;  // 例として200を使う (11001000)

    printf("number = %d\n", number);

    for (int i = 7; i >= 0; i--) {
        int shifted = number >> i;   // iビット右にずらした値
        int bit = shifted & 1;       // 右端の1ビットを取り出す

        // デバッグ表示
        printf("i = %d, shifted = %d (binary after shift), bit = %d\n",
               i, shifted, bit);

        // 実際の出力
        printf("%d", bit);
    }

    printf("\n");
    return 0;
}