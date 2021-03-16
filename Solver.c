#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	const char version[5] = "1.0.1";
	printf("\npq-solver v%s\n\n",version);
	if(argc != 4)
	{
		printf("Please provide a,b and c\nUsage: pq-solver [a b c]\n");
		return 0;
	}

	int a,b,c,p,q;
	char *endptr;

	a = strtol(argv[1],&endptr, 10);
	b = strtol(argv[2],&endptr, 10);
	c = strtol(argv[3],&endptr, 10);

	printf("a: %d\nb: %d\nc: %d\n\np*q: %d\np+q: %d\n",a,b,c,a*c,b);

	for(int i = -10000; i < 10000; i++)
	{
	 if(i != 0)
	{

		 if(((float)a*c / i) == (a*c / i))
	 	 {
			p = a*c / i;
			q = i;
			if(p+q == b)
			{
				printf("\np: %d\nq: %d\n",p,q);
				break;
			}
		}
	}
	}

	return 0;

}
