#include<bits/stdc++.h>
using namespace std;

int findMin(vector<int>vec , int i,int current){
    int minval=current;
    for(int j=0;j<=i;j++){
        if(vec[j]<minval){
              minval=vec[j];
        }
    }
    if(minval==current) minval=-1;
    return minval;
}
vector<int>findMinHeight(vector<int>&vec){
    vector<int> res;
    int n=vec.size();
    for(int i=0;i<n;++i){
    int minval=findMin(vec,i,vec[i]);
    res.push_back(minval);
    }
    return res;
}
int main(){
    vector<int> vec{5,6,4,7,2,1};
    vector<int> res=findMinHeight(vec);
    for(auto it:res){
        cout<<it<<" ";
    }
    return 0;
}