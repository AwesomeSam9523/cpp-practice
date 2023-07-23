#include<iostream>
using namespace std;

int main() {
    int n,d,evensum=0,oddsum=0;
    cin>>n; // n = 1233
    while(n>0){
        d=n%10; // d = 3
        if (d%2==0){ // d%2 => 1. 1 == 0 -> false
            evensum=evensum+d;
        }
        else{
            oddsum=oddsum+d; // 0 + 3 = 3 | 3 + 3 = 6
        }
        n=n/10; // n = 124
    }
    cout<<evensum<<" "<<oddsum<<endl;
}