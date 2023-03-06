#include<iostream>
using namespace std;
int fib(int number)
{
	if (number == 0 || number == 1) return number;
	return (fib(number-1) + fib(number-2));
}

int giaithua(int number){
    if (number == 0 || number == 1) return 1;
    return (number*giaithua(number-1));
}

int S(int number){
    if (number == 0 || number == 1) return number;
    return (number+S(number-1));
}

int luythua(int a, int number ){
	if(a==0 && number==0) return 1;
	if(a==0 || a==1) return a;
    if (number == 0 || number==1) return 1;
    if (number%2 == 0) {
    	return (a^(number/2)*a^(number/2));
	}
	else return (a^(number/2)*a^(number/2)*a);
}

int main(){
	int n;
    cout<<"Nhap n: ";
	cin>>n;
	int intfib = fib(n);
	cout<<"So Fibonacci cua "<<n<<" la "<<intfib<<endl;
	
  for (int i=1;i<=n;i++)
	{
		int intfib = fib(i);
		cout<<"\nSo Fibonacci thu "<<i<<" cua "<<n<<" la "<<intfib;
	}
	
    cout<<"\nGiao thua cua "<<n<<" la "<<giaithua(n);
	cout<<"\nTong cua "<<n<<" la "<<S(n)<<endl;
	int a;
	cout<<"Nhap a: ";
	cin>>a;
	cout<<"\nLuy thua cua "<<a<<" mu "<<n<<" la "<<luythua(a,n)<<endl;
	return 0;
	
}

