#include<stdio.h>
#include"../inc/header.h"
#include<math.h>
#define PI 3.1410
float cone(float r,float height,int choice)
{
    float l= sqrt(pow(r,2)+pow(height,2));
    if(choice==1)
    {
        return (PI*r*l);
    }
    if(choice==2)
    {
        return(PI*r*(r+l));
    }
    if(choice==3)
    {
        return ((0.33333)*PI*r*r*height);
    }
}