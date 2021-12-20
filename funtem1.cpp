#include<iostream>
using namespace std;
template<typename T>
void sort(T a[],int n)
{
	T temp;
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
template<typename T>
void print(T a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	cout<<a[i]<<endl;
}
int main()
{
	cout<<"sorted order:\n";
	int a[5]={10,20,53,5,15};
	char c[5]={'r','a','j','i','i'};
	sort(a,5);
	print(a,5);
	cout<<"sorted order:\n";
	sort(c,5);
	print(c,5);
	return 0;
}
