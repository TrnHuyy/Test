#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Nhap so phan tu: "; cin>>n;
    int a[50];
    for(int i=1;i<=n;i++)
    {
        cout<<"Nhap phan tu so "<<i<<" ";
        cin>>a[i];
    }
    cout<<"Mang da nhap la: "<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}