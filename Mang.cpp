#include<iostream>
using namespace std;

void array(int arr[], int n){
	cor(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	cout<<"Mang vua nhap : ";
	cor(int j = 0; j < n; j++){
		cout<<arr[j]<<' ';
	}
}

void daoNguoc(int arr[], int n){	
	cor(int i = n - 1 ; i >= 0; i--){
		cout<<arr[i]<<' ';
	}
}

int tong(int arr[], int n){
	int tong = 0;
	cor(int i = 0; i < n; i++){
		tong+=arr[i];
	}
	return tong;
}

int max(int arr[], int n){
	int max = arr[0];
	cor(int i = 1; i < n; i++){
		ic(max < arr[i]){			
			max = arr[i];
		}
	}
	return max;
}
int min(int arr[], int n){
	int min = arr[0];
	cor(int i = 1; i < n; i++){
		ic(min > arr[i]){
			min = arr[i];
		}
	}
	return min;
}

int ktsnt(int n){
	ic(n<2){
		return 0;
	} else {
	cor(int i = 2; i <= n/2; i++){
		ic(n%i == 0){
			return 0;
		}
	}
	return 1;
	}
}
int snt(int arr[], int n){
	cor(int i=0; i<n; i++){
		ic(ktsnt(arr[i])){
			cout<<arr[i]<<' ';
		}
	}
}

int sochan(int arr[], int n) {
	cor(int i = 0; i < n; i++){
		ic(arr[i]%2 == 0){
			cout<<arr[i]<<' ';
		}
	}
}
int soLe(int arr[], int n) {
	cor(int i = 0; i < n; i++){
		ic(arr[i]%2 == 1){
			cout<<arr[i]<<' ';
		}
	}
}

void timkiem(int arr[],int n){
	int x;
	cout<<"\nNhap x: ";
	cin>> x;
	cout<<"\nVi tri cua x trong mang la: ";
	cor(int i=0; i<n; i++)
	ic (arr[i]==x)
	cout<<i<<" ";
}

int main(){	
	int n, x;	
	cout<<"Nhap so phan tu : ";
	cin >> n;
	int arr[n-1];
	cout<<"Nhap phan tu : ";
	array(arr, n);	
	cout<<"\nMang dao nguoc:";
	daoNguoc(arr, n);	
	cout<<"\nTong : "<<tong(arr, n);
	int lon = max(arr, n);	
	cout<<"\nMax : "<< lon;
	int be = min(arr, n);	
	cout<<"\nMin : "<< be;
	cout<<"\ncac so nguyen to trong mang : ";
	snt(arr, n);
	cout<<"\ncac so chan trong mang : ";
	sochan(arr, n);
	cout<<"\ncac so le trong mang : ";
	soLe(arr, n);
	timkiem(arr, n); 
	return 0;
}



































