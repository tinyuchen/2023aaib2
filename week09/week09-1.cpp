#include <stdio.h>
int myAdd(int a,int b){ ///Function Definition: input 2 numbers
    return a+b; ///output 1 number
}
void myPrint(int a){ ///Function Definition: input 1 number
    for(int i=1;i<=a;i++) printf("*");
    printf("\n");
}
int main()
{
    int ans = myAdd(3,4); ///call function
    printf("Hello World\n");
    myPrint(ans);
}
