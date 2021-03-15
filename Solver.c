#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

	if(argv[1] == NULL || argv[2] == NULL || argv[3] == NULL)
	{
		printf("Please provide a,b and c\nUsage: pq-solver 3 4 -4\n");
		return 0;
	}

	int a,b,c,p,q;
	char *endptr;

	a = strtol(argv[1],&endptr, 10);
	b = strtol(argv[2],&endptr, 10);
	c = strtol(argv[3],&endptr, 10);

	printf("a: %d\nb: %d\nc: %d\n\n",a,b,c);

	for(int i = -10000; i < 10000; i++)
	{
	 if(i == 0) return 0;
	 if(((float)a*c / i) == (a*c / i))
	 {
		p = a*c / i;
		q = i;

		if(p + q == b)
		{
			printf("p: %d\nq: %d\n",p,q);
			break;
		}else if(-p + -q == b)
			{
				printf("p: %d\nq: %d\n",p,q);
				break;
			}
	 }
	}

	return 0;
}
