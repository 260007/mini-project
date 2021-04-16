#include "inc/header.h"
#include <math.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int c,choice,choice1;
    float result,r,side1,side2,side3,side,diagonal1,diagonal2,height,side4;
    float (*circle_fptr)(float , int) = NULL;//Following section was could have been achieved without using function pointers but only to implement function pointers concept limited number of functions were called using function pointers.
    float (*triangle_fptr)(float, float, float , int) = NULL;
    float (*square_fptr)(float * , int *) = NULL;
    float (*cuboid_fptr)(float, float, float ,float, int) = NULL;

    circle_fptr = &circle;
    triangle_fptr=&triangle;
    square_fptr=&square;
    cuboid_fptr=&cuboid;

    printf("WELCOME TO MENSURATION CALCULATOR\n");
    while(c!=0)
    {
    printf("PLEASE SELECT YOUR CHOICE");
     printf("SELECT THE SHAPE\n");
       printf("1.CIRCLE\n");
       printf("2.TRIANGLE\n");
       printf("3.SQUARE\n");
       printf("4.RHOMBUS\n");
       printf("5.RECTANGLE\n");
       printf("6.PARALLELOGRAM\n");
       printf("7.TRAPEZIUM\n");
       printf("8.CUBE\n");
       printf("9.CUBOID\n");
       printf("10.CONE\n");
       printf("11.SPHERE\n");
    scanf("%d",&c);
    if(c==1)
    {
        printf("Enter radius and choice\n");
        printf("1.For CIRCUMFERENCE\n");
        printf("2.For AREA\n");
        scanf("%f%d",&r,&choice);
        result = (*circle_fptr)(r,choice);
        printf("%f\n",result);
    }
    if(c==2)
    {
        printf("Enter side1,side2,side3 and choice\n");
        printf("1.For Peirmeter\n");
        printf("2.For AREA\n");
        scanf("%f%f%f%d",&side1,&side2,&side3,&choice);
        result=(*triangle_fptr)(side1,side2,side3,choice);
        printf("%f\n",result);
    }
     if(c==3)
    {
        printf("Enter side and choice\n");
        printf("1.For Peirmeter\n");
        printf("2.For AREA\n");
        scanf("%f%d",&side,&choice);
       // void *ptr=&side;
        float *ptr;
        int *ptrc;
        ptr=(float*)malloc(sizeof(float));//Following section could have been achieved without using dynamic memory but only to implement the concept of dynamic memory and passing by reference limited number of function have this type of implementation.
        ptr=&side;
        ptrc=(int*)malloc(sizeof(int));
        ptrc=&choice;
        result=(*square_fptr)(ptr,ptrc);
        printf("%f\n",result);
        free(ptr);
        free(ptrc);
    }
    if(c==4)
    {
        printf("Enter diagonal1 and diagonal2 and choice\n");
        printf("1.For Peirmeter\n");
        printf("2.For AREA\n");
        scanf("%f%f%d",&diagonal1,&diagonal2,&choice);
        result=rhombus(diagonal1,diagonal2,choice);
        printf("%f\n",result);
    }
    if(c==5)
    {
        printf("Enter side1,side2 and choice\n");
        printf("1.For Peirmeter\n");
        printf("2.For AREA\n");
        scanf("%f%f%d",&side1,&side2,&choice);
        result=rectangle(side1,side2,choice);
        printf("%f\n",result);
    }
    if(c==6)
    {
        printf("Enter side1,side2,height and choice\n");
        printf("1.For Peirmeter\n");
        printf("2.For AREA\n");
        scanf("%f%f%f%d",&side1,&side2,&height,&choice);
        result=parallelogram(side1,side2,height,choice);
        printf("%f\n",result);
    }
    if(c==7)
    {
        printf("Enter side1,side2,side3,side4,height and choice\n");
        printf("1.For Peirmeter\n");
        printf("2.For AREA\n");
        scanf("%f%f%f%f%f%d",&side1,&side2,&side3,&side4,&height,&choice);
        result=trapezium(side1,side2,side3,side4,height,choice);
        printf("%f\n",result);
        
    }
    if(c==8)
    {
        printf("Enter side and choice\n");
        printf("1.For CURVED SURFACE AREA\n");
        printf("2.For TOTAL SURFACE AREA\n");
        printf("3.For VOLUME\n");
        scanf("%f%d",&side,&choice);
        result=cube(side,choice);
        printf("%f\n",result);   
    }
    if(c==9)
    {
        printf("Enter side1,side,side3,height and choice\n");
        printf("1.For CURVED SURFACE AREA\n");
        printf("2.For TOTAL SURFACE AREA\n");
        printf("3.For VOLUME\n");
        scanf("%f%f%f%f%d\n",&side1,&side2,&side3,&height,&choice);
        result=(*cuboid_fptr)(side1, side2, side3 ,height,choice);
        printf("%f\n",result);   
    }
    if(c==10)
    {
        printf("Enter Radius,height and choice\n");
        printf("1.For CURVED SURFACE AREA\n"); 
        printf("2.For TOTAL SURFACE AREA\n");
        printf("3.For VOLUME\n");
        scanf("%f%f%d\n",&r,&height,&choice);
        result=cone(r,height,choice);
        printf("%f\n",result);   
    }
    if(c==11)
    {
        printf("Enter radius and choice\n");
        printf("1.For CURVED SURFACE AREA\n");
        printf("2.For TOTAL SURFACE AREA\n");
        printf("3.For VOLUME\n");
        scanf("%f%d",&r,&choice);
        result=sphere(r,choice);
        printf("%f\n",result);   
    }
    //c=1;
    }
}
