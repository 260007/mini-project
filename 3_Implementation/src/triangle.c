#include"../inc/header.h"
#include<math.h>
float triangle(float side1,float side2,float side3,int choice)
{
    float s=(side1+side2+side3)/2;
    float p=sqrt(s*(s-side1)*(s-side2)*(s-side3));
    if(choice==1)
    {
        return (side1+side2+side3);
    }
    if(choice==2)
    {
        return p;
    }
}