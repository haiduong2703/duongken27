#include <bits/stdc++.h>
using namespace std;
int nhap(){
	int n;
	do{
		cout<<"nhap so phan tu cua mang : ";
		cin>>n;
	}while(n<0);
	return n;
}
void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<"\ta["<<i<<"] =";
		cin>>a[i];
	}
}
void xuat(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void doicho(int &b,int &c){
	int d=c;
		c=b;
		b=d;
}
void sapxep(int a[],int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]%2!=0&&a[j]%2==0||a[i]==0&&a[j]%2==0){
				doicho(a[i],a[j]);
			}
		}
	}
	for(int i=n-1;i>=0;i--){
		for(int j=i-1;j>=0;j--){
			if(a[i]%2!=0&&a[j]==0){
				doicho(a[i],a[j]);
			}
		}
	}
	xuat(a,n);
}
void xuatmangcon(int c[],int nc){
	for(int i=0;i<nc;i++){
		cout<<c[i]<<" ";
	}
	cout<<endl;
}
int ktratangdan(int c[],int nc){
	for(int i=0;i<nc;i++){
		if(c[i]>c[i+1]){
			return 0;
		}
	}
	return 1;
}
void lietkecacdaycon(int a[],int n){
	int dodai;
	int c[100],nc;
	for(int i=0;i<n;i++){
		for(dodai=1;dodai<=n;dodai++){
			nc=0;
			for(int j=i;j<dodai;j++){
				c[nc]=a[j];
				nc++;
			}
			if(ktratangdan(c,nc)==1){
				xuatmangcon(c,nc);
			}
		}
	}
}
void inramangle(int a[],int n){
	int b[100],nb=0;
	for(int i=0;i<n;i++){
		if(a[i]%2!=0){
			b[nb]=a[i];
			nb++;
		}
	}
	cout<<"mang B gom cac phan tu le cua mang la : ";
	for(int i=0;i<nb;i++){
		cout<<b[i]<<" ";
	}
}
int main(){
	int n=nhap();
	int a[100];
	nhap(a,n);
	//sapxep(a,n);
	//lietkecacdaycon(a,n);
	inramangle(a,n);

}
