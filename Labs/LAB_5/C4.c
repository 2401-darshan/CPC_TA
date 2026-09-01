/*
 * Lab 5 - Part C (Q4)
 * Problem Statement: Demonstrate output of given programs.
 * 
 * Program 1:
 * #include<stdio.h>
 * void main() {
 *     int X=5;
 *     if(X==1){ printf("%d",X); }
 *     else{ printf("%d",X); }
 * }
 * Expected Output: 5
 * 
 * Program 2:
 * #include<stdio.h>
 * void main() {
 *     int X=5;
 *     if(1){ printf("hello"); }
 * }
 * Expected Output: hello
 * 
 * Program 3:
 * #include<stdio.h>
 * void main() {
 *     int X=5;
 *     if(X<1) printf("hello");
 *     if(X==5) printf("hi");
 *     else printf("hi");
 * }
 * Expected Output: hi
 */

#include <stdio.h>

void program1() {
    printf("--- Output of Program 1 ---\n");
    int X = 5;
    if (X == 1) {
        printf("%d\n", X);
    } else {
        printf("%d\n", X);
    }
}

void program2() {
    printf("\n--- Output of Program 2 ---\n");
    int X = 5;
    if (1) {
        printf("hello\n");
    }
}

void program3() {
    printf("\n--- Output of Program 3 ---\n");
    int X = 5;
    if (X < 1)
        printf("hello");
    if (X == 5)
        printf("hi\n");
    else
        printf("hi\n");
}

int main() {
    program1();
    program2();
    program3();
    return 0;
}
