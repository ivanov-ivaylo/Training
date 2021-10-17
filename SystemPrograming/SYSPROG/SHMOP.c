#include	<stdio.h>
#include	<sys/types.h>
#include	<sys/ipc.h>
#include	<sys/shm.h>
#include	<string.h>

main()
{
	int shmid, pos=0;
	char str[10];char *ptr;

	printf("\nEnter shmid of segment = ");

	scanf("%d",&shmid);

	ptr=shmat(shmid, NULL, SHM_RND);
	if (  ptr == -1 )
	{printf("\nError attaching shared memory segment");
		exit(1);}
	else
	printf("\nEnter string for writing= ");
	scanf("%s",str);
	printf("\nEnter No of position in segment for writing= ");
	scanf("%d",&pos);
	--pos;
	strncpy(ptr+pos,str,strlen(str));
		printf("\n The content of shared memory = %s\n",ptr);
	exit(0);
}
