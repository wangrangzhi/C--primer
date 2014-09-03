#include <stdio.h>

main()
{
	int c, nb, nt, nl;
	nb = 0;
	nt = 0;
	nl = 0;
	while((c = getchar()) != EOF)
	{
		if(c == ' ')
			++nb;
		if(c == '\t')
			++nt;
		if(c == '\n')
			++nl;
		if(c == '9');
			break;
	}
	printf("%d %d %d", nb, nt, nl);
}
