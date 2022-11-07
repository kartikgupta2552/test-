#include<iostream>
// #include<vector>
using namespace std;
void print(int *a,int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}cout<<endl;
}

void merge(int *a,int s,int e){
	int m = s+(e-s)/2;
	int len1 = m-s+1;
	int len2 = e-m;
	int* first = new int[len1];
	int* second= new int[len2];
	int mainIndex = s;
	for(int i=0;i<len1;i++){
		first[i] = a[mainIndex++];
	}
	mainIndex = m+1;
	for(int i=0;i<len2;i++){
		second[i]= a[mainIndex++];
	}
	mainIndex = s;
	int ind1 = 0 ,ind2 =0;
	while(ind1<len1 && ind2<len2){
		if(first[ind1]<second[ind2]){
			a[mainIndex++] = first[ind1++];
		}
		else{
			a[mainIndex++] = second[ind2++];
		}
	}
	while(ind1<len1){
			a[mainIndex++] = first[ind1++];
	}
	while(ind2<len2){
			a[mainIndex++] = second[ind2++];
	}
	delete []first;
	delete []second;
}

void mergeSort(int *a,int s,int e){
	if(s>=e)
	    return ;
	int m = s+(e-s)/2;
	mergeSort(a,s,m);
	mergeSort(a,m+1,e);
	merge(a,s,e);
}

int main(){
	int a[] = {1,2,3,4,5};
	// int a[] = {6,3,7,4,2};
	int n = 5;
	mergeSort(a,0,n-1);
	print(a,n);
    return 0;
}