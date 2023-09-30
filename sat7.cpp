// 7. Friendly Pair:

#include <bits/stdc++.h>
using namespace std;

int perfectpair(int n){
    int sum = 0;
    for(int i = 1; i<n; i++){
        if(n % i == 0){
            sum += i;
        }
    }
    return sum;
}

int main(){
    int p, q;
    cin>>p>>q;
    int p_sum =  perfectpair(p);
    int q_sum =  perfectpair(q);
    if(p_sum == q && q_sum == p){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}