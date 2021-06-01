#include<stdio.h>

int strend(char *, char *);

void main() {
		char dest[] = "abcdefg";
		char src[] = "cdef";
		printf("%d\n",strend(dest,src));
}
	 
int strend(char *s, char *t){
	 while( *(++s) != '\0')
			 ;
	 char *p = t;
	 while( *(++t) != '\0')
			 ;
	 while(t-- != p){
			 s--;
			 if( *s != *t)
					 return 0;
	 }
	 return 1;
}
