#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enetr no of candies";
    cin>>n;
  
    int a[n],score[n],candy[n];
      for(int i=0;i<n;i++){
        cin>>score[i];
      }
      for(int i=0;i<n;i++){
        candy[i]=1;
      }
    for(int i=1;i<n;i++){
        if(score[i]>score[i-1]){
            candy[i]=candy[i-1]+1;
        }
    }
       for(int i=n-2;i>=0;i--){
        if(score[i]>score[i+1] && candy[i]<=candy[i+1]){
            candy[i]=candy[i+1]+1;
        }
    }
    for(int i=0;i<n;i++){
       sum+=candy[i];
}
cout<<"the sum is "<<sum<<endl;
return 0;
}