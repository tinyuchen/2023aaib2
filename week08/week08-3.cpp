///week08-3.cpp 字串與陣列 課本第4章
#include <stdio.h>
#include <string.h>
int main()
{
    printf("Please enter your English name: ");
    char s1[30];
    scanf("%s",s1);
    char s2[30]="Hello";
    printf("%s %s\n",s1,s2);

    s1[0]='A';
    printf("你的名字被改成 %s\n",s1);

    printf("你的名字的長度是 %d\n", strlen(s1));
}
