#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s,p;
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    printf("the value os s:%f\n",s);
    p=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("the p value %f",p);