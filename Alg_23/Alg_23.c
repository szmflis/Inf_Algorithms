//23. Algorytm znajdowania liczb pierwszych metodą sita Eratostenesa

#include<stdio.h>
#include<stdlib.h>

int main(){
    int tab[25];
    for (int i = 1; i<=25; i++){
        tab[i-1] = i;
    }

    int j;
    int tab_wynikowy[25];
    for (int i = j = 0; i < 25; i++){
        if (tab[i]%2 != 0 && tab[i]%3 != 0 && tab[i]&5 != 0&& tab[i]&7 != 0){
            tab_wynikowy[j] = tab[i];
            j++;
        }
    }

    for (int i = 0; i<j; i++){
        printf("%d ,", tab_wynikowy[i]);
    }
}