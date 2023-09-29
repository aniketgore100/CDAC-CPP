// 9. Calculate sum of Fibonacci series up to n terms
#include <bits/stdc++.h>
using namespace std;
int main()

  {  
       int n, n1=0, n2=1,n3,i, sum = 1;   
       cin>>n; 
        for(i=2;i<n;i++){    
        n3=n1+n2;     
        n1=n2;
        n2=n3;
        sum += n3; 
        }   
        cout<<sum<<endl;
        return 0;
}  