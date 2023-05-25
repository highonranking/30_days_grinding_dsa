#include <vector>
using namespace std;

int minNumberOfCoinsForChange(int n, vector<int> denoms) {
  // Write your code here.
  vector<int> numCoins(n+1, INT_MAX);
  numCoins[0] = 0;
  int toCom = 0;
  for(int d: denoms){
    for(int amount = 0; amount<numCoins.size(); amount++){
      if(d<=amount){
        if(numCoins[amount-d] == INT_MAX){
          toCom = numCoins[amount-d];
        }
        else{
         toCom = numCoins[amount-d] + 1;

        }
        numCoins[amount] = min(numCoins[amount], toCom);
      }
    }
  }
  return numCoins[n]!=INT_MAX?numCoins[n]:-1;
}
