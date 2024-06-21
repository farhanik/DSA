#include<stdio.h>
 int arr[100]={10,20,30,40,50,60};
 int usingsize= 6;
 int n,pos;

 void Delete_First()
 {
    for(int i=1; i<=usingsize-1 ; i++)
    {
        arr[i-1]=arr[i];
    }
    usingsize--;
 }

 void Delete_Anyposition(int pos)
 {
    for(int i=pos-1; i<=usingsize-1 ; i++)
    {
        arr[i]=arr[i+1];
    }
    usingsize--;
 }

 void delete_last()
 {
    usingsize--;
 }

 int main()
{
   
    printf("Array=");

    for(int i=0; i<usingsize ; i++)

    {
        
        printf("%d ",arr[i]);
 
    }
    printf("\n");

    //printf("which position you want to delete?\nType=");
    //scanf("%d",&pos);

    //Delete_First();
   //Delete_Anyposition(pos);
  //delete_last();

    printf("Updated Array\n");
    for(int i=0; i<usingsize ; i++)
    {
        printf("%d ",arr[i]);
 
    }

}