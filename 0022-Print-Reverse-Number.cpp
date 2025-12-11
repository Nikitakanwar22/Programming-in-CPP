#include<iostream>
using namespace std;

int main(){
     int num;
     cout<<"Enter the number : ";
     cin>>num;
     
     while(num>0){
        int dig = num%10;
        cout<<dig;
        num = num/10;
     }

    return 0;
}