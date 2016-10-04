#include <stdio.h>

#define IN 1
#define OUT 0

main()
{
	int state = OUT;
	int c;

	while((c=getchar()) != EOF){
		if(c!=' ' && c!='\t' && c != '\n'){
			state = IN;
			putchar(c);
		}else if(state == IN){
			state = OUT;
			putchar('\n');
		}
	}
}
