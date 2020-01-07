//Algorytm dzielenia z resztą dwóch liczb całkowitych (nieujemnej przez dodatnią) przy pomocy odejmowania

#include <stdio.h>

int main()
{
    calc(13, 3);
}

void calc(int x, int y)
{
    int counter = 0;
    if (x < y)
    {
        int temp = y;
        y = x;
        x = temp;
    }
    while (x >= y)
    {
        x = x - y;
        counter++;
    }
    printf("Result %d,%d", counter, x);
}