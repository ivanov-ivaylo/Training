#include <stdio.h>
main (argc,argv)
 int argc;
 char *argv[];
{
  int i ;

  if ( argc == 1 )
     cmdcat ( (char *)0 );  /*  <=>  cmdcat (0);  */

  else
     for (i=1; i <= argc-1; i++)
     cmdcat (argv[i]);
}

cmdcat(fnam)
char *fnam;
{
  char buffer[512];
  int length; int fd =0;

  if (fnam)
   if ( (fd=open(fnam,0)) == -1 ) {
        printf("\ncat: can't open %s\n",fnam);
        exit();
   }
  while (length=read(fd,buffer,512) )
   write (1,buffer,length);
 }
