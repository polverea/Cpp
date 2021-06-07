//Write a variadic template function that calculate the maximum of its parameter

#include <iostream>

using namespace std;

template<typename T>
T maxim(T n)
{
	return n;
}
template<typename T, typename T2>
T maxim(T n, T n1)
{
	return (n < n1) ? n1 : n;
}
template<typename T, typename T2, typename... O>
T maxim(T n,T2 n1, O... other)
{
	return maxim(n < n1 ? n1 : n, other...);
}
int main()
{
	cout << maxim<double>(10, 20, 40, 2, 45, 1, 56.6, 56, 5, 7, 4, 12, 23, 5, 84, 9, 17, 5);

	return 0;
}
