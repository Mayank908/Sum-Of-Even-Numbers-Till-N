#include<iostream>
using namespace std;

int main (){
	int n ;
	cin>> n ; 
	int d = 2 ,sum = 0 ;
	while(d<=n){
		sum = sum+d;
		d= d+2;
	}
	cout << sum << endl ;
}
