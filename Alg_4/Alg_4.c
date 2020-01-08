//Napisać program sumujący liczby dwucyfrowe podzielne przez 7

#include<stdio.h>

int main(){
    calc();
}

int calc(){
    int result = 0;
    for (int i=7; i<100; i+=7){
        result+=i;
    }
    printf("%d\n", result);
}