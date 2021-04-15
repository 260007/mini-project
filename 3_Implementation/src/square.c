#include"../inc/header.h"
float square(float * side,int* choice)
{
    if(*choice==1)
    {
        return 4*(*side);
    }
    if(*choice==2)
    {
        return (*side)*(*side);
    }
}
