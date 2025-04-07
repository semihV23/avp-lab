#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, ".UTF-8");

    int sinir;
    int carpan = 37;

    do {
        printf("Üst sınır: "); scanf("%d", &sinir);
    }while (sinir % 3 != 0 || sinir < 3);

    printf("\n");
    printf(" Çarpım \t Sonuç \n");
    printf("--------\t-------\n");

    for(int i=3; i<=sinir; i=i+3){
        printf("%d x %d\t\t%d\n", carpan, i, carpan*i);
    }
}