#include<bits/stdc++.h>

using namespace std;

void bubblesort(int arr[], int n)
{ 
    int flag=0;
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                flag=1;
            }
        }
        if(flag==0)
        {
            break;
        }
    }

}

int main()
{
    int A[]={1,2,3,4,5,6,7};

    bubblesort(A,7);

    for(int i=0 ; i<7; i++)
    {
        cout<<A[i]<<" ";
    }

    return 0;
}