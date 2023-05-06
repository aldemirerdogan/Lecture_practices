#include <stdio.h>
#include <stdlib.h>

char strlen(char *ptr);

int main (){
	char color []={'b','l','u','\0'};
	int len=strlen(color);
	printf("%d\n",len);

	for(int i=0;i<len ;i++)
		printf("%c\n",color[i]);
} // end of the main


char strlen(char str[]){
	int len=0;
	while(str[len]!='\0')
	len++;
	return(len);
}
