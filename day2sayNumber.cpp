#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solution(ll n, vector<string> &digits)
{
    if(n==0) return;
    solution(n/10, digits);
    cout<<digits[n%10-1]<<"\t";
    
}

int main()
{  ll n = 1524589697844;
vector<string> digits = {"one", "two" , "three", "four", "five", "six", "seven", "eight", "nine"};
solution(n, digits);
return 0;
}