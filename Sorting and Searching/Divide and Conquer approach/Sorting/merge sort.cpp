#include <iostream>

using namespace std;

void Merge(int a[], int l, int m, int r)
{
int i,j,k;
int n1=m-l+1;
int n2=r-m;
int L1[n1], R1[n2];
for(i=0;i<n1;i++)
{L1[i]=a[l+i];}
for(j=0;j<n2;j++)
{
R1[j]=a[m+1+j];
}
i=0; j=0; k=l;
while(i<n1 && j<n2)
{
if(L1[i]<=R1[j]){a[k]=L1[i]; i++;} else
{a[k]=R1[j]; j++;} k++;
}
while(i<n1)
{
a[k]=L1[i]; i++; k++;
}
while(j<n2)
{
a[k]=R1[j]; j++; k++;
}

}
void MergeSort(int a[], int l, int r)
{
if(l<r)
{
int m=l+(r-l)/2;
MergeSort(a, l, m);
MergeSort(a, m+1, r);
Merge(a, l,m, r);
}

}

int main()
{
int a[]={70, 10, 80, 90, 50, 40, 20, 10};
int n=sizeof(a)/sizeof(a[0]);
cout<<"elements of array before sort"<<endl;
for(int i=0;i<n;i++)
{
cout<<a[i]<< ", ";
}
cout << endl;
MergeSort(a, 0, n-1);
cout<<"elements of array after sort"<<endl;
for(int i=0;i<n;i++)
{
cout<<a[i]<<" ,";
}
cout << endl;
return 0;
}
