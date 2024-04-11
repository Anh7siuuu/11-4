#include <iostream>
using namespace std;   
#include "quicksort header file.h"
int main(){
	while(true){
	int n;
	cout << "So phan tu: ";
	cin >> n;
	int *a = new int [n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	quicksort(a, 0, n-1);
	for(int i=0; i<n; i++){
		cout << a[i] ;
		if(i<n-1){
			cout <<" ";
		}
		if(i==n-1){
			cout << endl;
		}
	}
	delete[] a;
}
}
