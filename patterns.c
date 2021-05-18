#include <cs50.h>
#include <stdio.h>

int main()
{
	int n, r, i, j, k;
	n = get_int("Enter type of pattern (1 or 2) ");
	r = get_int("Number of rows ");
	switch(n)
	{
		case 1 :
			for(i=r-1;i>=0;i--)
			{
				for(j=0;j<=i;j++)
					printf("#");
				printf("\n");
			}
			break;
			
		case 2:
			for(i=r;i>0;i--)
			{
				for(j=0;j<i-1;j++)
					printf(" ");
				
				for(k=0;k<(r-j);k++)
					printf("#");
				printf("\n");
			}
			break;
			
		default : printf("Read carefully!");
	}
}
