
#include "str_easy.h"

int itc_find_str(string str1, string str2)
{
	long long len1 = itc_len(str1);	
	long long len2 = itc_len(str2);	
	for (long long i = 0; i < len1; i++)
	{
		if (str1[i] == str2[0])
		{
			long long k = i;
			long long j = 0;
			for (; j < len2 && k < len1; j++, k++)
			{
				if (str1[k] != str2[j])	
					break;
			}
			if (j == len2)
				return i;
		}
	}
	return -1;
}
