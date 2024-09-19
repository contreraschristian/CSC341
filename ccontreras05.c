// Christian A. Contreras
// CSC 341-40
// LAB05 (09/12/24)

#include <stdio.h>
#include <stdlib.h>

int x;
int y = 15;

int main(int argc, char *argv[])
{
	int *values;
	int i;

	values = (int*)malloc(sizeof(int) * 5);

	for(i = 0; i < 5; i++)
	{
		values[i] = 1;
	}

	printf("The following addresses are ranked highest to lowest:\n");
	printf("1.) argc: %p\n", &argc);
	printf("2.) Stack Variables: %p\n", &i);
	printf("3.) Heap Variables: %p\n", &values);
	printf("4.) Unitialized Data: %p\n", &x);
	printf("5.) Initialized Data: %p\n", &y);

	return EXIT_SUCCESS;
}
