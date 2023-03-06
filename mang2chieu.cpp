#include<iostream>
#include<conio.h>
using namespace std;

void nhap( int m, int n,int a[][100]){
	for(int i=0; i<m;i++){
		for(int j=0;j<n;j++){
			cout<<"a["<<i+1<<"]"<<"["<<j+1<<"]"<<": "; 
			cin >> a[i][j];
    	}
    }
}

void xuat( int m, int n,int a[][100]){
	for(int i=0; i<m;i++){
		for(int j=0;j<n;j++){
			cout<< a[i][j]<< " ";
    	}
	cout<<"\n";
    }
}

void tong(int m, int n, int a[][100]){
	int tong=0;
	for(int i=0; i<m;i++){
		for(int j=0;j<n;j++){
			tong = tong + a[i][j];
    	}
	cout<<"Tong hang thu "<< i+1<<": "<< tong;;
	cout<<"\n";
	tong=0;
   }
} 

int main(){
	
	int a[100][100];
	int m,n;
	cout<<"Nhap so hang: ";
	cin>>m;
	cout<<"Nhap so cot: ";
	cin>>n;
	nhap(m,n,a);
	xuat(m,n,a);
	tong(m,n,a);
}
