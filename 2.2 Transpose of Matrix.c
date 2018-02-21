#include<stdio.h>

int main(){
	int A[10][10], temp[10][10];
	int r, c, i, j;
	
	scanf("%d %d", &r, &c);
	
	for(i=1; i<=r; i++){
		for(j=1; j<=c; j++){
			scanf("%d", &A[i][j]);
		}
	}
	
	for(i=1; i<=r; i++){
		for(j=1; j<=c; j++){
			temp[j][i] = A[i][j];
		}
	}
	
	for(i=1; i<=c; i++){
		for(j=1; j<=r; j++){
			printf("%d", temp[i][j]);
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}