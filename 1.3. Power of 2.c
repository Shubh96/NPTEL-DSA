#include<stdio.h>

void main(){
	int N;
	
	scanf("%d", &N);
	
	while(N>=2){
		if(N%2 == 0)
			N/=2;
		else
			break;
	}
	
	if(N>2)
		printf("NO");
	else
		printf("YES");
}