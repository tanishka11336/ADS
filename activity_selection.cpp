#include<iostream>
using namespace std;
void sort(int a[],int b[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[i]>a[j]){
           int temp=a[i];
           a[i]=a[j];
           a[j]=temp;

           int temp2=b[i];
           b[i]=b[j];
           b[j]=temp;
        }
    }
}
}
int main(){
    int n;
    cout<<"enetr the value of n ";
    cin>>n;
    int start[n];
    int end[n];
    cout<<"enetr the start array";
    for(int i=0;i<n;i++){
        cin>>start[i];
    }
    for(int i=0;i<n;i++){
    cin>>end[i];
    }
    int count[n];
    for(int i=0;i<n;i++){
        count[i]=-1;
    }
    int lastindex=-1;
    for(int i=0;i<n;i++){
        if(start[i]>lastindex){
        cout<<i<<"\t";
        lastindex=end[i];
        }
    }

    return 0;
} 