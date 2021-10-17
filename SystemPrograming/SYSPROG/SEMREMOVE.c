
#include <stdio.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/sem.h>

int sid;

main()
{
int i;
int sid;key_t key;
   printf("\nEnter key in hex =");
   scanf("%x",&key);
   if ( (sid = semget(key,1,0664 )) == -1 ){ 
     printf("\n semget failed");
     exit(1);
   }
   else {
      printf("\n sid = %d",sid);
      i = semctl(sid,0,IPC_RMID,0);
      printf("\nsemval = %d\n", i);
   }
}
