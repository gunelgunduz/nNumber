#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // Program that adds odd and even numbers of n numbers
    int n, doubleTotal=0, oneTotal=0;

    printf("Enter the value n: "); scanf("%d", &n);
     int i;
    for(i=0; i<n; i++){
        int number;
       printf(" Number :"); scanf("%d", &number);
       if(number%2==0)
         doubleTotal += number;
         else
         oneTotal += number;
    }

    printf("Sum of even numbers : %d\n", doubleTotal);
    printf("Sum of odd numbers : %d", oneTotal);
    return 0;
}