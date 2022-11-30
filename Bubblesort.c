//Bubble sorting
#include<stdio.h>
void Bubblesort(int A[],int n)
{
int i,j,temp,flag;
for(i=0;i<n-1;i++)
{
 flag=0;
    for(j=0;j<n-1-i;j++)
    {
        if(A[j]>A[j+1])
        {
           temp=A[j];
           A[j]=A[j+1];
           A[j+1]=temp;
           flag=1;
        }
    }
    if(flag==0)
    break;
}
}
void Display(int A[],int n)
{
int i;
for(i=0;i<n;i++)
printf("%d ",A[i]);
}
int main()
{
int A[]={5,6,9,12,4,78,1};
printf("\n Before using bubble sort:\n");
Display(A,7);
printf("\n After using bubble sort:\n");
Bubblesort(A,7);
Display(A,7);
return 0;
}
