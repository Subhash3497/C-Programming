//
//  main.c
//  Program 4
//
//  Created by Sebastian on 9/21/15.
//  Copyright © 2015 Subhash. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    //Variables
    int days, days_input;
    int flights, flights_input;
    float distance, distance_input;
    int average;


    //Assignment
    printf("How many days has your dragon been practicing?\n");
    scanf("%d",&days_input);

    for (days = 1; days <= days_input; days++) {
        printf("How many flights were completed in day %d\n",days);
        scanf("%d",&flights_input);
        for (flights = 1; flights <= flights_input; flights++) {
            printf("How long was flight %d\n",flights);
            scanf("%f",&distance_input);


        }

    }







    return 0;
}
