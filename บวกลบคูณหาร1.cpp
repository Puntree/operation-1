#include<stdio.h>
int main()
{
	double a,b,sum,diff,mul,div;
	printf("First Number : ");
	scanf("%lf",&a);
	printf("Second Number : ");
	scanf("%lf",&b);
	sum = a+b;
	diff = a-b;
	mul = a*b;
	div = a/b;
	printf("sum = %lf\n",sum);
	printf("diff = %lf\n",diff);
	printf("mul = %lf\n",mul);
	printf("div = %lf\n",div);
}
