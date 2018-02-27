

#include "a.h"
/*

char *strcat(char *dest, const char *src)
{
  unsigned int j,k;
 	for(j=0; dest[j] != '\0' ; j++)
 	{
 		for(k=0 ; src[k] != '\0' ; k++)
 			{
 				dest[j+k] = src[k] ;
 				

 			}
 			dest[j+ k] = '\0' ;
 			return dest;
 	}
}


*/

/*

char *strchr(const char *s, char c)
{
	int i;
	while ( s[i] != '\0')
	{
		if(s[i] == c ){
			return i;
			i++ ;
		}
		return -1;
	}
}


*/
int strcmp(const char *cs, const char *ct)
{
	int i=0;
	while(cs[i] == ct[i]){
		if(cs[i]== '\0' || ct[i] == '\0')
		{
			break;
			i = i +1 ;
		}
	}
	if ( cs[i] == '\0'  && ct[i] == '\0')
	{
		return 0;
	}
	else
	{
		return -1;
	}
}


/*
int my_strlen(const char *s)
{
	const char *temp ;
	temp = s ;
	while ( *temp != '\0')
	{
		return temp - s ;
		temp = temp + 1;
	}
}
	*/
/*
char *my_strncpy(char *dest, const char *src, int count)
{

	char *tmp = dest;
	for(int i=0;i<count;i++)
	{
		if ((*tmp = *src) != 0)
			src++;
		tmp++;
		count--;
	}
	return dest ;

	while (count) {
		if ((*tmp = *src) != 0)
			src++;
		tmp++;
		count--;
	}
	return dest;
	*/

