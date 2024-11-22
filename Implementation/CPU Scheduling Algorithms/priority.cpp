//We will sort the processes in order of priorities and then simply use fcfs
#include<iostream>
using namespace std;

struct Pr{
      int id;
      int bt;
      int wt;
      int tat;
      int priority;
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
    cout<<"Enter Respective Priorities"<<endl;                //Lesser number higher priority
    for(int i=0;i<n;i++){
       cin>>Process[i].priority; 
    }
    //Sort
    for(int i=0;i<(n-1);i++){
        for(int j=0;j<n-i-1;j++){
            if(Process[j].priority>Process[j+1].priority){
                Pr tempPr=Process[j];
                Process[j]=Process[j+1];
                Process[j+1]=tempPr;
            }
        }
    }
    int incpu[n];
    for(int i=0;i<n;i++){
        incpu[i]=Process[i].id;
    }

    Process[0].wt=0;
    Process[0].tat=Process[0].bt;
    for(int i=1;i<n;i++){
        Process[i].wt=Process[i-1].bt+Process[i-1].wt;
        Process[i].tat=Process[i].bt+Process[i].wt;
    }

    for(int i=0;i<n;i++){
        cout<<"ID: "<<Process[i].id<<"   B.T: "<<Process[i].bt<<"   W.T: "<<Process[i].wt<<"   T.A.T: "<<Process[i].tat<<endl;
    }

    cout<<endl;
    cout<<"\nGant Chart"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<Process[i].bt;j++){
            cout<<Process[i].id<<" ";
        }
    }
    cout<<endl;
}