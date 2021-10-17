#include	<unistd.h>

main (int argc,char *argv[])
{
int  l, fdr,fdw;
char buff[21];

	printf("\n HELLO ----> EXAMPLE 2  \n");

	if ( (fdr = open (argv[1],0)) == -1) {
		printf("\n cannot open %s",argv[1]);exit(1);
	}
	
	close(1);
	if ( (fdw = creat (argv[2],0666)) == -1) {
		printf("\n cannot creat %s",argv[2]);exit(1);
	}


	while ( (l=read(fdr,buff,20)) != 0 )
		write(fdw,buff,20);		
}
