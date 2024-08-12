#include <stdio.h>

int main() {
    int sayi1 = 0, sayi2 = 0, sayi3 = 0;

    printf("sayi 1'i giriniz: ");
    scanf("%d", &sayi1);

    printf("sayi 2'yi giriniz: ");
    scanf("%d", &sayi2);

    printf("sayi 3'ü giriniz: ");
    scanf("%d", &sayi3);

    if (sayi1 >= sayi2 && sayi1 >= sayi3) {
        printf("sayi1 en büyüktür: %d\n", sayi1);
    } else if (sayi2 >= sayi1 && sayi2 >= sayi3) {
        printf("sayi2 en büyüktür: %d\n", sayi2);
    } else {
        printf("sayi3 en büyüktür: %d\n", sayi3);
    }

    return 0;
}

