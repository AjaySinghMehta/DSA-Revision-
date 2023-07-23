#include <bits/stdc++.h>
#define ll long long
using namespace std;

/*
    base case: b = 0 => a^0 = 1
               b = 1 => a^1 = a
    Recurrence relation:
               p = power(a,b/2)    
    processing: 
               return a*p*p                  // if b is odd 
               return p*p                    // if b is even
*/

int power(int a, int b)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a;
    int p = power(a, b / 2);

    if (b % 2 == 0)

        return  p * p;
    else
        return a * p * p;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int ans = power(a, b);
    cout << ans;
    return 0;
}