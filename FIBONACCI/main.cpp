// C++ Program to find n'th fibonacci Number
#include<bits/stdc++.h>
#include<cmath>

long long int fib(long long int n) {
  double phi = (1 + sqrt(5)) / 2;
  return round(pow(phi, n) / sqrt(5));
}

// Driver Code
int main ()
{
  long long int n;
  std::cin >> n;
  std::cout << fib(n) << std::endl;
  return 0;
}
