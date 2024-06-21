#include <iostream>

 using namespace std;

int binarySearch(int arr[], int l, int h, int x)
{
    int mid;
  if(l<h)
  {
    mid=(l+h)/2;

    if(arr[mid]==x)
    {
      return mid;
    }
    else if(arr[mid]>x)
    {
      return binarySearch(arr,l,mid-1,x);
    }
    else
    {
      return binarySearch(arr,mid+1,h,x);
    }
  }
  return -1;
}

int main()
{
  int arr[]={1,2,3,4,5,6,7,8,9,10};

  int F=binarySearch(arr,0,9,6);

  if(F==-1)
  {
    cout<<"Element not found!!";
  }
  else
  {
  
   cout<<"Element found at index: "<<F;
  }

  return 0;
}