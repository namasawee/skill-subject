#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

int sale,limit,ticket;
int arr[100];
int maxx=0;
int main(){
		cin >> sale >> limit;
		for(int i=0;i<sale;i++){
			cin >> ticket;
			arr[i]=ticket;
		}
		
	//for(int a=0;a<limit;a++){
		
		for(int i=0;i<sale;i++){
			if(maxx<arr[i]){
				maxx=arr[i];
				//cout << maxx <<endl;
			}
			//arr[i] -=1;
			
		}	
//	}
		for(int i=0;i<limit;i++){
			maxx=maxx+(maxx-1);
		}
	
		
		
		cout << maxx;
}
