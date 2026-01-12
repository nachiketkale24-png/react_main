#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        int y[a];
        for(int i=0;i<a;i++){
            cin>>y[i];
        }
        sort(y,y+a);
        int hash[101]={0};
        for(int i=0;i<a;i++){
            hash[y[i]]++;
        }
        int maxi = 0;
        int temp1 = 0;   
        for(int i=0;i<101;i++){
            temp1 = hash[i];
            int length = 0;
            for(int j=0;j<101;j++){
                if(hash[j]>=temp1){
                    length +=  temp1;               
                }
            }
            maxi = max(maxi,length);
        }
        cout<<maxi<<endl;
    }
}