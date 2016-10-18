#include<stdio.h>
#include<string.h>
int main(void)
{
	char message[20];
	printf("Enter a message\n");
	// reads num-1
	fgets(message, 20, stdin);
	
	// prints num - 2
	// get rid of the '\n' if message size < num -1
	message[strlen(message)-1] = '\0';
	puts(message);
	return 0;
}