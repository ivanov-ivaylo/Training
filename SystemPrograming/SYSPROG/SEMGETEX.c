#include <stdio.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/sem.h>

main()
{
  key_t key;
  int opperm, flgs, nsems;
  int semid, opperm_flgs;


  printf("\nEnter key in hex =");
  scanf("%x",&key);

  printf("\nEnter oper perms in octal =");
  scanf("%o",&opperm);

  printf("\nkey= 0x%x, opperm= 0%o",key,opperm);

  printf("\n\nEnter number of sems =");
  scanf("%d",&nsems);

  opperm_flgs = opperm | IPC_CREAT | IPC_EXCL;

  semid = semget(key, nsems, opperm_flgs);

  if (semid == -1 )  
    printf("\nThe semget sys call failed!");
  else
    printf("\n semid = %d\n",semid);
  exit(0);
}
