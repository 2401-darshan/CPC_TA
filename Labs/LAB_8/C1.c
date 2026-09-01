/*
 * Lab 8 - Part C (Q1)
 * Problem Statement: Calculate sum and average of the square of first 10 integers whose square has last digit 4 using while loop
*/
#include <stdio.h>
void main(){
    int i=0, sum=0, count=0;
    float average;
    while(i<=10){
        int square = i*i;
        if(square%10==4){
            sum += square;
            count++;
        }
        i++;
    }
    average = (float)sum/count;
    printf("Sum of squares with last digit 4: %d\n", sum);
    printf("Average of squares with last digit 4: %.2f\n", average);
}