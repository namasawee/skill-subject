#include<stdio.h>
#include<iostream>
using namespace std;

//int main(){
//int n,k;
//int arr[100];
//cin >> n >> k;
//if(n==1){
//    cout << "1";
//}
//
//for(int i=1;i<=n;i++){
//        arr[i]=i;
//        cout << arr[i];
//
//}
//while(1){
//    if(){
//
//    }
//}
//
//
//}

int survival(int numberpeople, int kill)
{
  if (numberpeople == 1){
    return 1;}
  else
    {


    return (survival(numberpeople - 1, kill) + kill-1) % numberpeople + 1;
    }
}


int main()
{
  int numberpeople ;
  int kill ;
  cin >> numberpeople>>kill;
  cout <<survival(numberpeople, kill);

}
