#include<stdio.h>
#include<conio.h>
#include<math.h>
int power(int n);
main()
{
	int n,p,l,r,o=0;
	printf("Enter Number: \a");
	scanf("%d",&n);
	p=power(n);
	l=n;
	while(l!=0)
	{
		r=l%10;
		o+=pow(r,p);
		l/=10;
	}
	(o==n)?printf(" %d is Armstrong number.",n):printf(" %d is not Armstrong number.",n);
	getch();
}
int power(int n)
{
	int c=0;
	while(n!=0)
	{
		c++;
		n/=10;
	}
	return c;
}
