#include "str_easy.h"

long long itc_len(string str)
{
	long long len = 0;
	for (long long i = 0; str[i] != '\0'; i++)
		len++;
	return len;
}
