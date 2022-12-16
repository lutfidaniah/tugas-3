#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int jml;
	
	int breaker;
	int star;
	int star2;
	cout<<"Masukkan Jumlah Bintang : ";
	cin>>jml;
	
	
	for(breaker = 0; breaker < jml; breaker++){
		for(star = 0; star <= breaker; star++){
			cout<<"*";
		}
		cout<<"\n";
	}
	for(breaker=star-1; breaker > 0; breaker--){
		for(star2=jml; star2 > jml-breaker; star2--){
			cout<<"*";
		}
		cout<<"\n";
	}
}
