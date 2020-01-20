//24. Algorytm znajdowania maksymalnego modułu różnicy między wyrazami ciągu a1,...,an (bez max i min)
#include<stdio.h>

int main(){
    int ciag[7] = {1,2,50,123,-420,120,69};

    int current = ciag[0] - ciag[1];
    int next = 0;

    if (current<0){
        current = -current;
    }

    for (int i = 0; i<7; i++){
        for (int j = 0; j<7; j++){
            next = ciag[i] - ciag[j];
            if (next < 0){
                next = -next;
            }
            if (next > current){
                current = next;
            }
        }
        printf("%d\n", current);
    }
}