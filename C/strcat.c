#include<stdio.h>
#define MAXLENGTH 100

char *strcat(char *, char *);

void main(){
		char dest[MAXLENGTH] = "I love you, ";
		char src[] = "Yanziyan!";
		char *merge = strcat(dest ,src);
		printf("%s\n",merge);
}
		
char *strcat(char *s, char *t){
		char *p = s;
		while( *s != '\0')
			s++;
		while( *s++ = *t++)
			;
		return p;
}
		
