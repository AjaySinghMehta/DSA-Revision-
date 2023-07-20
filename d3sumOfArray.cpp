#include <bits/stdc++.h>
#define ll long long
using namespace std;
int mysum(vector<int> & arr, int index)
{   if(arr.size()==0) return 0;
    if(index == arr.size()-1)
    {
        return arr[index];
    }
    arr[index+1] += arr[index];
    return mysum(arr, index+1);
    
}


int chatgptSum(vector<int> &arr, int index)
{
    if(arr.size()==0) return 0;
    if(index == arr.size()-1) 
        return arr[index];
    int currentSum = arr[index];
    int remainingSum = chatgptSum(arr, index+1);
    return (currentSum + remainingSum);
}

int main()
{
    vector<int> arr = {3,2,1,5,6};
    cout<<chatgptSum(arr,0)<<endl;
    cout<<mysum(arr, 0);
    
    return 0;
}