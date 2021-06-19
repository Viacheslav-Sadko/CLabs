#include <stdio.h>
int main(){
	int a,e;
	scanf("%d", &a);
	e=(a%10)*100+((a/10)%10) *10+a/100;
	printf("%d-%d\n",a,e);
}
