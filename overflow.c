#include <stdio.h>
#include <string.h>
#include <signal.h>

int main(){
	char pass[10];
	char guss[10];

	strcpy(pass, "aaaa");
	gets(guss);


	if (!strncmp(pass, guss, 10)){
		printf("you logged in\n");
	}
	else{
		printf("wrong password\n");
	}
	return 0;
}
