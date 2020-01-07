//Algorytm mnożenia dwóch liczb nieujemnych całkowitych przy pomocy dodawania
#include <stdio.h>

int main(){
    printf("%d", calc(12,5));
}

int calc(int x, int y){
    int result = 0;
    for (int i=0; i<y; i++){
        result += x;
    }
    return result;
}