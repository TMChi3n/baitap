#include<iostream>
using namespace std;

int fibonacci(int a[],int n)
{
	int i;
a[0]=1;
a[1]=1;
for(i=2;i<=n;i++)
{
	a[i]=a[i-1]+a[i-2];
	
}

for(i=0;i<n;i++)
{
cout<<"So fibonacci thu "<<i+1<<" cua "<< n <<" la "<<a[i]<<"\n";
}
return 0;
}


int main(){
	int a[100];
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	fibonacci(a,n);
}
