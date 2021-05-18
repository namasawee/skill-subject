#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int tree;
	int time;
	int durians;
	int eat;
	int max;
	
	cin >> tree >> time;
	int arr[tree];
	for(int i=0;i<tree;i++){ 
		cin >> durians;
		arr[i]=durians; 
	}
	for(int i=0;i<tree;i++){ //find
		if(max<arr[i]){ //find most durians
			max=arr[i];
			cout << max <<endl; 
					
			if(arr[i-1]>arr[i+1]){ //if prev tree have durians more than next tree
				cout << max <<endl;
				max = max+arr[i-1];
				time-=1;
			}
			else if(arr[i+1]>arr[i-1]){ //if next tree more than previous
				cout << max<<endl;
				max = max+arr[i+1];
				time -=1;
			}
			}//if
	
			
	}
	
	
	
	
	cout << max;	
	
	
}
