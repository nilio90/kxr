#include <stdio.h>

#define IN 1
#define OUT 0
#define MAXLEN 15

main()
{
	int state = OUT;
	int c, i;
	int len[MAXLEN];

	for(i=0;i<MAXLEN;i++)
		len[i] = 0;

	while((c=getchar())!=EOF){
			if(c!=' ' && c!='\t' && c!= '\n'){
				state = IN;
				while((c=getchar())!=' ' &&(i=0;i<MAXLEN;i++)
