#include <iostream>
#include "array.h"

void  enterValue(int *array) {
    printf("Input values to array:\n");
    for (int i=0; i < SIZE; ++i) {
        printf("*(array + %d) = ", i);
        scanf("%d", &*(array + i) );
    }
}

void printArray(int *array) {
    for (int i=0; i < SIZE; ++i) {
        printf("*(array + %d) = %d\n", i, *(array + i));
    }
}


int findMaximumValue(int *array) {
    int max = *array;
    for (int i = 0; i < SIZE; ++i )
    {
        if(*(array +i) > max)
            max = *(array +i);
    }
    return max;
}


int findMiniumValue(int *array){
    int min = *array;
    for (int i = 0; i < SIZE; ++i )
    {
        if(*(array + i) < min)
            min = *(array + i);
    }
    return min;
}

float calculateAverage(int *array){
    int sum = 0;
    for (int i = 0; i < SIZE; ++i ) {
        sum = sum + *(array + i);
    }
    float avg = (float)sum / SIZE;
    return avg;
}

void menu(){
    int option;
    printf("1.Enter value to array \n") ;
    printf("2.Print array \n") ;
    printf("3.Display minimum value \n") ;
    printf("4.Display maximum value \n") ;
    printf("5.Display average value \n") ;
    printf("0. Exit Program \n") ;
    printf("Enter Value:\n");
}

