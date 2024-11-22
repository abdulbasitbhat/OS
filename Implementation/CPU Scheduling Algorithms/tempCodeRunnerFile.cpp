#include<iostream>
using namespace std;

struct Pr{
      int id;
      int bt;
      int wt;
      int tat;
};

int main(){
    int n;
    cout<<"Enter the number of processes"<<endl;
    cin>>n;
    Pr Process[n];
    cout<<"Enter Process IDs"<<endl;
    for(int i=0;i<n;i++){
        cin>>Process[i].id;
    }
    cout<<"Enter Respective Birst Times"<<endl;
    for(int i=0;i<n;i++){
       cin>>Process[i].bt; 
    }

    int incpu[n];
    for(int i=0;i<n;i++){
        incpu[i]=Process[i].id;
    }

    Process[0].wt=0;
    for(int i=1;i<n;i++){
        Process[i].wt=Process[i-1].bt+Process[i-1].wt;
        Process[i].tat=Process[i].bt+Process[i].wt;
    }

    for(int i=0;i<n;i++){
        cout<<"ID: "<<Process[i].id<<"   B.T: "<<Process[i].bt<<"   W.T: "<<Process[i].wt<<"   T.A.T: "<<Process[i].tat<<endl;
    }
}