#include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    for (int i = 1; i <= x; i++)
    {
        f*=i;
    }
    return f;
}
int main(){
    int n,r;
    cout<<"enter n:";
    cin>>n;
    cout<<"enter r:";
    cin>>r;
    int a=fact(n);
    int b=fact(r);
    int c=fact(n-r);
    cout<<"Combination is:"<<a/(b*c)<<endl;    
    cout<<"Permutation is:"<<a/c<<endl;    

}