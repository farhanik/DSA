#include <bits/stdc++.h>
using namespace std;

int partition(int A[], int l, int h)
{
    int pivot = A[l];
    int i = l, j = h;

    do
    {
        do
        {
            i++;
        } while (A[i] <= pivot);
        do
        {
            j--;
        } while (A[j] > pivot);
        if (i < j)
        {
            swap(A[i], A[j]);
        }
    } while (i < j);

    swap(A[l], A[j]);

    return j;
}

void Quicksort(int A[], int l, int h)
{
    int J;

    if (l < h)
    {
        J = partition(A, l, h);
        Quicksort(A, l, J);
        Quicksort(A, J + 1, h);
    }
}

int main()
{
    int n, Infinity = INT32_MAX;
    cout << "Enter array size = ";
    cin >> n;

    int A[n + 1];

    cout << "Enter Array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    A[n] = Infinity;

    Quicksort(A, 0, n);
    cout << "Sorted Array :";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}
