#include "utils.h"
#include <stdlib.h>
#include <memory.h>


char* resize(char ** pointer, int size) {
	char * new = (char *) malloc((sizeof(char) * size)*2);

	memcpy(new, *pointer, sizeof(char) * size);
	free(*pointer);
	return(new);
}