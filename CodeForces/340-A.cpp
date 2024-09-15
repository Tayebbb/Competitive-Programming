#include<stdio.h>
int main()
{
 int a,b,c,d,e,sum,sum2,sum3,sum4,sum5;
 scanf("%d",&a);
sum=a/5;
b=a%5;


sum2=b/4;
c=b%4;


sum3=c/3;
d=c%3;


sum4=d/2;
e=d%2;


sum5=e/1;




   printf("%d", sum+sum2+sum3+sum4+sum5);
}
