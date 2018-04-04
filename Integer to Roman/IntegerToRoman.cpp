#include "IntegerToRoman.h"

char IntegerToRoman::romans[7] = { 'I', 'V', 'X', 'L', 'C', 'D', 'M' };

IntegerToRoman::IntegerToRoman(int num): num_(num)
{
}

string IntegerToRoman::ToRoman() const
{
	string answer = "";

	int div = 1000;
	int i = 6;

	int num = this->num_;

	if (num < 1 || num > 3999)
	{
		cerr << "The number must be in the range [1, 3999]";
		exit(1);
	}

	while (num)
	{
		int digit = num / div;
		while (digit)
		{
			if (digit < 4)
			{
				answer += romans[i];
				digit--;
			}
			if (digit == 4)
			{
				answer += romans[i];
				answer += romans[i + 1];
				break;
			}
			if (digit == 9)
			{
				answer += romans[i];
				answer += romans[i + 2];
				break;
			}
			if (digit >= 5)
			{
				answer += romans[i + 1];
				digit -= 5;
			}
		}

		i -= 2;
		num %= div;
		div /= 10;
	}

	return answer;
}
