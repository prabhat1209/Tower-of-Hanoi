#include <iostream>
using namespace std;

void TOH(int n,int A,int B,int C){
    if(n>0){
        TOH(n-1,A,C,B);
        cout<<"("<<A<<","<<C<<")"<<endl;
        TOH(n-1,B,A,C);
    }
}

int main()
{
    int n;
    cout<<"Enter the no. of disk to be transfer from source to destination : ";
    cin>>n;
    cout<<"Path followed by the disks is as follows : ";
    TOH(n,1,2,3);
    return 0;
}