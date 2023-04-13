#include <iostream>

using namespace std;

int dayso(int n)
{
    if (n==0) return 0;
    if (n==1) return 1;
    if (n%2==0) return dayso(n/2);
    int i = (n-1)/2;
    return dayso (i) + dayso(i+1); 
}

int find(int n)
{
    int s=0, dem=1;
    while( dem <= n )
    {
        if ( s < dayso(dem) ) s = dayso(dem);
        dem++;
    }
    return s;
}
int main()
{
    int t,x;
    cin >> t;
    for(int i=1;i<=t;i++)
    {
        cin >> x;
        cout << find(x) << endl;
    }
    return 0;
}