#include <stdio.h>

int main()
{
	FILE *file;

	file = fopen("test.csv", "w+");

	// Write column names
	fprintf(file, "ID;Name;Seat;Phone Number\n");
	for (int i = 0; i < 3; i++)
	{
		// write row values
		fprintf(file, "1;Filip;2;012345678\n");
	}

	printf("Data successfully saved.\n");

	fclose(file);

	return 0;
}
