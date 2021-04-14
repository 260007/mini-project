#include "../inc/header.h"
#include <math.h>
#include<stdio.h>
//#define PI 3.1410
float circle(float r, int choice)
{
    if(choice==1)
    {
        return 2*PI*r;
    }
    if(choice==2)
    {
        return PI*r*r;
    }
}