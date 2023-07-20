#include <bits/stdc++.h>
#define ll long long
const int N = 1e5+2;

int dp[N];

using namespace std;

int solution(int n)
{
    if( n == 0) return 1;

    if(n==1 or n==2) return n;
    

    if(dp[n]!= -1)
        return dp[n];

    dp[n] = solution(n-1) + solution(n-2) + solution(n-3);
    return dp[n];
}

int main()
{   int n = 4;
    for(int i = 0; i<n;i++)
    {
        dp[i] = -1;
    }
    cout<< solution(4);
    return 0;
}