//Wap to calculate bio where bio=n! /(r!*(n-r)!)
//r,n are natural numbers.
//Use functions bio ()
#include <iostream>
using namespace std;
// int fact(int no)
// {
// 	int product=1,i;
// 	for (i=1;i<=no;i++)
// 	  {
// 	  	 product*=i;
// 	  }
// 	return product;
// }
//  float bio(int n,int r)
//  {
//  	//bio=n! /(r!*(n-r)!)
//  	float ans=(float)fact(n)/(fact(r)*fact(n-r));
//  	return ans;
//  }

// int pow(int x, int n){
//    if(n==1)
//    return 1;
//    else 
//    return x*x*x;
//    pow(x, n-1);
    
// }

// int gcd(int a, int b){
//     if(a%b == 0)
//     return b;
//     else{
//        return gcd(a, a%b);
//     }
// }
int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int main()
{
	// int n,r;
	// cout<<"Enter n and r:\n";
	// cin>>n>>r;
	// cout<<"Bio is:"<<bio(n,r);
    // int a,b,c,d;
    // cin>> a>>b>>c>>d;
    // // int min = minimum(a,b);
    // // int min2 = minimum(c,d);
    // // int result = minimum(min, min2);
    // cout<<result<<endl;
    // cout<<minimum(minimum(a,b), minimum(c,d))<<endl;
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
}