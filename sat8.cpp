// 8. Highest Common Factor (HCF):

#include <bits/stdc++.h>
using namespace std;

int hcf(int a, int b){
    while(b!=0){
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;

}

int main(){
   int a, b;
   cin>>a>>b;
   cout<<hcf(a, b)<<endl;
}