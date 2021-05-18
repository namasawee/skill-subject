#include<iostream>
#include<stdio.h>
using namespace std;
string walk;
int a,b,c;
int i=0;
int main(){
	cin >> walk;
	for(i;i<walk.length();i++){ //loop until end walk
		if(walk[i] == 'N'){ //if walk to north
			if(c==4){
				cout <<"RF";
				c=1;
			}
			else if(c==3){
				cout<<"RRF";
				c=1;
			}
			else if(c==2){
				cout <<"RRRF";
				c=1;
			}
			else if(c==1){
				cout <<"F";
				c=1;
			}
			 if(c==0){
				cout <<"F";
				c=1;
			}
		
		}
		
		else if(walk[i] == 'S'){ // if walk to south
			if(c==0){
				cout <<"RRF";
				c=3;
			}
			else if(c==1){
				cout <<"RRF";
				c=3;
				
			}
			else if(c==2){
				cout <<"RF";
				c=3;
				
			}
			else if(c==3){
				cout <<"F";
				c=3;
				
			}
			if(c==4){
				cout <<"RRRF";
				c=3;
				
			}
		
		}// end s
		
		else if(walk[i] == 'W') //walk to west
        {
            if (c == 4)
            {
                cout << "F";
                c = 4;
            }
            else if (c == 3)
            {
                cout << "RF";
                c = 4;
            }
            else if (c == 2)
            {
                cout << "RRF";
                c = 4;
            }
            else if (c == 1)
            {
                cout << "RRRF";
                c = 4;
            }
            if(c == 0)
            {
                cout << "RRRF";
                c = 4;
            }
        }
        else if(walk[i] == 'Z')
        {
            cout << "Z";
            c = 0;
		
	}
	else if(walk[i] == 'E') //walk to east
        {
            if (c == 4)
            {
                cout << "RRF";
                c = 2;
            }
            else if (c == 3)
            {
                cout << "RRRF";
                c = 2;
            }
            else if (c == 2)
            {
                cout << "F";
                c = 2;
            }
            else if (c == 1)
            {
                cout << "RF";
                c = 2;
            }
            if(c == 0)
            {
                cout << "RF";
                c = 2;
            }
        }
	
}
}
