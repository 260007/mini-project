#include "inc/header.h"
#include <math.h>
#include<stdio.h>
//#define PI 3.141
float cuboid(float,float,float,float,int);
float cone(float,float,int);
float sphere(float,int);
int main()
{
    int c,choice;
    float result,r,side1,side2,side3,side,diagonal1,diagonal2,height,side4;
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
        result=circle(r,c);
        printf("%f\n",result);
    }
    if(c==2)
    {
        printf("Enter side1,side2,side3 and choice\n");
        printf("1.For Peirmeter\n");
        printf("2.For AREA\n");
        scanf("%f%f%f%d",&side1,&side2,&side3,&choice);
        result=triangle(side1,side2,side3,choice);
        printf("%f\n",result);
    }
     if(c==3)
    {
        printf("Enter side and choice\n");
        printf("1.For Peirmeter\n");
        printf("2.For AREA\n");
        scanf("%f%d",&side,&choice);
        result=square(side,choice);
        printf("%f\n",result);
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
        result=cuboid(side1,side2,side3,height,choice);
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
