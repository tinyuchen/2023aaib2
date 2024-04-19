#include <stdio.h>
int myFuncA()
{
    int x=200;
    printf("In myFuncA(), x is: %d\n",x);
}
int main()
{
    int x=100;
    printf("In main(), x is: %d\n",x);
    myFuncA();
    printf("In main(), x is: %d\n",x);
}
