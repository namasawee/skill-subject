#include<iostream>
#include<stdio.h> 
using namespace std;

int main(){
	int climb,drop,wall,height;
		int sum=0;
		int x=0;
		int keepclam;
				


	cin >> climb >> drop >>wall;
	keepclam =climb;
	
	for(int i=0;i<wall;i++){
		cin >> height;
	

	if(climb >= height){
		sum +=1; //climb more than wall upper bound
	}
else if(climb <height)	{

	while(climb < height){ // climb less than bound
		sum =sum+1;
		x = climb -drop;
		climb = keepclam+x;
}
sum+=1;
climb=keepclam;	
}

}
	cout <<sum;
	
}
