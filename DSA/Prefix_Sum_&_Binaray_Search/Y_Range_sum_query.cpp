#include <iostream>
#include <vector>
using namespace std;

int main(){

 // q <= 10^5
 // n <= 10^5
 // arr[i] <= 10^9
    
 int n, q; // number of elements and number of queries
 cin >> n >> q;


 vector<long long int> v(n+1); // 1-based indexing
 vector<long long int> prefix_sum (n+1,0); // prefix sum array
 for (int i = 1; i <=n; i++) // input array elements
 {
        cin >> v[i];
        if(i==1){
           prefix_sum[i] = v[i];
       }else{
           prefix_sum[i] = prefix_sum[i - 1] + v[i];
       }
 }
 

  
// test cases
while(q--){
    int l, r; // left and right indices for the range sum query
    cin >> l >> r;
    long long int sum = 0;

    if(l == 1){
    sum = prefix_sum[r];
    }else{
    sum = prefix_sum[r] - prefix_sum[l - 1];
    }
     cout << sum << endl;
    
}

 return 0;
}