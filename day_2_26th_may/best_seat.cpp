using namespace std;

int bestSeat(vector<int> seats) {
  // Write your code here.
  int count = 0, maxCount = 0, bestI = -1;
  int i = seats.size()-1;
  while(i>=0){
    if(seats[i] == 0){
      count++;
    }
    else{
      if(count>=maxCount){
        maxCount = count;
        if(count) bestI = i+(count+1)/2;
      }
      count = 0;
    }
    --i;
  }
  return bestI;
}
