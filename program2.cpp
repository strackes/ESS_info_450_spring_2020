#include <iostream>
using namespace std;
int main()
{
   int num;
   int i;

   bool isPrime = true;

   cout << "Please enter a number: " ;
   cin >> num;

   for ( i=2; i<+ num/2; ++i)
   {
       if ((num % i) == 0)
       {
           isPrime = false;
           break;
       }
   }

   if (isPrime)
        cout << num << " is a prime number." ;
    else
        cout << num << " is not a prime number." ;

        return 0;

}
