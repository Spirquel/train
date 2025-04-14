#include "function.h"

int power_custom2(int number_v3, int n3)
{
	int result = 1;

	for (int i = 0; i < n3; ++i)
	{
		result *= number_v3;
	}


	return result;
}
int addition_v3(int y, int f)
{
	return y + f;
}
float addition_v3(float y, float f)
{
	return y + f;
}