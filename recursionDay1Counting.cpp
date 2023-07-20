#include <iostream>

using namespace std;

void printDigit(int n)
{
    if(n==0) return ;
    printDigit(n-1);
    cout<<n<<endl;
}

int main()
{
    int n=10;
    // cin >> n;
    printDigit(n);
    return 0;
}