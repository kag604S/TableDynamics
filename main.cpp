#include <iostream>
#include "array.h"








int main() {
    int array[SIZE] = {1, 2, 3, 4, 5, 6, 7 ,8, 9, 10};
    int max = 0;
    int min = 0;
    float avg= 0;
    int option;



    do {

        menu();
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("Entering values to the array\n");
                enterValue(array);
                break;
            case 2:
                printf("Printing array\n");
                printArray(array);
                break;
            case 3:
                printf("Dispalaying minimum value\n");
                min=findMiniumValue(array);
                printf("Minium is: %d\n",min);
                break;
            case 4:
                printf("Dispalaying maximum value\n");
                max=findMaximumValue(array);
                printf("Maximum is: %d\n",max);
                break;
            case 5:
                printf("Dispalaying average value\n");
                avg=calculateAverage(array);
                printf("Average is: %f\n",avg);
                break;
            default:
                printf("Enter correct value");
        }

    } while (option != 0);

    printf("The End...");

    return 0;
}
