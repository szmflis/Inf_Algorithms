/*Obliczyć wyrazy ciągu y1, …,yn na podstawie ciągu x1,…,xn, gdzie
y1 = x1 a yi = średniej arytm. xi-1 i xi (i>1).*/
#include<stdio.h>

int main(){
    double x[5] = {1,2,3,4,5};

    double y[5] = {0};
    for (int i = 0; i<5; i++){
        if(i==0){
            y[i] = x[i];
        } else {
            y[i] = (x[i] + x[i-1])/2;
        }
    }

    for (int i = 0; i < 5; i++){
        printf("Entry %d in Y : %f\n", i+1, y[i]);
    }
}
