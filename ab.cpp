#include <bits/stdc++.h>
using namespace std;
void play(){
	int somay=1+rand()%100;
	int solandoan=0;
	int songuoi;
	do{
		cout<<"may doan 1 so [1...100], so cua ban la gi: ";
		cin>>songuoi;
		solandoan++;
		cout<<"ban ban lan thu "<<solandoan<<endl;
		if(songuoi==somay){
			cout<<"YOU WIN, so may="<<somay<<endl;
			break;
		}
		if(songuoi<somay){
			cout<<"so nguoi doan < so may"<<endl;
		}
		else{
		
			cout<<"so nguoi doan > so may"<<endl;
		}
		if(solandoan==7){
			cout<<"GAME OVER so cua may = "<<somay<<endl;
			break;
		}
	}while(1);
		}
void playagain(){
	while(true){
		play();
		cout<<"Tiep khong?(c/k): ";
		char c;
		cin>>c;
		if(c=='k')
			break;
	}
	cout<<"Cam on ban da choi game";
}
int main(){
	srand(time(NULL));
//	play();
	playagain();
}
