#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;

int main() {
	int n;
	cin >>n;
	
int x=3;
if(n == 0 or n==1){
	cout << 1;
}


else if(n<=6)
cout << pow(3,n-1);

else
for(int i=7;i<=25;i++){
	
	if(i==n){
	
	 cout <<(pow(3,n-1))-x;
	 break;
}
x=x*4;
}



}
