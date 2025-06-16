//เขียนโปรแกรมคำนวณพื้นที่ของวงกลมโดยรับรัศมีของวงกลมจากผู้ใช้
#include<stdio.h>d
void main()
{
    const float PT = 3.14159265;
    float r , CArea=0;
   printf("Entre radius : ");
   scanf("%f",&r);
   printf("r = %.2f",r);
   CArea = PT*(r*r);
   printf("\nCircle area = %.2f",CArea);
}