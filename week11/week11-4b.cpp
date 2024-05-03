#include <stdio.h>
int main()
{
	int a[10][10];
	int m,n;
	scanf("%d%d",&m,&n);
	///part1: Input
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	///part2: Output
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%2d ",a[i][j]);
		}
		printf("\n");
	}
}