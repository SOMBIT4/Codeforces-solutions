#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main ()
{
    int n,x;
    int a[2]={0};
    cin >> n;
    for(int i=1;i<=n;i++)
    {
    	cin >>x;
    	if(x%2==0)
    		a[0]++;
    	else 
    	a[1]++;
    }
    if(a[1]%2==0)
    	cout << n-a[1]<<endl;
    else
    	cout <<a[1]<<endl;
  return 0;
}
