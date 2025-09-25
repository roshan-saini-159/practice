#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n==0 || n==1)
        return false;

    for(int i=2;i<n;i++){
        if(n%2 != 0)
            return false;
        
    }
    return true;

}

int main(){

   int a = 12;
   bool primeCheck = isPrime(a);

   if(primeCheck){
        cout<<"Given Number is Prime"<<endl;
   } else{
        cout<<"Given Number is Not Prime"<<endl;
   }
    

    return 0;
}