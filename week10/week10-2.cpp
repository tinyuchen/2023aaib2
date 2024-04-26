/// week10-2.cpp 輾轉相除法(找 最大公因數Greatest Common Divisor)
#include <stdio.h>
int gcd(int a,int b){
    if(a==0) return b;
    if(b==0) return a;
    return gcd(b,a%b);
}

int main()
{
    printf("請輸入a、b兩個數字：");
    int a,b;
    scanf("%d %d",&a,&b);
    printf("The Greatest Common Divisor is: %d\n",gcd(a,b));
}
