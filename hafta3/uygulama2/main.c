#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main(){
    setlocale(LC_ALL, ".UTF-8");

    int k[3];

    system("cls");

    printf("Kenar uzunluklarını giriniz.\n\n");
    printf(" 1. Kenar \t 2. Kenar \t 3. Kenar \n");
    printf("----------\t----------\t----------\n");
    printf("> "); scanf("%d", &k[0]);
    system("cls");

    printf("Kenar uzunluklarını giriniz.\n\n");
    printf(" 1. Kenar \t 2. Kenar \t 3. Kenar \n");
    printf("----------\t----------\t----------\n");
    printf("%d\t\t> ", k[0]); scanf("%d", &k[1]);
    system("cls");

    printf("Kenar uzunluklarını giriniz.\n\n");
    printf(" 1. Kenar \t 2. Kenar \t 3. Kenar \n");
    printf("----------\t----------\t----------\n");
    printf("%d\t\t%d\t\t> ", k[0], k[1]); scanf("%d", &k[2]);
    system("cls");

    printf("Kenar uzunluklarını giriniz.\n\n");
    printf(" 1. Kenar \t 2. Kenar \t 3. Kenar \n");
    printf("----------\t----------\t----------\n");
    printf("%d\t\t%d\t\t%d\n\n", k[0], k[1], k[2]);

    printf("Sonuç: ");

    if (k[0]+k[1]>k[2] && k[0]+k[2]>k[1] && k[1]+k[2]>k[0]){
        // bu bir ücgen
        printf("Bu bir ");
    }else{
        //bu bir üçgen değil
        printf("Bu bir üçgen değildir.");
        return 0;
    }

    if (k[0] == k[1] || k[0] == k[2] || k[1] == k[2]){
        if (k[0] == k[1] && k[1] == k[2]){
            //eşkenar üçgen
            printf("eşkenar ");
        }else{
            //ikizkenar üçgen
            printf("ikizkenar ");
        }
    }else{
        //çeşitkenar üçgen
        printf("çeşitkenar ");
    }
    if (k[0]*k[0]+k[1]*k[1]==k[2]*k[2] || 
        k[0]*k[0]+k[2]*k[2]==k[1]*k[1] || 
        k[1]*k[1]+k[2]*k[2]==k[0]*k[0]){
        // dik üçgen
        printf("dik ");
    }
    printf("üçgendir.");
}