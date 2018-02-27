#include <stdio.h>
#include <string.h>
//has different main for different functions

#include "string.h"

int main()
{
	char string[4] ;
string[0] = 'a' ;
string[1] = 'b' ;
string[2] = 'c' ;
string[3] = '\0' ;
char dest[10] ; 
dest[0] = 'x' ;
dest[1] = 'y' ;
dest[2] = 'z' ;
char *des1 ;
	
	des1 = strcat(dest , string) ;
	printf("%s", dest);

	return 0 ;
}
/*



int main(){

    char s1[] = "rahul"; //initializing strings
    char s2[] = "arora"; //initializing strings
    strcat(s1, s2);
    printf("strcat: %s\n", s1); //updated string after strcpy
}



int main () {
   const char str[] = "This is just a String"; 
   const char ch = 'u'; 
   char *p;
   p = strchr(str, ch);
   printf("String starting from %c is: %s", ch, p);
   return 0;
}
*/
/*

int main()
{
    char str1[] = "abcd", str2[] = "abCd" ;
    int result;


    // comparing strings str1 and str2
    result = strcmp(str1, str2git remote add origin https://github.com/pankhuri22/refresher.git);
    printf("strcmp(str1, str2) = %d\n", result);

   
    return 0;
}
*/


/*
int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = strchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}
*/

/*

int main () {
   int len;
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = strrchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}
*/
/*
int main () {
   char str[50];
   int len;

   strcpy(str, "This is tutorialspoint.com");

   len = my_strlen(str);
   printf("Length of |%s| is |%d|\n", str, len);
   
   return(0);
}

*/

/*
int main () {
   char src[40];
   char dest[12];
  
   memset(dest, '\0', sizeof(dest));
   strcpy(src, "This is tutorialspoint.com");
   my_strncpy(dest, src, 10);

   printf("Final copied string : %s\n", dest);
   
   return(0);
}
*/


/*
int main () {
   char str1[15];
   char str2[15];
   int ret;


   strcpy(str1, "abcdef");
   strcpy(str2, "abcd");

   ret = strcmp(str1, str2);

   if(ret < 0) {
      printf("str1 is less than str2");
   } else if(ret > 0) {
      printf("str2 is less than str1");
   } else {
      printf("str1 is equal to str2");
   }
   
   return(0);
}
*/

//strcpy
int main () {
   char src[40];
   char dest[100];
  
   memset(dest, '\0', sizeof(dest));
   strcpy(src, "hello");
   strcpy(dest, src);

   printf(": %s\n", dest);
   
   return(0);
}

//my_strncpy
int main () {
   char src[40];
   char dest[12];
  
   memset(dest, '\0', sizeof(dest));
   strcpy(src, "hello");
   strncpy(dest, src, 10);

   printf("Final  : %s\n", dest);
   
   return(0);
}

//strcat
int main () {
   char src[50], dest[50];

   strcpy(src,  " source");
   strcpy(dest, "destination");

   strcat(dest, src);

   printf("Final  : |%s|", dest);
   
   return(0);
}

//my_strncat
int main () {
   char src[50], dest[50];

   strcpy(src,  " source");
   strcpy(dest, "destination");

   strncat(dest, src, 15);

   printf("Final : |%s|", dest);
   
   return(0);
}

//strcmp
int main () {
   char str1[15];
   char str2[15];
   int ret;


   strcpy(str1, "abcdef");
   strcpy(str2, "abcd");

   ret = strcmp(str1, str2);

   if(ret < 0) {
      printf("str1 is less than str2");
   } else if(ret > 0) {
      printf("str2 is less than str1");
   } else {
      printf("str1 is equal to str2");
   }
   
   return(0);
}

//my_strncmp
int main () {
   char str1[15];
   char str2[15];
   int ret;

   strcpy(str1, "abcdef");
   strcpy(str2, "abcd");

   ret = strncmp(str1, str2, 4);

   if(ret < 0) {
      printf("str1 is less than str2");
   } else if(ret > 0) {
      printf("str2 is less than str1");
   } else {
      printf("str1 is equal to str2");
   }
   
   return(0);
}

//strchr
int main () {
   const char str[] = "hello";
   const char ch = '.';
   char *ret;

   ret = strchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}

//strchrnul


//strrchr


//strnchr

//skip_spaces

//strim


//my_strlen


//strnlen

//my_memset
