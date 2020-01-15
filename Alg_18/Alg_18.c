//dwumian newtona i silnia

#include<stdio.h>

int main(){
    int n = 6;
    int k = 4;

    printf("%d\n", silnia(n));
    printf("%d\n", newton(n,k));
}

int silnia(int n){
    if (n==0){
        return 1;
    } else {
        return silnia(n-1)*n;
    }
}

int newton(int n, int k){
    if (n == 0 || k == n){
        return 1;
    }else {
        return newton(n-1, k-1)+newton(n-1,k);
    }
}