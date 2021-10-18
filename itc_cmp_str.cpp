
#include "str_easy.h"
string itc_cmp_str(string str1, string str2, int num)
{
	long long len = itc_len(str1);
	string new_str;
	if (num > len)
		return str1;
	if (num == len)
		return str1 + str2;
	for (long long i = 0; i < len; i++)
	{
		if (i != num)
			new_str += str1[i];
		else 
		{
			new_str += str2;
			new_str += str1[i];
		}
	}
	return new_str;
}
