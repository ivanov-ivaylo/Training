#include	<sys/types.h>
#include	<sys/ipc.h>
#include	<sys/shm.h>

main()
{
	key_t key;
	int opperm, flags;
	int shmid, size, opperm_flags;

	printf("\nEnter key in decimal= ");
	scanf("%d",&key);

	printf("\nEnter size of segment= ");
	scanf("%d",&size);
	if ( ( shmid=shmget(key,size, (IPC_CREAT | IPC_EXCL | 0666)) ) == -1)
	{printf("\nError creating shared memory segment"); exit(1);}
	else
		printf("\n SHM identifier = %d",shmid);
		printf("\n  The size of the segment --> %d",size);
	exit(0);
}
