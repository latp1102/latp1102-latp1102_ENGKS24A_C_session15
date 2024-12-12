#include<stdio.h>

int main(){
	char text[] = "hello world";
	
	text[0]=toupper(text[0]);
	text[6]=toupper(text[6]);
	printf(" %s",text);
	int n = strlen(text);
    for(int i = n;i < 0;i--){
    	printf("%c",text[i]);
	}

	return 0;
}
