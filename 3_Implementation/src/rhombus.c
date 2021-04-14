#include"../inc/header.h"
#include<math.h>
float rhombus(float diagonal1,float diagonal2,int choice)
{
 float side=sqrt(pow((diagonal1/2),2)+pow((diagonal2/2),2));
 if(choice==1)
 {
     return 4*side;
 }
 if(choice==2)
 {
     return diagonal1*diagonal2;
 }
}
