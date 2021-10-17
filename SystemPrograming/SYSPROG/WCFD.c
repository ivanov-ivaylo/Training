#define	NO	0
#define	YES	1
main( )
{
   int nl, nc, nw , inword = NO;
   char strres[25], c;

   nl = nw = nc = 0;
   while ( read(0, &c, 1) ) {

      ++nc;

      if ( c == '\n') ++nl;

      if ( c == ' ' || c == '\n' || c == '\t')
      		inword = NO;
      else  if (inword == NO ) {
  	        inword = YES;
       		nw++;
      }
   }
   sprintf(strres,"\nnl=%d  nw=%d  nc=%d\n",nl,nw,nc);
   write(1,strres,strlen(strres));
}
