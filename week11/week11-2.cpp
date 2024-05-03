#include <stdio.h>
int main()
{
    int BOUND=20000,ans=0;
    int table[20000]={};
    for(int i=2;i<BOUND;i++){
        if(table[i]==0){
            ans++;
            for(int j=i*i;j<BOUND;j+=i){
                table[j]=-1;
            }
        }
    }
    printf("20K的質數： %d 個\n",ans);
}
