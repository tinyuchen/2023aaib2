///�ƹ��k�� -> Format use AStyle: Allman(ANSI)(�w�]); Java; K&R(C�o����); Stroustrup(C++�o����)
///Setting: Settings -> Editor... -> Source Formatter
#include <stdio.h>
int main()
{
    int n,a,b;
    scanf("%d",&n);
    for(int i=0; i<n; i++) {
        scanf("%d",&a);
        int ans=0;
        for(int j=0; j<a; j++) {
            scanf("%d",&b);
            ans+=b;
        }
        printf("%d\n",ans);
    }
}
