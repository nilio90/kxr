#include <stdio.h>

main()
{
	long nc = 0;
	int c;
	
	while((c = getchar()) != EOF) {
		++nc;
	}
	printf("%ld\n",nc);
}
