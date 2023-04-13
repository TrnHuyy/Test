#include <iostream>

using namespace std;

int main()
{
<<<<<<< HEAD
    cout<<"Ko conflict thi sao";
=======
    cout<<"Hello conflict";
>>>>>>> 5e2684bfc48c7b66268aebd40b3ecef3e78a4f67
    int a[300005] ;
    int n , dem = 0 ;
    cin >> n ;
    for(int i=1 ; i<= n ; i++)
        cin>>a[i];
    for(int i= 1 ; i <=n ; i++)
    {
        for(int j = i+1 ; j <= n ; j++)
        {
            if((j - i + 1) % 2 == 0)
            {
                int mid = (i + j - 1) / 2 ;
                long s = 0 ;
                for(int k = i ; k <= mid ; k++)
                    s += a[k];
                for(int m= mid; m <= j ; m++)
                    s -= a[m];
                if(s == 0) dem++;
            }
        }
    }
    cout << dem ;
    return 0 ;
}
