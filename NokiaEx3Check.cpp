#include <iostream>

using namespace std;

bool funct()
{
	return true;
}

template<typename T1, typename... O>
bool funct(T1 n1, T1 n2, O... other )
{
	return n1 < n2 && (funct(other...));
}
int main()
{

	if (funct(4.6, 5.8, 7, 8,'a','e') == 1)
		cout << "true";
	else
		cout << "false";
		

	return 0;
}