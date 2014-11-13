#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
        char buffer[96];
        printf("- %p -\\n", &buffer);printf("add some words after ;\n");
        strcpy(buffer, getenv("KIRIKA"));
	printf("add one line in middle\n");
	printf("im ok\n"); 
 	printf("add one line in middle\n");
       return 0;
}