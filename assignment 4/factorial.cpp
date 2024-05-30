#include <iostream>
using namespace std;

void factorial(int x){
     int fact = 1 ;
     if(x!=0){
     for(int i=2 ;i<=x;i++){
             fact = fact *i;}
     }
     cout<<fact;
}

int main() {
    factorial(34);
}
