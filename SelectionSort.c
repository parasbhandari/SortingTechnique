//selection sort
#include<stdio.h>
void selectionSort(int A[],int n)
{
    int i,j,k,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=k=i;j<n;j++)
        {
            if(A[k]>A[j])
            {
                k=j;
            }
        }
        temp=A[i];
        A[i]=A[k];
        A[k]=temp;
    }
}
void Display(int A[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
}
int main()
{
    int A[]={89,23,22,2,7};
    selectionSort(A,5);
    Display(A,5);
    return 0;
}
