#include<iostream>
using namespace std;
void swap(float fraction[],float profit[],float weight[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(fraction[j]<fraction[j+1]){
                float temp=fraction[j];
                fraction[j]=fraction[j+1];
                fraction[j+1]=temp;

                float temp2=profit[j];
                profit[j]=profit[j+1];
                profit[j+1]=temp2;

                float temp3=weight[j];
                weight[j]=weight[j+1];
                weight[j+1]=temp3;
            }
        }
    }
}
int main(){
    int n,w=15;
    cout<<"enetr size of items";
    cin>>n;
float object[n];
float profit[n];
float weight[n];
float fraction[n];
cout<<"enetr the items id";
for(int i=0;i<n;i++){
cin>>object[i];
}
cout<<"enetr the profit ";
for(int i=0;i<n;i++){
    cin>>profit[i];
}
cout<<"enetr the weight";
for(int i=0;i<n;i++){
    cin>>weight[i];
}
for(int i=0;i<n;i++){
   fraction[i]= profit[i]/weight[i];
}
swap(fraction,profit,weight,n);

for(int i=0;i<n;i++){
    cout<<profit[i]<<"\t";
}
cout<<endl;
for(int i=0;i<n;i++){
cout<<weight[i]<<"\t";
}
cout<<endl;
for(int i=0;i<n;i++){
cout<<fraction[i]<<"\t";
}
float prof=0,remain_weight=0;
int i=0;
while(w>0){
    if(weight[i]<w){
    prof+=profit[i];
    w-=weight[i];
    }
    else{
        prof+=profit[i]*(w/weight[i]);
        w=0;
    }
    i++;
}

cout<<"total profit is "<<prof;
return 0;

}

