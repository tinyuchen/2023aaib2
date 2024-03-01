///註解：從今天考試程式出發(copy)
///複習上週交的 printf
#include  <stdio.h>
int main()
{
    int a,b;
    printf("Please enter two number:");
    scanf("%d %d",&a ,&b);
    printf("你輸入了兩個數字，直式加法：\n");
    printf("%5d\n",a);
    printf("%5d\n",b);
    printf("-----\n");
    printf("%5d",a+b);
}
