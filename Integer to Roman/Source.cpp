#include "IntegerToRoman.h"

int main()
{
	int num;

	cout << "Input integer from the range [1, 3999] \n";
	cin >> num;

	IntegerToRoman integerToRoman(num);
	cout << "The integer representation of the roman numeral is : " << integerToRoman.ToRoman();

	return 0;
}