
#include "str_easy.h"

void itc_first_end_three(string str)
{
	long long len = itc_len(str);
	if (len <= 5)
	{
		for (int i = 0; i < len; i++)
			cout << str[0] << endl;
	}
	else 
		cout << str[0] << str[1] << str[2] << str[len - 3] << str[len - 2] << str[len - 1] << endl;
}
