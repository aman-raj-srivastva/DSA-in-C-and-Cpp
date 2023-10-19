#include <stdio.h>
int main(){
int a=12;
int *ptr =&a;
printf("the address of %d is %d\n", a, ptr);
printf("%d", ++ptr);
    return 0;
}
