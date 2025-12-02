#include<stdio.h>
int main()
{
	int X=10,p,q,r,s;
	p=X++;     
	printf("p=%d",p);
	q=--X;
	printf("q=%d",q);
	r=++X;
	printf("r=%d",r);
	s=X--;
	printf("s=%d",s);
	printf("X=%d",X);
	return 0;
}
