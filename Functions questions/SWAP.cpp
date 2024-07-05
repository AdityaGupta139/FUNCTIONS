#include<iostream>
using namespace std;
void swap(int& x,int& y){
    x+=y;
    y=x-y;
    x=x-y;
    
}
int main(){
    int x,y;
    cin>>x;
    cin>>y;
    swap(x,y);
    cout<<x<<endl<<y;
}
