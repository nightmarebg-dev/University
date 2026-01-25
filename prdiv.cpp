#include <iostream>
#include <vector>

using namespace std;

int main()
{
   
   int n;
   int counter = 0;

   cin >> n;

   vector<bool> prime(n + 1, true);

   for (int p = 2; p * p <= n; p++) {

       if (prime[p]) {

           for (int i = p * p; i <= n; i += p) {

               prime[i] = false;

           }

       }

   }

   vector<int> res;

   for (int i = 2; i <= n; i++) {

       if (prime[i]) {

           res.push_back(i);

       }

   }

   for (int i = 0; i < res.size(); i++) {

       if (n % res[i] == 0) {

            counter ++;

        }

   }

   cout << counter << endl;

    return 0;
}