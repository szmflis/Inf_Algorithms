/*16. Algorytm obliczający iloczyn skalarny dwóch
 wektorów z sprawdzaniem wymiarów (we: n, m, x1,…,xn, oraz y1, …,ym)*/

#include<stdio.h>

int main(){
    int vector_1[3] = {2,3,4};
    int vector_2[3] = {5,5,5};
    
    int result_vector[3] = {0,0,0};
    
    for (int i = 0; i<3; i++){
        result_vector[i] = vector_1[i]*vector_2[i];
    }

    for (int i = 0; i<3; i++){
        printf("%d ,", result_vector[i]); 
    }
}