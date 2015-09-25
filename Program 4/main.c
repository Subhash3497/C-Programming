//Subhash Naidu
//COP3223C-15 0R04
//Program 4
//9/24/2015
//prints the avg distance of a dragons practice flights.


#include <stdio.h>

int main()
{
    //Variables
    int days, days_input = 0;
    int flights, flights_input = 0;
    float distance = 0.0, distance_input = 0.0;
    float average;

    //Assignment
    printf("How many days has your dragon been practicing?\n");
    scanf("%d",&days_input);

    for (days = 1; days <= days_input; days++)
    {
        printf("How many flights were completed on day %d\n",days);
        scanf("%d",&flights_input);

        for (flights = 1; flights <= flights_input; flights++)
        {
            printf("How long was flight %d\n",flights);
            scanf("%f",&distance_input);
            distance = distance + distance_input;
        }

        average = distance / flights_input;
        printf("The average distance for this day is %.3f.\n\n", average);
        distance = 0;

    }

    return 0;
}
