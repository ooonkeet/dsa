#include <iostream>
using namespace std;
namespace One{
    int val;
}
namespace Two{
    char val;
}
void functionOne(){
    using namespace One;
    cout<<"Enter the value of val: ";
    cin>>val;
    cout<<"functionOne() "<<endl<<"value of val: "<<val<<endl;
}
void functionTwo(){
    using namespace Two;
    cout<<"\n Enter the value of val: ";
    cin>>val;
    cout<<"functionTwo() "<<endl<<"value of val: "<<val<<endl;
}
int main(){
    functionOne();
    functionTwo();
    return 0;
}