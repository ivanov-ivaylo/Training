#include <stdio.h>
main(argc,argv)
int argc;
char *argv[];
{
   int fdi, fdo;
   int i;
   char buff[10];
   int nbytes=0;
   
   	
   	close(0);
           if( (fdi=open(argv[1],0)) == -1 ){
             printf("\nmycopy: Cannot open %s\n", argv[1]);
             exit(1);
	   }
	close(1);
           if( (fdo=creat(argv[2],0666)) == -1 ){
             printf("\nmycopy: Cannot create %s\n", argv[2]);
             exit(1);
	   }
    	while ( nbytes=read(0,buff,sizeof(buff)))
	  write(1,buff,nbytes);
}
