//Write a Fibonacci function as constexpr and measure the time for fibonacci(40) as constexpr/non constexpr value. Do you see the difference in time execution ?
#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;


long fibonacci1(unsigned int n)
{
	return (n <= 1) ? n : (fibonacci1(n - 1) + fibonacci1(n - 2));

}

constexpr long fibonacci2(unsigned int n)
{

	return (n<=1) ? n : (fibonacci2(n - 1) + fibonacci2(n - 2));
}
int main()
{
	auto start = high_resolution_clock::now();
	const long result1 = fibonacci1(40);
	auto stop = high_resolution_clock::now();

	auto duration = duration_cast<microseconds>(stop - start);
	cout << "fibonacci without constexpr = " << result1 << '\n';
	cout << "duration = " << duration.count() << " microseconds\n";

	start = high_resolution_clock::now();
	const long result2 = fibonacci2(40);
	stop = high_resolution_clock::now();

	duration = duration_cast<microseconds>(stop - start);
	cout << "result fibonacci with constexpr = " << result2 << '\n';
	cout << "duration = " << duration.count() << " microseconds\n";
	return 0;
}
