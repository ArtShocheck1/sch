
#include "str_easy.h"

string itc_three_str(string str1, string str2, string str3)
{
	string new_str;

	long long len1 = itc_len(str1);
	long long len2 = itc_len(str2);
	if (itc_find_str(str1, str2) != -1)
	{
		long long index = itc_find_str(str1, str2);
		for (long long i = 0; i < index; i++)
			new_str += str1[i];
		new_str += str3;
		for (long long i = index + len2; i < len1; i++)
			new_str += str1[i];
	}
   	else
   	{
		return str1;
	}
	return new_str;
}

