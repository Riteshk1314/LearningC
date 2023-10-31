#include <iostream>
using namespace std;

void swap(int x){
     fact = 1 ;
     if(x!=0){
     for(int i=2 ;i<=x;i++){
             fact = fact *i;}
     }
     cout<<fact;
}

int main() {
    int a = 10, b = 20;
    swap(a, b);
    return 0;
}
