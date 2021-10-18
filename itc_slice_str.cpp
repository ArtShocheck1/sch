
#include "str_easy.h"
string itc_slice_str(string str, int start, int end)
{
	string new_str;
	long long len = itc_len(str);
	if (start < 0)
		start = 0;
	if (start > end)
		return str;
	for (long long i = start; i <= end && i < len; i++)
		new_str += str[i];
	return new_str;
}
