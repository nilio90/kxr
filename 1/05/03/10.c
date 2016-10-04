#include <stdio.h>

main()
{
	int c;

	while((c=getchar())!=EOF){
		if(c=='\t'){
			putchar('\\');
			c='t';
		}
		if(c=='\\'){
			putchar('\\');
			c='\\';
		}
		if(c=='\b'){
			putchar('\\');
			c='b';
		}
		putchar(c);
	}
}
