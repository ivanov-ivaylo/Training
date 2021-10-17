#include <stdio.h>
main(argc,argv)
int argc;
char *argv[];
{
   int fd[5];
   int i;
   char buff[10];
   int nbytes=0;
   
	for(i=1; i < argc; i++ ) {
           if( (fd[i]=creat(argv[i],0666)) == -1 ){
             printf("cat: Cannot create %s", argv[i]);
             exit(1);
	   }
        }
    	while ( nbytes=read(0,buff,sizeof(buff)))
        {
	  write(1,buff,nbytes);
  	  for (i=1; i < argc; i++)
	  write(fd[i],buff,nbytes);
        }
}
