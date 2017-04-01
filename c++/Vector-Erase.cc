//https://www.hackerrank.com/challenges/vector-erase

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
    vector <int>v(n);
    for(int i=0;i<n;++i){
        cin>>v[i];
    }
    int x;
    cin>>x;
    v.erase(v.begin()+x-1);//index start with 0
    int a,b;
    cin>>a>>b;
    v.erase(v.begin()+a-1,v.begin()+b-1);//erase the range 
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();++i)
    cout<<v[i]<<" ";
    return 0;
}