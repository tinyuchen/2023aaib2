#include <stdio.h>
#include <string.h>
int main()
{
	char a[20];
	int i=0;
	scanf("%s",a);
	while(a[i]!=0){
		if('A'<= a[i] && a[i]<='Z'){
			printf("%c",a[i]+32);
		}
		else if('a'<= a[i] && a[i]<='z'){
			printf("%c",a[i]-32);
		}
		else printf("%c",a[i]);
		i++;
	}
	printf("\n");
}