#include <vector>
using namespace std;

int numberOfWaysToMakeChange(int n, vector<int> denoms) {
  // Write your code here.
  vector<int> ways(n+1, 0);
  ways[0] = 1;
  for(int d : denoms){
    for(int i=1; i<n+1; i++){
      if(d<=i){
        ways[i] += ways[i-d];
      }
    }
  }
  return ways[n];
}
#include <vector>
using namespace std;

int numberOfWaysToMakeChange(int n, vector<int> denoms) {
  // Write your code here.
  vector<int> ways(n+1, 0);
  ways[0] = 1;
  for(int d : denoms){
    for(int i=1; i<n+1; i++){
      if(d<=i){
        ways[i] += ways[i-d];
      }
    }
  }
  return ways[n];
}
