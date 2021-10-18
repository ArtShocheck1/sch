
#include "str_easy.h"

double itc_percent_lower_uppercase(string str)
{
	double upper = 0;
	double lower = 0;
	for (long long i = 0; str[i] != '\0'; i++)
	{
		if ((int)str[i] >= 65 && (int)str[i] <= 90)
			upper++;
		if ((int)str[i] >= 97 && (int)str[i] <= 122)
			lower++;
	}
	if (upper == 0 || lower == 0) 
		return -1;
	return upper / lower * 100.0;
}
