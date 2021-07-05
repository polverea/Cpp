#include <iostream>

using namespace std;

bool isNumber(string s)
{
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return false;
	}
	return true;
}
int main()
{
	string accountNumber;
	int digit, sum = 0;
	while (true)
	{
		cout << "Introduceti numararul cardului: ";
		cin >> accountNumber;
		if (isNumber(accountNumber))
		{
			for (int i = accountNumber.length() - 2; i >= 0; i = i - 2)
			{
				digit = (accountNumber[i] - 48) * 2;
				if (digit > 9)
					digit = (digit / 10) + digit % 10;
				sum += digit;
			}

			for (int i = accountNumber.length() - 1; i >= 0; i = i - 2)
			{
				sum += (accountNumber[i] - 48);
			}

			if (sum % 10 == 0)
			{
				cout << "Numarului cardului este valid" << endl;
			}
			else
			{
				cout << "Numarul cardului este invalid" << endl;
			}
		}
		else
		{
			cout << "Format incorect" << endl;
			continue;
		}
		continue;
	}
	return 0;
}