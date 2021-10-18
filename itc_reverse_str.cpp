
#include "str_easy.h"

string itc_reverse_str(string str)
{
	long long len = itc_len(str);
	string new_str;
	for (long long i = len - 1; i >=0; i--)
		new_str += str[i];
	return new_str;
}
