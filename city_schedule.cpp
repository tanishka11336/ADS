#include<iostream>
using namespace std;
int main(){
    int m,n,min_ele=0,sum=0;
    int a[10][10];
    cout<<"enetr the no of people ";
    cin>>m;
    cout<<"enetr the no of cities";
    cin>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int j=0;
    for(int i=0;i<m;i++){
        
           if(a[i][j]<a[i][j+1]){
            min_ele=a[i][j];
        }
        else{
            min_ele=a[i][j+1];
        }
        cout<<min_ele<<"\t";
        sum+=min_ele;
    }

    cout<<sum<<endl;
    return 0;
}