#include <iostream>
using namespace std;

// making swap funtion

void swap(int *a, int *b)
{
int temp=*a;
*a=*b;
*b=temp;
}

// making parition funtion
int partition(int a[], int low, int high)
{
int pivot=a[high];
int i=low-1;
for(int j=low; j<=high;j++)
{
if(a[j]<pivot){i++; swap(&a[i], &a[j]);}
}
swap(&a[i+1], &a[high]);
return (i+1);
}

// making quick sort function
void quicksort(int a[], int low, int high)
{
if(low<high)
{
int pivot=partition(a, low, high); // making pivot
quicksort(a, low, pivot-1); //left side
quicksort(a, pivot+1, high); // right side
}
}
int main()
{
int a[]={20, 68, 56, 120, 89, 76};
int n=sizeof(a)/sizeof(a[0]);
 cout<<"elements of array before sort"<<endl;
for(int i=0;i<n;i++)
{
cout<<a[i]<<"; ";
}
cout << endl;
quicksort(a, 0, n-1);
cout<<"elements of array after sort"<<endl;
for(int i=0;i<n;i++)
{
cout<<a[i]<<", ";
}
cout << endl;
return 0;
}
