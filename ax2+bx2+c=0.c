#include<stdio.h>
int main(){
float a, b, c, d, x, y;
printf("input value:");
scanf("%f",&a);
printf("input value:");
scanf("%f",&b);
printf("input value:");
scanf("%f",&c);
d=sqrt(b*b-4*a*c);
x=(-b+d)/2*a;
y=(-b-d)/2*a;
printf("result is: %f",x);
printf("result is: %f",y);
return 0;
}
