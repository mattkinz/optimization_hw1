/**********************************************************	
  Newton's method for finding the zeros of a function
  *********************************************************/

#include <iostream>
#include <cmath>
double q(double x);
double q_prime(double x);

int main()
{
	double epsilon = .0000000000000001;
	double a = 3.0;
	double b = 5.0;
	double x = a/b - pow(10,7)*epsilon;	//initial value for x
//	double x = 10.0;
	std::cout << "x0 = " << x << "\n";
	int k = 1;
	double y = q(x);
	double check = std::abs(y);
	while (check > epsilon)
	{
		x = x - (q(x) / q_prime(x));
		std::cout << "x" << k << " = " << x << "\n";
		y = q(x);
		check = std::abs(y);
		std::cout << "f(x" << k << ") = " << check << "\n";
		k++;
	}
	std::cout << "x" << k << " = " << x << "\n";
	return 0;
}


/***********************************************************
  function and its derivative for which we are attempting to 
  find the zeros using Newton's method.
  *********************************************************/

double q(double x)
{
	double y;
	y = pow(x,3) * (1-x)*(1-x);
//	y = pow(x,2) + 4;
	return(y);
}

double q_prime(double x)
{
	double y_prime;
	y_prime = x*x*(1-x)*(3-5*x);
//	y_prime = 2*pow(x,1);
	return(y_prime);
}

