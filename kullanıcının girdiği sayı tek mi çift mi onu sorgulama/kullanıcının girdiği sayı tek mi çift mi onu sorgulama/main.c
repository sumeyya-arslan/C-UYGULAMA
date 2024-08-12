//
//  main.c
//  kullanıcının girdiği sayı tek mi çift mi onu sorgulama
//
//  Created by sümeyya on 12.08.2024.
//

#include <stdio.h>

int main () {
    int kullanicisayi = 0;
    printf("bir sayi giriniz: ");
    scanf("%d", &kullanicisayi);
    
    if (kullanicisayi % 2 == 0) {
        printf("sayi cift\n");
    } else {
        printf("sayi tek\n");
    }
    
    return 0;
}
