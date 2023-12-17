#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,M,k;
    cin>>N>>M>>k;
    vector<int> applicant(N),apartment(M);
    for(int i=0;i<N;++i)
        cin>>applicant[i];
    for(int i=0;i<M;++i)
        cin>>apartment[i];
    sort(applicant.begin(),applicant.end());
    sort(apartment.begin(),apartment.end());
    
    int result=0,i=0,j=0;
    while(i<applicant.size() and j<apartment.size())
    {
        int diff=apartment[j]-applicant[i];
        if(abs(diff)<=k)
        {
            ++result;
            ++i,++j;
        }
        else if(diff<k)
        {
            ++j;
        }
        else
        {
            ++i;
        }
    }
    cout<<result;
}