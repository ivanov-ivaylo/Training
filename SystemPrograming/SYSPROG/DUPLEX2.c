#include	<stdio.h>

main (int argc,char *argv[])
{
int i=0, j, k, l, fdr,fdw;
char buff[21];

	printf("\n HELLO ---->  EXAMPLE 1\n");

	if ( (fdr = open (argv[1],0)) == -1) {
		printf("\n cannot open %s",argv[1]);exit(1);
	}
	
	close(1);
	if ( (fdw = creat (argv[2],0666)) == -1) {
		printf("\n cannot creat %s",argv[2]);exit(1);
	}


	while ( (l=read(fdr,buff,20)) != 0 )
	{
		++i;
		buff[20]='\0';
		printf("\n Line number = %d\n",i);
		printf(" ----> %s\n",buff);

        }
}
