//bubble sort
#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
int temp=*a;
*a=*b;
*b=temp;
}
void BubSort(int a[], int n)
{
int i,j;
for(i=0;i<n-1;i++)/////1, 3, 5, 7, 10
{
for(j=0;j<n-1-i;j++)
{
if(a[j]>a[j+1]) { swap(&a[j], &a[j+1]);}
}
}
}
int main()
{
int a[]={7,8, 2, 1, 12, 10};
int n=sizeof(a)/sizeof(a[0]);
cout<<"\n elements of arrays before sorting";
cout << endl;
for(int i=0; i<n;i++)
{
cout << a[i] << " ";
}
cout << endl;
cout<<"\n elements of arrays after sorting";
cout << endl;
BubSort(a, n);
for(int i=0; i<n;i++)
{
cout << a[i] << " ";
}
cout << endl;
return 0;
}
