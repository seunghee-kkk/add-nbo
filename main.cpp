#include <stdio.h>
#include <stdint.h>
#include "add.h"

int main(int argc, char *argv[]) {
	
	FILE *fp1, *fp2;
	uint32_t val1, val2;
	
	fp1 = fopen(argv[1], "rb");
	fp2 = fopen(argv[2], "rb");

	fread(&val1, sizeof(val1), 1, fp1);
	fread(&val2, sizeof(val2), 1, fp2);
	
	add(val1, val2);
	
	fclose(fp1);
	fclose(fp2);

	return 0;
}
