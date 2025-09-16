#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int l[n];
    int r[n];
    for(int i=0;i<n;i++){
        cin>>l[i];
    }
     for(int i=0;i<n;i++){
        cin>>r[i];
    }
    int currl=l[0],currr=r[0];
    for(int i=1;i<n;i++){
        if(l[i]<=currr){
            if(r[i]>currr){
                currr=r[i];
            }
            else{
                cout<<"("<<currl<<","<<currr<<")"<<endl;
                currl=l[i];
                currr=r[i];
            }
        }
        cout<<"("<<currl<<","<<currr<<")"<<endl;
    }
    return 0;
}