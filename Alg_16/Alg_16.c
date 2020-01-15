/*16. Algorytm obliczający iloczyn skalarny dwóch
 wektorów z sprawdzaniem wymiarów (we: n, m, x1,…,xn, oraz y1, …,ym)*/

#include<stdio.h>

int main(){
    int vector_1[3] = {2,3,4};
    int vector_2[3] = {5,5,5};
    vector_calc(vector_1, 3, vector_2, 3);

}

int vector_calc(int vector_1[],int n, int vector_2[], int m){
    if (n != m){
        printf("Input vectors are of unequal size");
    }
}