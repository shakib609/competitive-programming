#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void) {
	char* name1 = malloc(sizeof(char) * 7);
	char* name2 = malloc(sizeof(char) * 8);
	char* full_name = malloc(sizeof(name1) + sizeof(name2) + 1);
	strcpy(name1, "Shakib");
	strcpy(name2, "Hossain");
	
	strcpy(full_name, name1);
	strcat(full_name, " ");
	strcat(full_name, name2);
	printf("%s\n", full_name);
	printf("%s %s\n", name1, name2);
	return 0;
}
