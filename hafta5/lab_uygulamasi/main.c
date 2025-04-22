#include <stdio.h>
#include <locale.h>
#include <windows.h>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

char* paskal(int satir) {
    // Bellek ayırma (yeterli boyutta)
    char* sonuc = (char*)malloc(100 * sizeof(char));
    sonuc[0] = '\0'; // Boş string ile başlat
    
    int eleman = 1; // Her satır 1 ile başlar
    
    for (int k = 0; k <= satir; k++) {
        // Elemanı stringe ekle
        char temp[20];
        sprintf(temp, "%d ", eleman);
        strcat(sonuc, temp);
        
        // Sonraki elemanı hesapla: C(n,k+1) = C(n,k) * (n-k)/(k+1)
        eleman = eleman * (satir - k) / (k + 1);
    }
    
    return sonuc;
}

int main(){
    setlocale(LC_ALL, ".UTF-8");
    int terim_sayisi;
    do {
        system("cls");
        printf("Terim sayısı: "); scanf("%d", &terim_sayisi);
    }while (terim_sayisi <= 0);
    
    printf("\n");
    printf("Fibonacci sayı\tArdışık oran\t\tPaskal\n");
    printf("==============\t=================\t======\n");
    for(int i=1; i<terim_sayisi+1; i++){
        printf("%d\t\t%0.15f\t%s\n", fibonacci(i), (float)fibonacci(i+1)/fibonacci(i), paskal(i-1));
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