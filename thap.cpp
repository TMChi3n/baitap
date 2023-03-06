#include<iostream>
using namespace std;
// n = 1 -> a ---> c
// n = 2 -> a ---> b, a ---> c => b ---> c
// n = 3 -> a - 1 -- > c, a - 1 --> b, c --> b, a --> c, b - 1 --> a, b - 1 --> c, a --> c  
void sapXep(int n, char a, char b, char c){
	if (n == 1){
		cout << a << " ------> " << c << endl;
	}else {
		sapXep(n -1 , a, c, b);
		cout << a << " ------> " << c << endl;
		sapXep(n - 1, b, a, c);
	}		
}

int main() {
	char a = 'A', b = 'B', c = 'C';
	int n;
	cout << "Nhap n : ";
	cin >> n;
	sapXep(n, a, b, c);
}


