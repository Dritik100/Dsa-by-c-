//Find factorial number
#include<iostream>
using namespace std;
long long int fact(int n){
    long long int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}

int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    long long int ans=fact(n);
    cout<<"Factorial is:"<<ans<<endl;
   return 0;
} 
