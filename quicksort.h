#pragma once
void swap(int &a, int &b){
	int c=0;
	c=a;
	a=b;
	b=c;
}
int partition(int *a, int low, int high){
    int pivot = a[low];
    int i = low+1;
    int j = high;
    while(i<=j){
    	while(a[i]<=pivot){i++;}
    	while(a[j]>pivot){j--;}
    	if(i<j){
    		swap(a[i],a[j]);
    		i++;
    		j--;
		}
	}
	swap(a[low],a[j]);
	return j;
}
void quicksort(int *a, int low, int high){
	if(low<high){ 
		int pi = partition(a, low, high);
		quicksort(a, low, pi-1);
		quicksort(a, pi+1, high);
	}
}
