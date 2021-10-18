
#include "str_easy.h"

int itc_max_char_on_end(string str)
{
	int count = 0;
	int max = 0;
	long long len = itc_len(str);
	for (long long i = 0; i < len - 1; i++)
	{
		if (str[i] >= 48 && str[i] <= 57 && str[i + 1] >= 48 && str[i + 1] <= 57)
			count++;
		else
		{
			if (count > max)
				max = count;
			count = 0;
		}
	}
	if (count > max)
		max = count;
	return max + 1;
}
