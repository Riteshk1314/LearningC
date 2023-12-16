#include <iostream>
using namespace std;

int hcff(int x,int y){
    int hcf;
    if(x>=y){
        for(int i=1; i<=x;i++){
            if(x%i==0 && y%i==0){
                hcf=i;
            }
        }

    }
    else if(y>x){
        for(int i=1; i<=x;i++){
            if(x%i==0 && y%i==0){
                 hcf=i;
            }
        }

    }
    return hcf;
}

int main() {
    int HCF=hcff(10,130);
    cout<<HCF;
    return 0;
}
