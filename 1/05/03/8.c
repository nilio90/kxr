#include <stdio.h>

main()
{
	long nl, nb, nt; 
	int c;

	nl=nb=nt=0;

	while((c=getchar()) != EOF){
		if(c == '\n')
			++nl;
		if(c == '\t')
			++nt;
		if(c == ' ')
			++nb;
	}

	printf("\nBlanks:\t%ld\nTabs:\t%ld\nNew Lines:\t%ld\n", nb, nt, nl);
}
