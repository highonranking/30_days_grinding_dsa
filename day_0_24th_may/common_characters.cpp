using namespace std;

vector<string> commonCharacters(vector<string> strings) {
  // Write your code here.
  // increase count of char seen in the string, if seen == length ==> append....
  unordered_map<char, int> mpp;
  for(auto s: strings){
    unordered_set<char> uniq;
    for(int i=0; i<s.size(); i++){
      uniq.insert(s[i]);
    }

    for(auto ch: uniq){
      if(!mpp.count(ch)){
        mpp[ch] = 0;
      }
      mpp[ch]++;
    }
  }

  vector<char> a;
  for(auto x: mpp){
    if(x.second == strings.size()){
      a.push_back(x.first);
    }
  }

  
  vector<string> b;

  for(auto x: a){
   b.push_back(string(1, x));
  }
  
  return b;
}
