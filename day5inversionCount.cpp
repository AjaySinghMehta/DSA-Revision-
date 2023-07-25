#include <bits/stdc++.h>
#define ll long long
using namespace std;

/*
    given array -> check every element by traversing through the array
                   compare two elements at a time and check if they are sorted if not increment otherwise continue;
*/

int getInvCount(vector<int> &arr, int n)
{
    int inv_count = 0;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n + 1; j++)
            if (arr[i] > arr[j])
                inv_count++;

    return inv_count;
}

ll merge(vector<int> &a, int start, int end)
{
    int mid = (start + end) / 2;
    int sizeLeft = mid - start + 1;
    int sizeRight = end - mid;

    int i = 0, j = 0, a_idx = start; // Initialize i, j, and a_idx

    vector<int> leftArr(sizeLeft);
    vector<int> rightArr(sizeRight);

    // Copy elements from the left half of 'a' to the 'leftArr'
    for (int i = 0; i < sizeLeft; i++)
    {
        leftArr[i] = a[start + i];
    }

    // Copy elements from the right half of 'a' to the 'rightArr'
    for (int i = mid + 1; i <= end; i++)
    {
        rightArr[i - (mid + 1)] = a[i];
    }

    ll inverse_count = 0; // Initialize inversion count

    // Merge the two subarrays and count inversions
    while (i < sizeLeft and j < sizeRight)
    {
        if (leftArr[i] <= rightArr[j])
            a[a_idx++] = leftArr[i++];
        else
        {
            a[a_idx++] = rightArr[j++];
            // Count inversions when an element from the right subarray is chosen before the element from the left subarray.
            inverse_count += sizeLeft - i;
        }
    }

    // Copy the remaining elements from the right subarray if any
    while (j < sizeRight)
    {
        a[a_idx++] = rightArr[j++];
    }

    // Copy the remaining elements from the left subarray if any
    while (i < sizeLeft)
    {
        a[a_idx++] = leftArr[i++];
    }

    leftArr.clear();
    rightArr.clear();

    return inverse_count;
}

ll mergeSort(vector<int> &a, int start, int end)
{
    ll inverse_count = 0; // Initialize inversion count

    if (start < end)
    {
        int mid = (start + end) / 2;
        // Recursively sort and get inversions for the two halves
        inverse_count += mergeSort(a, start, mid);   // left half
        inverse_count += mergeSort(a, mid + 1, end); // right half
        // Merge the two halves and get additional inversions
        inverse_count += merge(a, start, end);
    }

    return inverse_count;
}

int main()
{
    vector<int> a = {1, 20, 6, 4, 5};

    // Count inversions using the getInvCount function
    ll inv_count_getInvCount = getInvCount(a, a.size()-1);
    cout << "Inverse count using getInvCount: " << inv_count_getInvCount << endl;

    // Count inversions using the mergeSort function
    ll inv_count_mergeSort = mergeSort(a, 0, a.size() - 1);
    cout << "Inverse count using mergeSort: " << inv_count_mergeSort << endl;

    return 0;
}