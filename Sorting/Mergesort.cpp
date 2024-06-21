#include <bits/stdc++.h>
using namespace std;



void T_merge(int A[],int B[] ,int m, int n)
{
    int i = 0, j = 0, k=0;
    int C[m+n]; 

    while (i < m && j < n)
    {
        if (A[i] < B[j])
        {
            C[k] = A[i];
            k++;
            i++;
        }
        else
        {
            C[k] = B[j];
            k++;
            j++;
        }
    }
    while (i <= m)
    {
        C[k] = A[i];
        k++;
        i++;
    }
    while (j <= n)
    {
        C[k] = B[j];
        k++;
        j++;

    }
    
}




void merge(int A[], int l, int mid, int h)
{
    int i = l, j = mid + 1, k = l;
    int B[h + 1]; 

    while (i <= mid && j <= h)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            k++;
            i++;
        }
        else
        {
            B[k] = A[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        B[k] = A[i];
        k++;
        i++;
    }
    while (j <= h)
    {
        B[k] = A[j];
        k++;
        j++;

    }
    for (i = l; i <= h; i++)
    {
        A[i] = B[i]; 
    }
}

void MergeSort(int A[], int l, int h)
{
    int mid=(l+h)/2;

    if(l<h)
    {
        MergeSort(A,l,mid);
        MergeSort(A,mid+1,h);
        merge(A,l,mid,h);
    }
}

void IMergeSort(int A[], int n)
{
    int p,i,l,mid,h;
    for(p=2 ; p<=n ; p=p*2)
    {
        for(int i=0; i+p-1<n ; i=i+p)
        {
             l=i;
             h=i+p-1;
             mid=(l+h)/2;
             merge(A, l , mid ,h);
        }
    }
    if(p/2 < n)
    {
        merge(A, 0 , (p/2-1) , n-1);
    }
}

int main()
{
    int A[9] = {1,5,7,8,11,14,16,18,19};
   
   int B[6]={3,9,12,17,20,22}; 

   T_merge(A,B,9,6);

    for (int i = 0; i <= 15; i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}
