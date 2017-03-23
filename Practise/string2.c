#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void) {
	
	char* name1 = "Shakib";
	char* name2 = "shakib";
	char* name3 = "Hossain";
	
	int result = strcmp(name1, "Shak");
	printf("%d\n", result);

	return 0;
}
