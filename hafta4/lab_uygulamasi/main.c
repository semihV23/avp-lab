#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, ".UTF-8");
    setlocale(LC_NUMERIC, "C");

    int eski[3];
    int yeni[3];
    float gamma;
    int a, b;

    while(1){
        printf("\033[H\033[J");
        printf("[0, 255] aralığında renk bilgisini giriniz.\n\n");
        printf("Kırmızı   \tYeşil     \tMavi      \n");
        printf("----------\t----------\t----------\n");
        printf("> "); scanf("%d", &eski[0]);
        if(eski[0] <= 255 && eski[0] >= 0){
            break;
        }
    }

    while (1)
    {
        printf("\033[H\033[J");
        printf("[0, 255] aralığında renk bilgisini giriniz.\n\n");
        printf("Kırmızı   \tYeşil     \tMavi      \n");
        printf("----------\t----------\t----------\n");
        printf("%d\t\t> ", eski[0]); scanf("%d", &eski[1]);
        if(eski[1] <= 255 && eski[1] >= 0){
            break;
        }
    }
    
    
    while (1)
    {
        printf("\033[H\033[J");
        printf("[0, 255] aralığında renk bilgisini giriniz.\n\n");
        printf("Kırmızı   \tYeşil     \tMavi      \n");
        printf("----------\t----------\t----------\n");
        printf("%d\t\t%d\t\t> ", eski[0], eski[1]); scanf("%d", &eski[2]);
        if(eski[2] <= 255 && eski[2] >= 0){
            break;
        }   
    }

    printf("\033[H\033[J");
    printf("[0, 255] aralığında renk bilgisini giriniz.\n\n");
    printf("Kırmızı   \tYeşil     \tMavi      \n");
    printf("----------\t----------\t----------\n");
    printf("%d\t\t%d\t\t%d\n\n", eski[0], eski[1], eski[2]);

    printf("A değerini giriniz: "); scanf("%d", &a);
    printf("B değerini giriniz: "); scanf("%d", &b);

    gamma = a*a-b;

    for(int i=0; i<3; i++){
        yeni[i] = (int)(255*pow((float)eski[i]/255.0f, gamma));
    }

    printf("Gama düzeltmesi uygulanmış renk: RGB(%d, %d, %d)", yeni[0], yeni[1], yeni[2]);
}