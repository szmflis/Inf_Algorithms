//Algorytm znajdowania liczb pierwszych metodą sita Eratostenesa

#include<stdio.h>


int main(){
    int array[51];
    for (int i = 0; i < 49; i++){
        array[i] = i + 2;
    }

    for (int i = 0; i < 49; i++){
        printf("%d ", array[i]);
    }
    
    

}
