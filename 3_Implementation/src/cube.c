#include"../inc/header.h"
#include<stdio.h>
float cube(float side,int choice)
{
    if(choice==1)
    {
        return (4*side*side);
    }
    if(choice==2)
    {
        return (6*side*side);
    }
    if(choice==3)
    {
        return (side*side*side);
    }

}