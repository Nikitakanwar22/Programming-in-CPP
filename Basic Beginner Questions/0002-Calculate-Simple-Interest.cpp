#include<iostream>
using namespace std;
int main(){
    int t,r,p;
    cout<<"Enter the Time : ";
    cin>>t;
    cout<<"Enter the rate : ";
    cin>>r;
    cout<<"Enter the Principal : ";
    cin>>p;
    int Si= (t*r*p)/100;
    cout<<"Simple interest is : "<<Si; 
    
    return 0;
}