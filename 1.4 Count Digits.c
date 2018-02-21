#include<stdio.h>

void main(){
	int N, d, count=0;
	
	scanf("%d %d", &N, &d);
	
	while(N!=0){
		if(N%10 == d){
			N/=10;
			count++;
		}
		else
			N/=10;
	}
	
	printf("%d", count);
}