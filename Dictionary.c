#include <stdio.h>

int dictWords(char *a, char *b);

int main(){
	char str1[20], str2[20];
	
	printf("Input words\n");
	
	printf("#1 ");
	scanf("%s", &str1);
	printf("#2 ");
	scanf("%s", &str2);	
	
	printf("%d", dictWords(str1, str2));
}
int dictWords(char *a, char *b){
	int i;
	int len1 = length (a);
	int len2 = length (b);
	
	if(len1 == len2){
		for (i=0; b[i]!= '\0'; i++){
	        if(a[i] > b[i]) return 1;
	        if(a[i] < b[i]) return -1;
    	}
	}
	else if(len1 > len2){
		return 1;
	}
    else{
    	return -1;
    }
    
    return 0;
}
int length (char *a){
	int len;
	for (len=0; a[len]!='\0'; len++);
	
	return len;
}
