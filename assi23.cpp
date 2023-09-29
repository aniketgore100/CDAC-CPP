// 3. Separate out +ve, -ve and 0s

#include <iostream>

using namespace std;

int main() {
   int n;
   cin>>n;
   int nums[n];
   for(int i=0; i<n; i++){
    cin>>nums[i];
   }
    int pos[n];
    int neg[n];
    int zero[n];

    int p_count = 0;
    int n_count = 0;
    int z_count = 0;

    for (int i = 0; i <n ; ++i) {
        int num = nums[i];
        if (num > 0) {
            pos[p_count++] = num;
        } else if (num < 0) {
            neg[n_count++] = num;
        } else {
            zero[z_count++] = num;
        }
    }

    for (int i = 0; i < p_count; ++i) {
        cout << "possitive: " << pos[i] << " ";
    }
    for (int i = 0; i < n_count; ++i) {
        cout << "negative: " << neg[i] << " ";
    }
    for (int i = 0; i < z_count; ++i) {
        cout << "xero: " << zero[i] << " ";
    }
    cout << endl;

    return 0;
}
