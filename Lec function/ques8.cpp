#include<iostream>
using namespace std;

bool checkPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
        return true;
    }
}
    
int main(){
    bool prime=checkPrime(12);
    if(prime){
        cout<<"It is prime"<<endl;
    }
    else{
        cout<<"It is not prime"<<endl;
    }
    
   return 0;
}