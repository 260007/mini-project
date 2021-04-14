#include"../inc/header.h"
#include<stdio.h>
float trapezium(float side1,float side2,float side3,float side4,float height,int choice)
{
    if(choice==1)
    {
        return (side1+side2+side3+side4);
    }
    if(choice==2)
    {
        return (height*(side1+side3)*0.500000);
    }

}