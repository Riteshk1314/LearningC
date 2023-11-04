//Tower of Hanoi Program

#include<iostream>
using namespace std;

void move(int N, char src, char temp, char dest)
{
    if(N==1)
    {
        cout<<"Move Disk 1 from "<<src<<" to "<<dest<<endl;
    }
    
    else
    {
        move(N-1,src,dest,temp);
        cout<<"Move Disk "<<N<<" from "<<src<<" to "<<dest<<endl;
        move(N-1,temp,src,dest);
    }
}

int main()
{
    move(10,'A','B','C');
}