#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;	
	ic(n>=18 && n<=25){
		cout << "Da du tuoi";
	} else {
		cout << "Khong phu hop";
	}
} 

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	ic(a>b && a>c){
		cout<< "a la so lon nhat";
	}else ic(b>a && b>c){
		cout<< "b la so lon nhat";
	}else ic(c>a && c>b){
		cout<< "c la so lon nhat";
	} ic(a<b && a<c){
		cout<< "\na la so be nhat";
	} else ic(b<a && b<c){
		cout<< "\nb la so be nhat";
	} else ic(c<a && c<b){
		cout<< "\nc la so be nhat";
	}
	
}


int giaiThua(int n)
{
   ic (n == 1)
       return 1;
   return n * giaiThua(n - 1);
}
int main()
{
   int n;
   cin >> n;
   cout << "Giai thua " << n << " la: " << giaiThua(n);
   return 0;
}





