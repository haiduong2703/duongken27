#include<bits/stdc++.h>
using namespace std;
void nhap(float a[][100], int &n, int &m) {
	cout<<"Nhap so dong: ";
	cin>>n;
	cout<<"Nhap so cot: ";
	cin>>m;
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cout<<"\ta["<<i<<"]["<<j<<"]: ";
			cin>>a[i][j];
		}
	}
}
void xuat(float a[][100], int n, int m) {
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cout<<a[i][j]<<"  ";
		}
		cout<<endl;
	}
}
void yeucau1(float a[][100], int n, int m) {
	int dem=0;
	for ( int i = 0; i<n; i++) {
		for ( int j = 0; j<m; j++) {
			if (a[i][j]>a[i][j+1]&&a[i][j]>a[i][j-1]&&a[i][j]>a[i-1][j]&&a[i][j]>a[i-1][j-1]&&a[i][j]>a[i-1][j+1]&&a[i][j]>a[i+1][j]&&a[i][j]>a[i+1][j+1]&&a[i][j]>a[i][j-1])
				dem++;
			}
	}
	cout<<"Ma tran co "<<dem<<" phan tu cuc dai"<<endl;
	for ( int i = 0; i<n;i++) { 
	   for ( int j = 0; j<m; j++) { 
	        if (a[i][j]>a[i][j+1]&&a[i][j]>a[i][j-1]&&a[i][j]>a[i-1][j]&&a[i][j]>a[i-1][j-1]&&a[i][j]>a[i-1][j+1]&&a[i][j]>a[i+1][j]&&a[i][j]>a[i+1][j+1]&&a[i][j]>a[i][j-1]) 
	        cout << a[i][j] << " "; 
		   }
	}
}
void yeucau2(float a[][100], int n, int m){
	int dem=0;
	for ( int i = 0; i<n; i++) {
		for ( int j = 0; j<m; j++) {
			if ((a[i][j]>a[i][j+1]&&a[i][j]>a[i][j-1]&&a[i][j]>a[i-1][j]&&a[i][j]>a[i-1][j-1]&&a[i][j]>a[i-1][j+1]&&a[i][j]>a[i+1][j]&&a[i][j]>a[i+1][j+1]&&a[i][j]>a[i][j-1]) || (a[i][j]<a[i][j+1]&&a[i][j]<a[i][j-1]&&a[i][j]<a[i-1][j]&&a[i][j]<a[i-1][j-1]&&a[i][j]<a[i-1][j+1]&&a[i][j]<a[i+1][j]&&a[i][j]<a[i+1][j+1]&&a[i][j]<a[i][j-1]))
				dem++;
			}
	}
	cout<<endl<<"Ma tran co "<<dem<<" phan tu cuc tri"<<endl;
	for ( int i = 0; i<n;i++) { 
	   for ( int j = 0; j<m; j++) { 
	        if ((a[i][j]>a[i][j+1]&&a[i][j]>a[i][j-1]&&a[i][j]>a[i-1][j]&&a[i][j]>a[i-1][j-1]&&a[i][j]>a[i-1][j+1]&&a[i][j]>a[i+1][j]&&a[i][j]>a[i+1][j+1]&&a[i][j]>a[i][j-1]) || (a[i][j]<a[i][j+1]&&a[i][j]<a[i][j-1]&&a[i][j]<a[i-1][j]&&a[i][j]<a[i-1][j-1]&&a[i][j]<a[i-1][j+1]&&a[i][j]<a[i+1][j]&&a[i][j]<a[i+1][j+1]&&a[i][j]<a[i][j-1])) 
	        cout << a[i][j] << " "; 
		   }
	}
}

int main() {
	float a[100][100];
	int n,m;
	nhap(a,n,m);
	cout<<"Ma tran vua nhap: "<<endl;
	xuat(a,n,m);
	yeucau1(a,n,m);
	yeucau2(a,n,m);
}
