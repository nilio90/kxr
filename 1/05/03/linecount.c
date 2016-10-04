#include <stdio.h>

main() 
{
	long lc=0;
	int c;

	while((c=getchar()) != EOF){
		if(c == '\n')
			++lc;
	}
	printf("%ld\n", lc);
}
