#include <stdio.h>
#include <iostream>
using namespace std;
int main() {
    int n=0, m=0, k=0, sum=0, chk=0;
    cin>>n>>m>>k;
    if(k<=n) {
        cout<<k;
        return 0;
    }
    chk=n;
    for(int walk=1; walk<=k; walk++) {
        //walk++;
        sum++;
        if(walk==chk) {
            walk=walk-m;
            sum=sum+m;
            chk=chk+n;
        }

    }
    cout<<sum<<endl;
}
