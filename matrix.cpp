#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j= 0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    int min = INT_MAX;
    int max = INT_MIN;
    int sum = 0;
    //  for(int i=0; i<n; i++){
    //     for(int j= 0; j<m; i++){
    //        arr[i][j] = arr[j][i];
    //     }
    // }
//     for(int i=0; i<n; i++){
//         for(int j= 0; j<m; i++){
//           if(arr[i][j] > max){
//             max = arr[i][j];
//           }
//          else if(arr[i][j] < min){
//             min = arr[i][j];
//           }
//     }
// }
//   cout<<max<<min<<endl;
for(int i=0; i<n; i++){
        for(int j= 0; j<m; j++){
        sum += arr[i][j];
    }
}
cout<<sum<<endl;
}