#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool isSorted(vector<int> & arr, int index)
{
    if(index == arr.size()-1)
        return true;
    if(arr[index]>arr[index+1])
        return false;
    return isSorted(arr, index+1);
}

int main()
{
    vector<int> arr = {1,3,3,4,5,6};
    bool ans = isSorted(arr,0);
    if(ans) cout<< "sorted";
    else cout<<"not sorted";
    return 0;
}