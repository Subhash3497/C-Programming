//
//  main.c
//  Project 5
//  Created by Subhash on 10/4/15.


#include <stdio.h>

int main() {
    FILE * ifp;
    char filename[30];
    int templow;
    int temphigh;
    int month, day , year;
    float temp;
    float sum;


    //User Prompt and Input
    printf("Tell me about your dragons preffered temperature for flying:\n");
    printf("What is the coldest temperature they can fly in ?\n");
    scanf("%d",&templow);
    printf("What is the hottest temperature they can fly in ?\n");
    scanf("%d",&temphigh);
    printf("Please enter the name of the weather data file for Dragon Island.\n");
    scanf("%s",&filename);





    return 0;
}
