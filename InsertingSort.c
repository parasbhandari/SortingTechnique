//Inserting sort
#include<stdio.h>
void InsertSort(int A[],int n)
{
    int i,j,temp,x;
    for(i=1;i<n;i++)
    {
        j=i-1;
        x=A[i];
        while(j>-1 &&x<A[j])
        { 
          A[j+1]=A[j];
          j--;
        }
        A[j+1]=x;

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
    int A[]={8,5,7,3,2};
    InsertSort(A,5);
    Display(A,5);
    return 0;

}
