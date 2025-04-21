#include <stdio.h>
#include <locale.h>
#include <windows.h>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(){
    setlocale(LC_ALL, ".UTF-8");
    int terim_sayisi;
    do {
        system("cls");
        printf("Terim sayısı: "); scanf("%d", &terim_sayisi);
    }while (terim_sayisi <= 0);
    
    printf("\n");
    printf("Fibonacci sayı\tArdışık oran\n");
    printf("==============\t=================\n");
    for(int i=1; i<terim_sayisi+1; i++){
        printf("%d\t\t%0.15f\n", fibonacci(i), (float)fibonacci(i+1)/fibonacci(i));
    }
    return 0;
}

// Fibonacci foknasiyonu örnek çıktıları:
// fibo(1) = 1
// fibo(2) = 1
// fibo(3) = 2
// fibo(4) = 3
// fibo(5) = 5
// fibo(6) = fibo(4) + fibo(5)
// fibo(k) = fibo(k-2) + fibo(k-1)