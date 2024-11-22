#include<iostream>
using namespace std;

struct Pr{
   int id;
   int ibt;   //initial bt
   int bt;
   int wt;
   int tat;
};

int main(){
    int timeSlice=4;
    int n;
    int totalBt=0;
   
    cout<<"Enter the number of processes"<<endl;
    cin>>n;
    Pr Process[n];
    cout<<"Enter Process IDs"<<endl;
    for(int i=0;i<n;i++){
        cin>>Process[i].id;
    }
    cout<<"Enter Respective Burst Times"<<endl;
    for(int i=0;i<n;i++){
       cin>>Process[i].bt;
       Process[i].ibt=Process[i].bt; 
       totalBt=totalBt+Process[i].bt;
    }
    int k=0;
    int y=(totalBt/timeSlice+1);
    int roundRobin[y];
    for(int j=0;j<y;j++){
        for(int i=0;i<n;i++){
            if(Process[i].bt>0){
                Process[i].bt=Process[i].bt-timeSlice;
                roundRobin[k]=Process[i].id;
                k++;
            }
        }
    }
    for(int i=0;i<y;i++){
        cout<<roundRobin[i]<<" ";
    }
    cout<<endl;
    
    for(int i=0;i<y;i++){         //for processes
        for(int j=0;j<y;j++){
            if(roundRobin[j]==Process[i].id){
                Process[i].wt=(j)*timeSlice;
            }
        }
    }

     for(int i=0;i<y;i++){         //for processes
        for(int j=y;j>=0;j--){
            if(roundRobin[j]==Process[i].id){
                Process[i].tat=(j)*timeSlice;
            }
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<"Process Id: "<<Process[i].id<<"    B.T: "<<Process[i].ibt<<"    W.T: "<<Process[i].wt<<"    T.A.T: "<<Process[i].tat<<endl;
    }
    cout<<endl;
}