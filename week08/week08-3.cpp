///week08-3.cpp �r��P�}�C �ҥ���4��
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
    printf("�A���W�r�Q�令 %s\n",s1);

    printf("�A���W�r�����׬O %d\n", strlen(s1));
}
