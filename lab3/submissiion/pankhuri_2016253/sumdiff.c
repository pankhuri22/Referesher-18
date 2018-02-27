
#include <stdio.h>
extern int add(int * , int * );
int main(int argc, char *argv[]) {
int a = 10;
int b = 20;
printf("Sum is = %d \n", add(&a, &b)); //easy

return 0;
}
