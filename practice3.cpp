#include<iostream>
#include<stack>
using namespace std;

int main(){
	int a[] = {2,3,4,5};
	stack<int> r;
	// if(r.top() == a[0]){
	// 	cout<<"TOp";
	// }
	// else{
	// 	cout<<"NOt top";
	// }
	cout<<r.empty();
	// for(int i=0;i<4;i++){
	// 	r.push(a[i]);
	// }
	// int i = 0;
	// while(!r.empty()){
	// 	a[i++] = r.top();
	// 	r.pop();
	// }
	// for(int i=0;i<4;i++){
	// 	cout<<a[i]<<" ";
	// }
	return 0;
}