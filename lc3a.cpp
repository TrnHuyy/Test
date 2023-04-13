#include <iostream>

using namespace std;

int* find(string s){
    int* f= new int [256];
    for(int i=0;i<256;i++) f[i]=0;
    for(int i=0;char c=s[i] ;i++){
        ++f[c];
    }
    return f;
}

void cal(string s1, string s2){
    int* p1 = find(s1);
    int* p2 = find(s2);
    int check=0;
    for(int i=0;i<256;i++){
        if(p1[i] > p2[i]) { check =0; break; }
        if(p1[i] < p2[i]) check += p2[i]- p1[i];
    }
    if(check == 0) cout<<"IMPOSSIBLE"<<endl;
    else cout<<check<<endl;
}
int main(){
    int n;
    string s1,s2;
    //const char *i= &s1 ; const char* p = &s2;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s1;
        cin>>s2;
        cal(s1,s2);
    }
    return 0;

}

