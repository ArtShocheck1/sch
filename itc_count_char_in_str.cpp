
#include "str_easy.h"

int itc_count_char_in_str(char ch, string str)
{
	int count = 0;
	for (long long i = 0; str[i] != '\0'; i++)
	{
		if (ch == str[i])
			count++;
	}
	return count;
}
