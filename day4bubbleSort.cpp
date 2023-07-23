#include <bits/stdc++.h>
#define ll long long
using namespace std;
/*
    base case: no element in array or only one element in array
               if element 1 is less than element 2 then continue;
    recursive step : compare the adjacent elements and swap them
*/

void bubbleSort(vector<int> &a, int end)
{
    if (end+1 == 0 or end+1 == 1)
        return;
    for(int i = 0;i<end;++i)
    {
        if(a[i]>a[i+1])
            swap(a[i],a[i+1]);
    }
    //recursive call to sort remaining subarray except last element
    bubbleSort(a, --end);
}

int main()
{
    vector<int> a = {2, 4, 1, 5, 3};
    bubbleSort(a, a.size() - 1);
    for (auto i : a)
        cout << i <<" ";
    return 0;
}