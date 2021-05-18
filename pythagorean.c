#include <cs50.h>
#include <stdio.h>

int main()
{
	float s1,s2,s3,l,m1,m2,p;
	s1 = get_float("side 1 ");
  s2 = get_float("side 2 ");
  s3 = get_float("side 3 ");
	
	if(s1>s2)
	{
		l=s1;
		m1=s2;
	}
	else
	{
		l=s2;
		m1=s1;
	}
	
	if(l>s3)
		m2=s3;
	else
	{
		m2=l;
		l=s3;
	}
	p = (m1*m1)+(m2*m2)-(l*l);
	if(p==0)
		printf("Yes");
	else
		printf("No");
}
