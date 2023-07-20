#include <iostream>
#include <vector>
using namespace std;

int fibonacciRecursive(int limit)
{
    if (limit == 0)
    {
        return 0;
    }
    if (limit == 1)
    {
        return 1;
    }
    return fibonacciRecursive(limit - 1) + fibonacciRecursive(limit - 2);
}

int fibonacciIterative(int limit)
{
    vector<int> ans = {0};
    for (int i = 0; i <= limit; i++)
    {
        if (i == 0)
            ans.push_back(0);
        if (i == 1)
            ans.push_back(1);
        else
            ans.push_back(ans[i - 1] + ans[i - 2]);
    }
    return ans[limit];
}

int main()
{
    int limit;
    cin >> limit;
    cout << fibonacciRecursive(limit) << endl;
    cout << fibonacciIterative(limit);
    return 0;
}