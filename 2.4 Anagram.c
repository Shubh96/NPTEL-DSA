#include<stdio.h>
#include<ctype.h>
#include<string.h>

char *stringSort(char string[100]){
	int len = strlen(string);
	int i, j;
	char temp;

	for(i=0; i<len-1; i++){
		for(j=i+1; j<len; j++){
			if(string[i] > string[j]){
				temp = string[i];
				string[i] = string[j];
				string[j] = temp;
			}
		}
	}
	
	return string;
}

int main(){
	char a[100], b[100];
	int i, j;
	
	scanf("%s%s", a,b);
	
	for(i=0, j=0; i<strlen(a), j<strlen(b); i++, j++){
		a[i] = tolower(a[i]);
		b[j] = tolower(b[j]);
	}
	
	strcpy(a, stringSort(a));
	strcpy(b, stringSort(b));
	
	if(strcmp(a,b) == 0)
	   printf("YES"); 
	else
	    printf("NO");

	return 0;
}
