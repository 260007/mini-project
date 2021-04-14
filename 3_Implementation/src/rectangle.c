#include"../inc/header.h"
#include<math.h>
float rectangle(float side1,float side2,int choice)
{
    if(choice==1)
    {
        return(2*(side1+side2));
    }
    if(choice==2)
    {
        return(side1*side2);
    }
}