/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: root
 *
 * Created on July 18, 2016, 4:07 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
    int i;
    int printen = -1;
    for (i=1; i<100; i++)
    {
        printen = -1;
        if ((i % 3)==0)
        {
            printf("fizz");
            printen = 1;
        }
        if ((i % 5)==0)
        {
            printf("buzz");
            printen = 1;
        }
        if (printen > -1)
        {
            printf("--%d \n", i);
            printen = 1;
        }
    }
    for (i=100; i<200; i++)
    {
        printen = -1;
        if ((i % 5)==0)
        {
            printf("buzz");
            printen = 1;
        }
        if ((i % 3)==0)
        {
            printf("fizz");
            printen = 1;
        }       
        if (printen > -1)
        {
            printf("--%d \n", i);
            printen = 1;
        }
    }
    return (EXIT_SUCCESS);
}

