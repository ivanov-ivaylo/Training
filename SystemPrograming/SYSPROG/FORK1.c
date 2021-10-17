#include <stdio.h>

#define ERROR -1

main()
{

   if ( fork()==0 )  printf("child --> pid= %d ppid= %d\n",getpid(),getppid());
   else {
//      wait();
        printf("parent --> pid= %d, ppid= %d\n",getpid(),getppid());
        }
	printf("\n Common part of parent+child\n");
}
