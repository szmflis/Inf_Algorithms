// 27. Algorytm obliczania wyznacznika macierzy o trzech 
// wierszach i trzech kolumnach

#include<stdio.h>

int main(){
    int macierz[3][3] = {
        {1,2,3},
        {2,2,2},
        {3,4,2}
    };
    int a_1 = macierz[0][0]*macierz[1][1]*macierz[2][2];
    int a_2 = macierz[1][0]*macierz[2][1]*macierz[0][2];
    int a_3 = macierz[2][0]*macierz[0][1]*macierz[1][2];

    int b_1 = macierz[0][2]*macierz[1][1]*macierz[2][0];
    int b_2 = macierz[1][2]*macierz[2][1]*macierz[0][0];
    int b_3 = macierz[2][2]*macierz[0][1]*macierz[1][0];
    

    printf("%d  %d  %d\n", a_1, a_2, a_3);
    printf("%d  %d  %d\n", b_1, b_2, b_3);

    printf("Wyznacznik : %d", a_1+a_2+a_3 -b_1-b_2-b_3);
}