//เขียนโปรแกรมรับข้อมูลจำ นวนเต็ม 5 จำนวนจากผู้ใช้ และหาว่าค่าเฉลี่ยของ
#include<stdio.h>
void main()
{
    int i,count=5,num,sum=0;
    float av=0;
    for (size_t i = 0; i <= count; i++)
    {
       printf("Enter number : " ,1);
       scanf("%d",&num);
       sum=sum+num; 
    }
    av=sum/count;
    printf("Average : %.2f",av);
}