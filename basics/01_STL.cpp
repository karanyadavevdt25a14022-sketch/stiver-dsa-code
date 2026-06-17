#include <bits/stdc++.h>
using namespace std;
int main() { 
    //pair 
pair<int,int>p;
cin>>p.first >>p.second;
cout<<p.first<<" "<<p.second;

//nested pair

pair<int,pair<int,int>>pr={1,{2,3}};
cout<<pr.second.second<<endl;


//vector : not size bounded like array 

vector<int>v;
v.push_back(1); //push element at the end
v.push_back(2);
v.push_back(3);
v.push_back(4);
v.push_back(5);

v.front();//give first element

v.back(); //give last element 
v.clear();//clear all elements

//iterators : points to the memeory where element is lying

//declaration : 
vector<int>::iterator it=v.begin();  //it points to the first element 

//also vector<int>:: iterator can be used as auto 

//treaversel in the vector and print elements

//1.traditional ways

for(vector<int>::iterator it=v.begin();it!=v.end();it++){
    cout<<*(it)<<" ";
}
//2. mordern way reccomended 
for(auto it:v){
    cout<<it<<" ";
}

// deletion in vector 

v.erase(v.begin()); //erase first element;

v.erase(v.begin()+2,v.begin()+4); //remove the elements {3,4,5};

//list 

list<int>lt;

//insertion use push_back recommended or , emplace_back,
lt.push_back(1);
lt.push_back(2);
lt.push_back(3);  // insert at the end 
lt.push_back(4); 
lt.push_back(5);

lt.push_front(0); //insert at front 

//rest are same as vector , deletion 
lt.erase(lt.begin());//remove the first element

// traversal and print
for(auto it:lt){
    cout<<it<<" ";
}

//Dequeue

deque<int>dq;

//insertion use push_back recommended or , emplace_back,
dq.push_back(1);
dq.push_back(2);
dq.push_back(3);  // insert at the end 
dq.push_back(4); 
dq.push_back(5);



dq.push_front(0); //insert at front 


dq.pop_back();//remove the last element
dq.pop_front();//remove from the fornt


// traversal and print
for(auto it:dq){
    cout<<it<<" ";
}

//stack : LIFO
stack<int>st;
st.push(1); //{1}
st.push(2); //{2,1}

st.pop(); //{1} 2 removed

st.top(); //give the top element recent element
st.size(); //give the size of the stack
st.empty(); //give 0 or 1 

//queue :FIFO

queue<int>q;

q.push(1); //{1}
q.push(2); //{1,2}
q.push(3); //{1,2,3}
q.push(4);  //{1,2,3,4}

q.back(); //give the most recent element

q.pop(); //remove the first inserted element 1 in this case


//priority queue  : largest stay on top or we can say decending order
priority_queue<int>q;
q.push(100); // {100}
q.push(10); //{100,10}
q.push(20);  //{100,20,10}
 
q.pop(); //remove the top element or largest in the queue

//setsc: stored in sorted way and only unique elemets
//time complexity logn, insertion deletion evertything
set<int>s;
s.insert(1);//{1}
s.insert(2);//{1,2}
s.insert(3);//{1,2,3}
s.insert(1);//{1,2,3}


// traversal

for(auto x:s){
    cout<<x<<" ";
}

//MUltisets : every things same abut the mutiple elemets are allowed in sorder way
//unorderdsets: unique but not in sorted format

//maps : key-value pair data type,uniqe key with data pair in sorted order of keys not

map<int,int>mpp;
mpp[1]=10; //{1,10},key is 1 and value is 10
mpp.insert({2, 20});  //{{1,10},{2,20}} 
mpp.emplace(3,30); //{{1,10},{2,20},{3,30}} 

//traversal same as  vector;

//mutimap : same key allowed , sorted order of keys 
//unordersmap: uniqe but not sorted order of keys 









}