#include	<unistd.h>

main ()
{
int fd, i, j, k, m;
char *strj;

	for ( i=0; i < 15; i++)
		printf("\n i= %d",i);

	if ( (fd = creat ("fff",0666)) == -1) {
		printf("\n cannot creat %s","fff");exit(1);
	}
	k = dup(1);
	printf("\n file descriptor for synonym of stdout = %d\n",k);

	close(1);
	j = dup(fd);

	write(k,"\n duplicated j= ",strlen(" duplicated j= "));
	sprintf(strj,"%d",j);
	write(k,strj,sizeof(strj));

	for ( i=0; i < 5; i++)
		printf(" HELLO\n");

	close(1);
	dup(k);
 	printf("\n Stdout was restored!\n");

}
