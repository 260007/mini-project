#include<stdio.h>
#include"../inc/header.h"
float cuboid(float side1,float side2,float side3,float height,int choice)

{
    if(choice==1)
    {
        return (2*height*(side1+side2));
    }
     if(choice==2)
    {
        return (2*(side1*side2+side2*side3+side3*side1));
    }
     if(choice==3)
    {
        return (side1*side2*side3);
    }
}