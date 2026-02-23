#include <stdio.h>

int main() {
    int n;
    printf("Bir TL miktarı giriniz: ");
    scanf("%d", &n);

    if (n < 20) {
        printf("n must be greater than or equal to 20\n");
        return 1;
    }

    int yirmi = n / 20;
    n = n % 20;
    int on = n / 10;
    n = n % 10;
    int bes = n / 5;
    n = n % 5;
    int bir = n;

    printf("20 tl bills : %d\n", yirmi);
    printf("10 tl bills : %d\n", on);
    printf("5 tl bills : %d\n", bes);
    printf("1 tl bills : %d\n", bir);

    return 0;
}
