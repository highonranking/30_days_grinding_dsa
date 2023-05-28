
// Method  1 using recursion

using namespace std;

int numberOfWaysToTraverseGraph(int width, int height) {
  // Write your code here.
  if(width == 1 || height == 1) return 1;


  return 
    numberOfWaysToTraverseGraph(width-1, height) + numberOfWaysToTraverseGraph(width, height-1);
}


// Method 2  ==

using namespace std;

int numberOfWaysToTraverseGraph(int width, int height) {
  // Write your code here.
  vector<vector<int>> ans;
  for(int i=0; i<height+1; i++){
    ans.push_back(vector<int>{});
    for(int j=0; j<width+1; j++){
     ans[i].push_back(0); 
    }
  }
  for(int w = 1; w<width+1; w++){
    for(int h=1; h<height+1; h++){
      if(w==1 || h==1){
        ans[h][w] = 1;
      }
      else{
        int left  = ans[h][w-1];
        int  up = ans[h-1][w];
        ans[h][w] = left+up;
      }
    }
  }
  
  return ans[height][width];
}
