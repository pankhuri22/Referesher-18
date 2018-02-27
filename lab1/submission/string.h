#ifndef _STRING_H
#define _STRING_H

char *strcpy(char *, const char *);

int my_strncasecmp(const char *, const char *, int );

char *my_strncpy(char *, const char *, int );

char *strcat(char *, const char *);

char *my_strncat(char *, const char *, int );

int strcmp(const char *, const char *);

int my_strncmp(const char *, const char *, int );

char *strchr(const char *, int );

char *strchrnul(const char *, int );

char *strrchr(const char *, int );

char *strnchr(const char *, int , int );

char *skip_spaces(const char *);

char *strim(char *);

int my_strlen(const char *);

int strnlen(const char *, int );

void *my_memset(void *, int , int );


#endif