#include <iostream>

using namespace std;

void cal(int t){
    int dem=t;
    int x,y,z=0;
    while(z<dem){
        z++;
        y=z*2;
        x=z*5;
        if((z*100 == y*50) && (z*100 == x*20) && (x+y+z == t)){
            cout<<x<<" "<<y<<" "<<z<<endl; return;
        }
        }
        cout<<"-1"<<endl;
}

int main(){
    int n;
    long T;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>T;
        cal(T);
    }
    return 0;
}