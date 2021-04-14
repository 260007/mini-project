#include<stdio.h>
#include"../inc/header.h"
#include<math.h>
#define PI 3.1410
float sphere(float r,int choice)
{
    if(choice==1)
    {
        return (4*PI*r*r);
    }
     if(choice==2)
    {
        return (4*PI*r*r);
    }
     if(choice==3)
    {
        return ((4*PI*r*r*r)/3);
    }
}