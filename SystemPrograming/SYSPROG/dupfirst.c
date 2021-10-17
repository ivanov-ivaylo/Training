main(argc,argv)
int argc;
char *argv[];
{
int fd, i, j=0;
close(1);
fd=creat(argv[1],0666);
j=dup(fd);
printf("FDES:%d j= %d\n",fd,j);
for(i=1;i<=10;i++)
printf("%d\n",i);
//close(fd);
close(j);
}
