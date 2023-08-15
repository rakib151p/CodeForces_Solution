#include <bits/stdc++.h>
using namespace std;
template<class T>
class quickSort
{
public:
    quickSort()
    {
    }
    void sort(vector<T> &arr, int pivot, int last)
    {
        if (pivot < last)
        {
            int i = pivot + 1, j = last;
            while (i <= j)
            {
                while (arr[pivot] >= arr[i] && i <= last)
                {
                    i += 1;
                }
                while (arr[pivot] < arr[j] && j >= pivot)
                {
                    j -= 1;
                }
                if (i < j) /// if i is still lower that J then swap arr[i] and arr[j]
                {
                    swap(arr[i], arr[j]);
                    i++;
                    j--;
                }
            }
            /// swap arr[pivot] ans arr[j]
            swap(arr[pivot], arr[j]);

            /// call quick sort again for left element of nth partitioning element
            sort(arr, pivot, j - 1);

            /// call quick sort again for right element of nth partitioning element
            sort(arr, j + 1, last);
        }
    }
};
