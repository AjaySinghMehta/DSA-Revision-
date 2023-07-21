#include <bits/stdc++.h>
#define ll long long
using namespace std;

/*
    base case : element found 
    processing: arr.size() = 0        return  -1
                element not found     return -1
                element found         return index
    Recurrence relation : mid : startidx : endidx
                          mid      0           arr.size() 
                          
*/




int binarySearch(vector<int> &v, int n, int startidx, int endidx)
{   if(v.size()==0) return 0;
    if(startidx>endidx) return -1;
    int mid = (startidx + endidx)/2;
    if(v[mid] == n) return mid;
    if(v[mid]>n) return binarySearch(v, n , startidx, mid-1);
    else if(v[mid]<n) return binarySearch(v, n , mid+1, endidx);
    return -1;

}

/*
n =5  
binarySearch(5) --> continue 
                --> mid = 2
                    v[mid] = 6

*/
int main()
{
    vector<int> v = {2,4,6,8,10};
    cout<<binarySearch(v,15,0,v.size()-1)<<endl;//output:-1   
    return 0;
}