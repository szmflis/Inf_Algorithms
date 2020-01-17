//28. Algorytm realizujący operacje transponowania macierzy kwadratowej NxN, N>1

#include<stdio.h>

int main(){
    int array[3][3] = {
        {1,2,3},
        {0,6,7},
        {4,2,0}
    };

   for (int i = 0; i<3; i++){
       for (int j = 0; j<3; j++){
           printf("%d ", array[j][i]);
       }
       printf("\n");
   }
}