#include<iostream>
using namespace std;

struct Process{
     int id;
     int rbt;
     int tat;
     int value;
};

int main(){
     int total_bt=0;
     int value;
     int n=4;
     Process p[n];
     
     for(int i=0;i<n;i++){
           cout<<"Process "<<i+1<<" Data:"<<endl;
           cout<<"Enter ID"<<endl;
           cin>>p[i].id;
           cout<<"Enter Burst Time"<<endl;
           cin>>p[i].rbt;
           total_bt=total_bt+p[i].rbt;
           cout<<"Enter Arrival Time"<<endl;
           cin>>value;
           p[i].value=(-value);
     }
     int secTbt=total_bt;
     int cpu[total_bt];
     int present_ready_queue[n];
    // int time=0;
    int q=0;
    while(total_bt>0){
     
     for(int i=0;i<n;i++){
         if(p[i].value>=0){
             present_ready_queue[q]=i;   //present_readyqueue stores index
             q++;
         }  
     }
     int k=0;
     int min=1000;
     int min_time_proc;
     int t;
     for(int i=0;i<q;i++){
        
         t=present_ready_queue[i];
         if(p[t].rbt<min){
             min=p[t].rbt;
             min_time_proc=i;
         }
     }
    p[present_ready_queue[min_time_proc]].rbt=p[present_ready_queue[min_time_proc]].rbt-1;
    
    cpu[k]=p[present_ready_queue[min_time_proc]].id;
    k++;

    for(int i=0;i<n;i++){
        if(p[i].value<0){
            p[i].value=p[i].value+1;
        }
    }
    total_bt--;
    }
    for(int i=0;i<secTbt;i++){
      cout<<cpu[i]<<" ";
    }
    cout<<endl;
}