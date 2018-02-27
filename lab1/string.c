/**
 * my_strncasecmp - Case insensitive, length-limited string comparison
 * @s1: One string
 * @s2: The other string
 * @len: the maximum number of characters to compare
 */
int my_strncasecmp(const char *s1, const char *s2, int len)
{
	unsigned char c1, c2;

	if (!len)
		return 0;

	do {
		c1 = *s1++;
		c2 = *s2++;
		if (!c1 || !c2)
			break;
		if (c1 == c2)
			continue;
		c1 = tolower(c1);
		c2 = tolower(c2);
		if (c1 != c2)
			break;
	} while (--len);
	return (int)c1 - (int)c2;
}


/**
 * strcpy - Copy a %NUL terminated string
 * @dest: Where to copy the string to
 * @src: Where to copy the string from
 */
char *strcpy(char *dest, const char *src)
{
		 int i;
	for( i=0; src[i] != '\0' ; i++){
		dest[i] = src[i];
		//dest[i] = '\0' ;

		//return dest;
	}
			dest[i] = '\0' ;
            return dest;
}

/**
 * my_strncpy - Copy a length-limited, C-string
 * @dest: Where to copy the string to
 * @src: Where to copy the string from
 * @count: The maximum number of bytes to copy
 *
 * The result is not %NUL-terminated if the source exceeds
 * @count bytes.
 *
 * In the case where the length of @src is less than  that  of
 * count, the remainder of @dest will be padded with %NUL.
 *
 */
char *my_strncpy(char *dest, const char *src, int count)
{

	char *tmp = dest;
	for(int i=0;i<count;i++)
	{
		if ((*tmp = *src) != 0)
			src++;
		tmp++;

		//JUST DECREASE COUNT EACH TIME THE CONDITION SATISFIES
		count--;
	}
	return dest ;
}

/**
 * strcat - Append one %NUL-terminated string to another
 * @dest: The string to be appended to
 * @src: The string to append to it
 */
char *strcat(char *dest, const char *src)
{
  unsigned int j,k;
 	for(j=0; dest[j] != '\0'  ; j++)
 	{
 		for(k=0 ; src[k] != '\0' ; k++)
 			{
 				dest[j+k] = src[k] ;
 				count -- ;

 			}
 			 				dest[j+ k] = '\0' ;

 			return dest;
 	}
}


/**
 * my_strncat - Append a length-limited, C-string to another
 * @dest: The string to be appended to
 * @src: The string to append to it
 * @count: The maximum numbers of bytes to copy
 *
 * Note that in contrast to strncpy(), strncat() ensures the result is
 * terminated.
 */
char *my_strncat(char *dest, const char *src, int count);

/**
 * strcmp - Compare two strings
 * @cs: One string
 * @ct: Another string
 */

int strcmp(const char *cs, const char *ct)
{
	int i=0;
	while(cs[i] == ct[i] ){
		if(cs[i]== '\0' || ct[i] == '\0')
		{
			break;
			//incrementing the counter as the loop terminates here 
			i = i +1 ;
		}
	}
	if ( cs[i] == '\0'  && ct[i] == '\0')
	{
		// if the strings are same 
		return 0;
	}
	else
	{
		return -1;
	}
}


/**
 * my_strncmp - Compare two length-limited strings
 * @cs: One string
 * @ct: Another string
 * @count: The maximum number of bytes to compare
 */
int my_strncmp(const char *cs, const char *ct, int count)
	{
	int i=0;
	while(cs[i] == ct[i] && i<count ){
		if(cs[i]== '\0' || ct[i] == '\0')
		{
			break;
			//incrementing the counter as the loop terminates here 
			i = i +1 ;
			count -- ;
		}
	}
	if ( cs[i] == '\0'  && ct[i] == '\0')
	{
		// if the strings are same 
		return 0;
	}
	else
	{
		return -1;
	}
}



/**
 * strchr - Find the first occurrence of a character in a string
 * @s: The string to be searched
 * @c: The character to search for
 */
char *strchr(const char *s, int c)
{
	int i;
	while ( s[i] != '\0')
	{
		if(s[i] == c + '0'){
			return i;
			i++ ;
		}
		return -1;
	}
}

/**
 * strchrnul - Find and return a character in a string, or end of string
 * @s: The string to be searched
 * @c: The character to search for
 *
 * Returns pointer to first occurrence of 'c' in s. If c is not found, then
 * return a pointer to the null byte at the end of s.
 */
char *strchrnul(const char *s, int c)
{
	
	while ( *s != (char)c  &&  *s )
	{
		s = s + 1 ;
	    //return (char *)s ;
	}
	//specified to return pointer hence conversion to pointer
	return (char *)s ;
		
}

/**
 * strrchr - Find the last occurrence of a character in a string
 * @s: The string to be searched
 * @c: The character to search for
 */
char *strrchr(const char *s, int c)
{
	int temp = -1;
	int i =0;
	while(s[i] != '\0')
	{
		if(s[i] == c + '0'){
			temp = i;
		}
		i++
	}
	return temp;
}


/**
 * strnchr - Find a character in a length limited string
 * @s: The string to be searched
 * @count: The number of characters to be searched
 * @c: The character to search for
 */
char *strnchr(const char *s, int count, int c);

/**
 * skip_spaces - Removes leading whitespace from @str.
 * @str: The string to be stripped.
 *
 * Returns a pointer to the first non-whitespace character in @str.
 */
char *skip_spaces(const char *str)
{

	// isspace is a library function that checks for whitespaces 
	while( isspace( *str )){
		str++ ;  
	}
	return ( char * )str;
}

/**
 * strim - Removes leading and trailing whitespace from @s.
 * @s: The string to be stripped.
 *
 * Note that the first trailing whitespace is replaced with a %NUL-terminator
 * in the given string @s. Returns a pointer to the first non-whitespace
 * character in @s.
 */
char *strim(char *s);

/**
 * my_strlen - Find the length of a string
 * @s: The string to be sized
 */
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

/**
 * strnlen - Find the length of a length-limited string
 * @s: The string to be sized
 * @count: The maximum number of bytes to search
 */
int strnlen(const char *s, int count)
{
	const char *length ;
	length = s ;
	while( *length != '\0' && count-- )
	{
		return length - s;
		length ++ ;
	}
}

/**
 * my_memset - Fill a region of memory with the given value
 * @s: Pointer to the start of the area.
 * @c: The byte to fill the area with
 * @count: The size of the area.
 *
 */
void *my_memset(void *s, int c, int count)
{
		char *temp = s;

	while (count --){


		*temp= c;
	temp ++ ;
}
	return s;
}