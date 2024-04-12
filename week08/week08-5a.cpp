#include <stdio.h>
int main()
{
	int a,b;
	float avg=0;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		scanf("%d",&b);
		avg+=b;
	}
	printf("%.2f",avg/a);

}