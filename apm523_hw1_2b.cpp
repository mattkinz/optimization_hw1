//This program is to explore the convergence of the sequence
//
//x_k+1 = 1/5(4x_k - a/x_k^4), a real.
//
//Note that this is expression is equivalent to newton's method for the function f(x) = x^5 + a
//Hence convergence should be toward -a^(1/5)
//
//The goal is to find an a and x0 such that the sequence converges, 
//and find the limit of the sequence.

#include <iostream>
#include <cmath>

int main()
{
	double x = 200.0;	//x0
	double a = 243.0;	
	std::cout << "a = " << a << "\n";
	std::cout << "x0 = " << x << "\n";
	int k;
	for (k = 1; k <= 100; k++)
	{
		x = 1.0/5.0 * (4.0*x - a/pow(x,4));
		std::cout << "x" << k << " = " << x << "\n";
	}

	return 0;
}
