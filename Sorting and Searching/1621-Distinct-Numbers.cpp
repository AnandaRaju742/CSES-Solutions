#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, num;
    cin>>N;
    vector<int> arr;
    for(int i=0;i<N;++i)
    {
        cin>>num;
        arr.push_back(num);
    }
    sort(arr.begin(),arr.end());
    arr.erase(unique(arr.begin(),arr.end()),arr.end());
    cout<<arr.size();
}
/*
Lesson: 
Use of unordered_set directly is bad idea since it is prone to collision. 
https://codeforces.com/blog/entry/62393
*/