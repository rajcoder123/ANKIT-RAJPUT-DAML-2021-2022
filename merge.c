#include<stdio.h>
int c[100];
int mergearray(int a[],int low, int mid,int high)
{ int i=low,j=mid+1,k=low;
    while(i<=mid && j<=high)
    { if(a[i]<a[j])
    { c[k]=a[i];
        k=k+1;
        i=i+1;
    }
    else {
        c[k]=a[j];
        j=j+1;
        k=k+1;
    }
    }
    while(i<=mid)
    {
        c[k]=a[i];
        i=i+1;
        k=k+1;
    }
    while(j<=high)
    {
        c[k]=a[j];
        j=j+1;
        k=k+1;
}
for(i=low;i<=high;i++)
{
    a[i]=c[i];
}
}
int mergesort(int a[],int low,int high)
{   if(low<high)
{   int mid=(low+high)/2;
    mergesort(a,low,mid);
    mergesort(a,mid+1,high);
    mergearray(a,low,mid,high);
}
}
void main()
{
    int a[100];
     int N,i,low=0;
    printf("Enter the number of elements in an array -> ");
    scanf("%d",&N);
    printf("Enter elements of array ->");
    for(i=0;i<N;i++)
    {
        scanf(" %d ",&a[i]);
    }
    printf("Given Array is -> ");
    for(i=0;i<N;i++)
    {
        printf(" %d ",a[i]);
    }
    mergesort(a,low,N);
    printf("\nSorted Array is -> ");
    for(i=low;i<N;i++)
    {
        printf(" %d",a[i]);
    }
}


