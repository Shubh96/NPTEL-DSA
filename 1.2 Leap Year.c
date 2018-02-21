#include<stdio.h>

void main(){
	int year;
	
	scanf("%d", &year);
	
	if(year%400 == 0 || (year%100 !=0 && year%4 == 0))
		printf("YES");
	else
		printf("NO");
}