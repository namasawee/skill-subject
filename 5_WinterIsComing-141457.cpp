#include<iostream>
#include<stdio.h> 
using namespace std;

int main(){
	int people , pow;
	int enemy=0;
	int arr[100000];
	cin >> people;
	cin >> pow;
	for(int i=0;i<people;i++){
	
	cin  >> arr[i];
	for(int j=2;j<arr[i];j++){
		if(arr[i]==1){
			enemy++;
			break;
			
		}
		else if(arr[i]%2==0){
			enemy++;
			break;
		}
		else{
			pow++;
			break;
		}
	}
	}
	


	
//	cout << enemy;
//	cout << pow;
	if(pow <=enemy ){
	
	cout <<"NO";
}
	else if(pow>enemy)
	cout << "YES";
	
	else{
		cout << "NO";
	}

}
