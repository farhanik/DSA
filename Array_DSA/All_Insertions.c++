#include <stdio.h>
int arr[100] = {10, 20, 30, 40, 50, 60};
int usingsize = 6;
int n, pos;

void Insertfirst(int n)
{
    for (int i = usingsize - 1; i >= 0; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[0] = n;

    usingsize++;
}
void Insert_Anyposition(int pos, int n)
{
    for (int i = usingsize - 1; i >= pos - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = n;

    usingsize++;
}

void Insert_last(int n)
{
    arr[usingsize] = n;
    usingsize++;
}

int main()
{

    printf("Array=");

    for (int i = 0; i < usingsize; i++)

    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // printf("which position you want to insert?\nType=");
    // scanf("%d",&pos);

    printf("which number you want to insert?\nType= ");
    scanf("%d", &n);

       Insertfirst(n);
    // Insert_last(n);
    // Insert_Anyposition(pos,n);
    

    printf("Updated Array\n");
    for (int i = 0; i < usingsize; i++)
    {
        printf("%d ", arr[i]);
    }
}