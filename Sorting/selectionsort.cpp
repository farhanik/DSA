#include<bits/stdc++.h>

using namespace std;


void selectionsort(int arr[], int n)
{
    int k;
    for(int i=0; i<n-1; i++ )
    {
        for(int j=k=i; j<n; j++)
        {
            if(arr[j]<arr[k])
            {
                k=j;
            }
        }
        swap(arr[i],arr[k]);

    }
}

int main()
{
    int A[]={87,85,54,14,25,65,78};

    selectionsort(A,7);

    for(int i=0 ; i<7; i++)
    {
        cout<<A[i]<<" ";
    }

    return 0;
}
