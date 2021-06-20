//Ввести п'ятизначне число, вивести всі його цифри от першого до останнього
#include<stdio.h>
int pow_n(int a, int b){
	for(int i=1;i<b;i++){
		a*=10;
	}
	return a;
}
int main(){
	int a,b,c=0;
	scanf("%d", &a);
	b=a;
	while(b!=0){
		b/=10;
		c+=1;
	}
	if(c==5){
		for(int i=1; i<=c; i++){
			if(i<c){
				printf("%d\n", (a/pow_n(10,(c-i)))%10);
			}
			if(i==c){
				printf("%d\n", a%10);
			}
		}
	}
	else{
		printf("Число не п'ятизначне\n");
	}
}
