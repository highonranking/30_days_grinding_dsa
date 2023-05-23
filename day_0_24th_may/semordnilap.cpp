
//   Write a function that takes in a list of unique strings and returns a list of
//   semordnilap pairs.

//   A semordnilap pair is defined as a set of different strings where the reverse
//   of one word is the same as the forward version of the other. For example the
//   words "diaper" and "repaid" are a semordnilap pair, as are the words
//   "palindromes" and "semordnilap".

//   The order of the returned pairs and the order of the strings within each pair
//   does not matter.
//

using namespace std;


vector<vector<string>> semordnilap(vector<string> words) {
  // Write your code here.
  unordered_set<string> wordsSet(words.begin(), words.end());
  vector<vector<string>> ans;

  for(string word: words){
    string rword = word;
    reverse(rword.begin(), rword.end());
    if(wordsSet.find(rword) != wordsSet.end() && rword != word){
      ans.push_back({word, rword});
      wordsSet.erase(word);
      wordsSet.erase(rword);

      }
  }
  
  return ans;
}



