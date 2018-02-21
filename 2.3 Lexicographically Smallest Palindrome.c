#include<stdio.h>
#include<string.h>
int main(){
	
	char S[100];
	
	fgets(S, 100, stdin);
	
	int i= 0, j = strlen(S) - 1;
	
	for(; i<=j; i++, j--){
		if(S[i] == S[j] && S[i]!= '.')
			continue;
		else if(S[i] == S[j] && S[i]== '.')
			S[i] = S[j] = 'a';
		else if(S[i]== '.')
			S[i] = S[j];
		else if(S[j]== '.')
			S[j] = S[i];
		else{
			printf("-1");
			return 0;
		}				
	}
	
	printf("%s", S);
	return 0;
}
