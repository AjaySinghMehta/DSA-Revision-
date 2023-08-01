#include <bits/stdc++.h>
#define ll long long
using namespace std;

/*
    partition = pivot = a[0]
                iterate array = loop a for all i less then pivot
                count++
                swap a[0] and a[0+count]
                now start = a[0] and

    base case = start<=end;
                arr[start++] < arr[end--]   --> swap
    recursive relation = call quick sort from start to p -1 and
                        from p + 1 to end
*/

int partition(vector<int> &arr, int start, int end)
{
    /* choose the first element as pivot */
    int pivot = arr[start];
    int count = 0;
    for (int i = start; i <= end; i++)
    {
        if (arr[i] < pivot)
            ++count;
    }
    swap(arr[start], arr[start + count]);

    // left and right elements are handled
    int i = start, j = end;
    while (i < start + count && j > start + count)
    {
        while (arr[i] < pivot)
            ++i;
        while (arr[j] >= pivot)
            --j;
        if (i < start + count && j > start + count)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return start + count;
}

void quickSort(vector<int> &arr, int start, int end)
{
    // base case
    if (start >= end)
        return;

    // partition
    int p = partition(arr, start, end);

    // sort left portion of array which is till p-1
    quickSort(arr, start, p - 1);

    // sorting right portion of array which is from p
    quickSort(arr, p + 1, end);
}

int main()
{
    vector<int> arr = {9, 2, 4, 5, 7, 8, 1, 3, 6};
    quickSort(arr, 0, arr.size() - 1);

    for (auto a : arr)
        cout << a << " ";

    return 0;
}