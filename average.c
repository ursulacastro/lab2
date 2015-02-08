//  Average
//  Ursula Rosa Monteiro de Castro _ 07/02/15.


#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int values [100];
    int number;
    int temp = 0;
    int j=0;
    float average, above;
    
    printf("Enter with a value: ");
    scanf("%d", &number);
    
    while (number > 0) {
        values [temp] = number;
        temp = temp +1;
        printf("Enter with a value: ");
        scanf("%d", &number);
    }//end while
    
    for (int i = 0; i < temp; i++) {
        average = average + values[i];
    }//end for
    
    average = average/temp; //average
  
    
    for (int k = 0; k < temp; k++) {
        if (values[k] > average) {
            above = above + values[k];
            j = j +1;
        }//end if
    }//end for
    
    above = above / j; // above-average
    
    printf("%f", above);
    
    return 0;
}//end main
