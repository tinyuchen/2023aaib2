///��֪k
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int N=0;
    int a[20]={};
    while(n>0){
        a[N++] = n%10;
        ///printf("now: %d\n",now);
        n=n/10;
    }
    int bad = 0;
    for(int i=0;i<N/2;i++){
        if(a[i] != a[N-i-1]) bad=1;
    }
    if(bad==1) printf("NO\n");
    else printf("YES\n");
}
