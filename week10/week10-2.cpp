/// week10-2.cpp ����۰��k(�� �̤j���]��Greatest Common Divisor)
#include <stdio.h>
int gcd(int a,int b){
    if(a==0) return b;
    if(b==0) return a;
    return gcd(b,a%b);
}

int main()
{
    printf("�п�Ja�Bb��ӼƦr�G");
    int a,b;
    scanf("%d %d",&a,&b);
    printf("The Greatest Common Divisor is: %d\n",gcd(a,b));
}
