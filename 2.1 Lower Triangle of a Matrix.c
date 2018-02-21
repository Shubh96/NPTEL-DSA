#include<stdio.h>

int main(){
	int A[5][5];
	int M, N, i, j;
	
	scanf("%d %d", &M, &N);
	
	for(i=1; i<=M; i++){
		for(j=1; j<=N; j++){
			scanf("%d", &A[i][j]);
		}
	}
	
	for(i=1; i<=M; i++){
		for(j=1; j<=N; j++){
			if(i>=j)
				printf("%d", A[i][j]);
			else
				printf("0");
			
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}