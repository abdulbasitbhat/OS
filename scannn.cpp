#include<iostream>
using namespace std;

int main(){
    int n,i;
    cout<<"No of el"<<endl;
    cin>>n;

    int a[n],b[n],c[n];
    cout<<"Enter El"<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    
    int head;
    cout<<"head"<<endl;
    cin>>head;

    int d;
    cout<<"Dir"<<endl;
    cin>>d;

    //head pos
    int h_pos;
    for(i=0;i<n;i++){
        if(a[i]==head){
            h_pos=i;
        }
    }
    int j=0;
//only 2 scans
int count=0;

    if(d>0){   //go rt
        for(i=h_pos;i<n;i++){
            b[j]=a[i];
            j++;
            count++;
            if(i==n-1){
                d=(-1);
            }
        }
    }
    if(d<0){
          for(i=h_pos-1;i>=0;i--){
            c[j]=a[i];
            j++;
            count++;
             if(i==n-1){
                d=(-1);
            }
        }
    }

    for(i=0;i<n;i++){
        cout<<b[i]<<"  ";
    }
    for(i=0;i<n;i++){
        cout<<c[i]<<"  ";
    }
}

 