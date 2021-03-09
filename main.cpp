// This program displays every combination of three-digits
// using three while loops nested!

#include <iostream>

using namespace std;

int main()
{
	int digit1 = 0;
	int digit2 = 0;
	int digit3 = 0;
	const int NUM_LOOPS = 10;
	
	cout << "~ ~ ~ ~ ~ ~ ~ ~ ALL COMBINATIONS OF 3 DIGITS ~ ~ ~ ~ ~ ~ ~\n\n";

	while (digit1 <= 9)
	{
		while (digit2 <= 9)
		{
			while (digit3 <= 9)
			{
				cout << digit1 << digit2 << digit3 << "   ";
				digit3++;
			}
			digit2++;
			digit3 = 0;
			cout << "\n";
		}
		
		digit1++;
		digit2 = 0;
		digit3 = 0;

	}
	cout << "\nEnd of Job";
	
	
	return 0;
}