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
    int days;
    int flights;
    float distance [5] = {};
    int average;




    //Assignment
    for (printf("How man days has your dragon been practicing?\n"),scanf("%d",&days); days != 0; days--)
    {
        for (printf("How many flights were completed on day %d\n",days), scanf("%d",&flights); flights != 0; flights--)
        {
            for (printf("How long was flight %d\n",flights), scanf("%f",&distance); ;) {
                break;


            }

        }





    }


    return 0;
}
