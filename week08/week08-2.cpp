///week08-2.cpp 學習字串
#include <stdio.h>
int main()
{
    printf("Please enter your name: ");
    char s[30];
    scanf("%s",s); ///不用在加&，因為%s有s了
    printf("Hello, %s!!!",s);
}
