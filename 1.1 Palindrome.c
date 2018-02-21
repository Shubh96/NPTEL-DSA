#include<stdio.h>

void main(){
	int N, temp;
	int rev=0;
	
	scanf("%d", &N);
	
	temp = N;
	
	while(N>0)
	{
		rev = rev*10 + (N%10);
		N/=10;
	}
	
	if(temp==rev)
		printf("YES");
	else
		printf("NO");
}