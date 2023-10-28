#include<bits/stdc++.h>
using namespace std;

void stl_pair(int a, int b){
  //Basic Syntax of the Pair
  pair<int, int> p = {a, b};
  cout << p.first << " " << p.second << endl;
  // nested pair Here we are doing pairs inside pair
  pair<int, pair<int, int>> nesP = {a, {b, a+b}};
  cout << nesP.first << " " << nesP.second.first << " " << nesP.second.second << endl;
  // We can also store the pairs inside the array
  pair<int, int> arr[] = {{a,b},{a+b,a-b},{a*b,a/b},{max(a,b), min(a,b)}};
  // trying to iterate each element of the array through the array.
  for(int i=0; i < arr.size(); i++){
    cout << arr[i].first << " ";
    cout << arr[i].second << endl;
  }
}

void stl_vector(int a, int b){
  vector<int> v;// declared vector is dynamic in nature and when we don't know the size of the array then we use vector!
  v.push_back(1);//{1} pushed back 1 element in vector v
  v.emplace_back(2);//{1,2} emplace back(similar to push_back) but it dynamically increases the size & it is faster than push_back inserts 2 at the back
  vector<int> v1(5,100); // -> It will be storing {100, 100, 100, 100, 100}
  vector<int> v2(5); // ->vector container of size 5 with garbage value
  // now if we want the vector container v1 to copied in new created vector v3 then 
  vector<int> v3(v1); // it simply copies the vector v1 and paste it in v3;
  //How to access the element in the vector
  cout << v[0] << " " << v.at(0); // {1 2} as a output.

  /*Iterators VIMP topic: Iterators are used in programming for several important reasons, primarily in the context of working with 
  data structures and containers like arrays, vectors, lists, maps, and more
  */
  vector<int> :: iterator it = v.begin(); // now here v.begin() it is pointing to the address/memory of the 0th index of vector.
  it++;
  cout << *(it); // here * pointers concept is used to get the actual stored values 
  vector<int> v4(4,10);
  cout<< v4.back(); // suppose {10,20,30,40} so it will be printing the 40;
  // different ways to represent iterator
  // 1st way 
  for(vector<int> :: iterator cy = v.begin(); cy!=v.end(); cy++){
    cout << *(cy) << " ";
  }
  // so for vector<int> :: iterator cy --> we can write auto cy;
  // 2nd way
  for(auto cy - v.begin(); cy!=v.end(); cy++){
    cout<< *(cy) << " "; 
  }
  // 3rd way
  for(auto cy : v){
    cout << cy << " ";
  }
  v.erase(v.begin()+1) // 2nd element will be deleted
  v.erase(v.begin()+2, v.begin()+4) // so here 3rd and 4th element will be deleted. 
// note that: [Start, End) -> not included. let's take an example v = {10,20,30,40,50} v.erase(v.begin()+2, v.begin()+4) 
    // 30 & 40 elements will be deleted, so we include Start but we don't closely include End
  // insert function
  vector<int> v5(2,100); // {100,100}
  v5.insert(v5.begin(), 300); // {300,100,100}
  v5.insert(v5.begin()+1, 2,10); // {300,10,10,100,100}
  //What if you have a vector & you want to insert that vector into some other vector?
  vector<int> v6(2,50); //{50,50}
  v5.insert(v5.begin(),v6.begin(),v6.end()); // {50,50,300,10,10,100,100}
  // pop back
  v5.pop_back(); // removes the last elements
  v5.swaps(v6);
  v5.clear(); // erases the entire vector.
}

void stl_list();

void stl_deque();

void stl_stack();

int main(){
  int a, b;
  cin >> a >> b;
  stl_pair(a,b);
  return 0;
}
