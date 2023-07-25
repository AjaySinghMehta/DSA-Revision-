#include <bits/stdc++.h>
#define ll long long
using namespace std;

void merge(vector<int>& v, int start, int end)
{
    int mid = (start + end) / 2;

    int size1 = mid - start + 1;
    int size2 = end - mid;

    vector<int> arr1(size1);
    vector<int> arr2(size2);

    for (int i = 0; i < size1; ++i)
    {
        cout << "copying in array1: " << v[start + i] << endl;
        arr1[i] = v[start + i];
    }

    for (int i = mid + 1; i <= end; ++i)
    {
        cout << "copying in array2: " << v[i] << endl;
        arr2[i - (mid + 1)] = v[i];
    }

    int idx1 = 0, idx2 = 0;
    int vidx = start;

    while (idx1 < size1 && idx2 < size2)
    {
        if (arr1[idx1] <= arr2[idx2])
        {
            v[vidx++] = arr1[idx1++];
        }
        else
        {
            v[vidx++] = arr2[idx2++];
        }
    }

    while (idx1 < size1)
    {
        v[vidx++] = arr1[idx1++];
    }

    while (idx2 < size2)
    {
        v[vidx++] = arr2[idx2++];
    }

    arr1.clear();
    arr2.clear();
}

void mergeSort(vector<int> &v, int start, int end)
{
    if (start >= end)
        return;
    int mid = (start + end) / 2;
    cout << "mergeSort is called from " << start << " to " << end << endl;
    // Recursively sort first and second halves of the array
    mergeSort(v, start, mid);

    // Recursively sorting second half of the array
    mergeSort(v, mid + 1, end);

    /* Merge both sorted subarrays */
    merge(v, start, end);
}

int main()
{
    vector<int> v = {1,4,5,2,3,22,15,14,12,11,0,11,7,8,12,14}; 
    mergeSort(v, 0, v.size() - 1); 
    for (auto a : v)
        cout << a << " ";
    return 0;
}
