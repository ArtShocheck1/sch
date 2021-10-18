
#include "str_easy.h"
bool itc_equal_reverse(string str)
{
	long long end;
	long long start;

	long long len = itc_len(str);
	//?????
	if (len <= 0)
		return false;
	end = itc_len(str) - 1;
	start = 0;
	for (long long i = 0; i < len; i++)
	{
		if (str[start] != str[end])
			return false;
		start++;	
		end--;
	}
	return true;
}
