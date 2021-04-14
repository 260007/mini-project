#include"../inc/header.h"
#include<stdio.h>
float parallelogram(float side1,float side2,float height,int choice)
{
    if(choice==1)
    {
        return (2*(side1+side2));
    }
    if(choice==2)
    {
        return height*side2;
    }
}
