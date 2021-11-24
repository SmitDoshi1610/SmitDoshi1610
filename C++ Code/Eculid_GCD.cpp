#include<iostream>
using namespace std;
//Using Euclid Algorithm To Find GCD

// Time Complexity : O(log min(a,b))

int Euclide_gcd(int a,int b)
{
   if(b==0)//Base Condition
   {
      return a;
   }
   return Euclide_gcd(b,a%b);//Using Recursion
}
int main()
{
   int a,b;
   cin>>a>>b;
   cout<<"GCD of "<<a<<" and "<<b<<" = "<<Euclide_gcd(a,b);

   return 0;
}

/*
 Using Itarative Approach

 int gcd (int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}



  Using One line Solution

  int gcd (int a, int b) {
    return b ? gcd (b, a % b) : a;
}



  For Finding LCM form GCD
	
	Time Complexity : O(1)

	LCM = (a*b)/gcd(a,b);

	int lcm (int a, int b) {
    return a / gcd(a, b) * b;
}
*/