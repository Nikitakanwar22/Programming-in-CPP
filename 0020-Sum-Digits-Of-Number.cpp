#include<iostream>
using namespace std;

int main(){
     int num,sum=0;
     cout<<"Enter the number : ";
     cin>>num;
     
     while(num>0){
        int dig = num%10;
        num = num/10;
         sum+=dig;
     }
     cout<<"Sum of digits is : "<<sum;

    return 0;
}