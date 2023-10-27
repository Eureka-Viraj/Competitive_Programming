#include<bits/stdc++.h>
using namespace std;

void stl_pair(int a, int b){
  //Basic Syntax of the Pair
  pair<int, int> p = {a, b};
  cout << p.first << " " << p.second << endl;
  // nested pair here we are doing pairs inside pair
  pair<int, pair<int, int>> nesP = {a, {b, a+b}};
  cout << nesP.first << " " << nesP.second.first << " " << nesP.second.second;
  // We can also store the pairs inside the array
  pair<int, int> arr[] = {{a,b},{a+b,a-b},{a*b,a/b},{max(a,b), min(a,b)}};
  // trying to iterate each element of the array through the array.
  for(int i=0; i < arr.size(); i++){
    cout << arr[i].first << " ";
    cout << arr[i].second << endl;
  }
}

int main(){
  int a, b;
  cin >> a >> b;
  stl_pair(a,b);
  return 0;
}
