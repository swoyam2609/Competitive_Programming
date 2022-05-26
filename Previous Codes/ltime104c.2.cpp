#include <iostream>
using namespace std;
bool solve(int arr1[], int arr2[], int n, int a, int b){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(arr2[j]==0){
				continue;
			}
			if(arr1[i]+a==arr2[j]){
				arr1[i]=0;
				arr2[j]=0;
				break;
			}
		}
	}
	for(int i=0;i<n;i++){
		if(arr1[i]==0){
			continue;
		}
		for(int j=0;j<n;j++){
			if(arr2[j]==0){
				continue;
			}
			if(arr1[i]+b==arr2[j]){
				arr1[i]=0;
				arr2[j]=0;
				break;
			}
		}
	}
	for(int i=0;i<n;i++){
		if(arr1[i]!=0){
			return false;
		}
	}
	return true;
}
int main() {
	// your code goes here
	int n;
	cin>>n;
	int l,a,b;
	for(int i=0;i<n;i++){
		cin>>l>>a>>b;
		int arra[l];
		int arrb[l];
		for(int j=0;j<l;j++){
			cin>>arra[j];
		}
		for(int j=0;j<l;j++){
			cin>>arrb[j];
		}
		if(solve(arra, arrb, l, a, b)){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
	}
	return 0;
}
