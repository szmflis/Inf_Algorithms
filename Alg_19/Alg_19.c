//19. Algorytm obliczania wartości wielomianu n-tego stopnia wg schematu Hornera

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int n;
    printf("Podaj stopien wielomianu: \n");
    scanf("%d", &n);

    int wspolczynniki[10];
    for (int i = 0; i<n; i++){
        printf("Podaj wspolczynnik przy potedze %d\n", i);
        scanf("%d", &wspolczynniki[i]);
    }

    for(int i = 0; i<n; i++){
        printf("%dx^%d\n", wspolczynniki[i], i);
    }    

    int x;
    printf("Podaj wartosc dla ktorej wielomian ma zostac obliczony: \n");
    scanf("%d", &x);


    int suma = 0;
    for (int i = 0; i<n; i++){
        suma += wspolczynniki[i]*pow(x,i);
    }

    printf("%d", suma);
}