#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enetr no of coins";
    cin>>n;
    int desire_cost;
    cin>>desire_cost;
    int coin[n];
    for(int i=0;i<n;i++){
      cin>>coin[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(coin[j]<coin[j+1]){
                int temp=coin[j];
                coin[j]=coin[j+1];
                coin[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        while(desire_cost>=coin[i]){
            desire_cost-=coin[i];
            cout<<coin[i]<<"\t";
        }
    }

    return 0;
}
