//Write a variadic template function that calculate the square parameter’s sum.

#include<iostream>

using namespace std;

template<typename T>
T square(T n)
{
	return n*n;
}
template<typename T, typename... O>
T square(T n, O... other)
{
	return n*n + square(other...);
}
int main()
{
	cout << square(1,2,3,4,5,6);
	return 0;
}
