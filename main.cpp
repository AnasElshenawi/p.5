#include <iostream>

using namespace std;

int main()
{
   int l ;
   int j ;
   cout << "enter your start  number/n";
 cin >> l;
     cout << "enter your end number/n";

   cin >> j;
  cout<< "  lucky   "<<  l << " and " << j <<endl;
   for (int l = 1; l <= 10; l++)
   {
       for (int j = 1; j <= l; j++)
       {
           if (l % 4 == 0 && l % 7 == 0)
           {
               cout << "lucky ";
           }
           else
           {
               cout << "not lucky ";
           }
       }

       cout << "endl";
   }

}
