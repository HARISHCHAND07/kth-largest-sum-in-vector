#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int getkthlargest(vector<int>v,int k){
    vector<int> sumstore;
    int n=v.size();
    
        int sum=0;
        for(int j=0;j<n;j++){
            sum=sum+v[j];
            sumstore.push_back(sum);
        }
    
    sort(sumstore.begin(),sumstore.end());
    return sumstore[sumstore.size()-k];//--------------------------n-index------------
}
int main(){
    vector<int>v;
    v.push_back(4);
    v.push_back(4);
    v.push_back(4);
    v.push_back(4);
    cout<<"enter the place largest u want=";
    int k;
    cin>>k;
    int g=getkthlargest(v,k);
    cout<<"sum is "<<g<<endl;
    return 0;
}