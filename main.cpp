#include <iostream>
using namespace std;

int main() 
{
   int n=0;
   cin >> n;
   
   int a=0;
   int b=1;
   int c=0;
   
   cout << b << endl;
   for (int i=0;i<=(n-1);i++)
   {
      c=a+b;
      a=b;
      b=c;
      cout << c << endl;
   }
   return 0;
}
