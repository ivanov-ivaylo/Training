#define	YES	1
#define	NO	0
#include	<stdio.h>
#include	<fcntl.h>
#include	<string.h>
main(argc,argv)
int argc;
char *argv[]; 
{
   int fd , i;
  
   if ( argc == 1)   wcount(0); 
   else {
	for ( i=1; i < argc; i++)
	{
	   	if ( (fd = open(argv[i],O_RDONLY)) == -1) {
           		write (1,"\ncan't open ",strlen("\ncan't open "));
           		write (1,argv[i],strlen(argv[i]));
           		write (1,"\n",1);
			continue;
           	}
		wcount(fd,argv[i]);
		close(fd);
	 }  
	}
}

wcount(int fdes, char *fname)
{
   int nl = 0, nc = 0, nw = 0, inword = NO;
   char strres[25], c;


   while ( read(fdes, &c, 1) ) {

      ++nc;

      if ( c == '\n') ++nl;

      if ( c == ' ' || c == '\n' || c == '\t')
        inword = NO;
      else  if (inword == NO ) {
         inword = YES;
         nw++;
      }
   }
   sprintf(strres,"\nnl=%d  nw=%d  nc=%d	%s\n",nl,nw,nc,fname);
   write(1,strres,strlen(strres));
}
