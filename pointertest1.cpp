#include<stdio.h>
int main()
{
	int a,*p;
	printf("p=%p a=%d\n",p,a);
	p=&a;
	printf("p=%p a=%d\n",p,a);
	a=100;
	printf("p=%p a=%d\n",p,a);
	printf("*p=%d\n",*p);
	p=p+1;
	printf("p=%p a=%d\n",p,a);
	printf("*p=%d\n",*p);
	double b,*q;
	printf("q=%p b=%f\n",q,b);
	q=&b;
	printf("q=%p b=%f\n",q,b);
	b=100;
	printf("q=%p b=%f\n",q,b);
	q=q+1;
	printf("q=%p b=%f\n",q,b);
	return 0;
}
