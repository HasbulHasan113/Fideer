#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> a, pair<int,int> b){
    if(a.first==b.first){
        return a.second<b.second;
    }
    return a.first>b.first;
}

int main(){
    long long n,m;
    cin>>n;

    vector<pair<int,int>>arr;

    for(int i=0; i<n; i++){
        int sum=0;
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        sum=a+b+c+d;
        arr.push_back(make_pair(sum,i+1));
    }

    sort(arr.begin(),arr.end(),compare);

    for(int i=0; i<n; i++){
        if(arr[i].second==1){
            cout<<i+1<<endl;
            break;
        }
    }
}