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
     Process p[5];
     int value;
     int n=5;
     for(int i=0;i<5;i++){
           cout<<"Process "<<i<<" Data:"<<endl;
           cout<<"Enter ID"<<endl;
           cin>>p[i].id;
           cout<<"Enter Burst Time"<<endl;
           cin>>p[i].rbt;
           total_bt=total_bt+p[i].rbt;
           cout<<"Enter Arrival Time"<<endl;
           cin>>value;
           p[i].value=(-value);
     }
     int present_ready_queue[5];
    // int time=0;
    while(total_bt>=0){
     int q=0;
     for(int i=0;i<5;i++){
         if(p[i].value>=0){
             present_ready_queue[q]=p[i].id;
             q++;
         }  
     }
     int k=0;
     int min=1000;
     int min_time_proc;
     for(int i=0;i<n;i++){
         if(present_ready_queue[i].rbt<min){
             min=present_ready_queue[i].rbt;
             min_time_proc=i;
         }
     }
   
    int cpu[total_bt];
    cpu[k]=present_ready_queue[min_time_proc]
    k++;

    for(int i=0;i<5;i++){
        if(p[i].value<0){
            p[i].value=p[i].value+p[i].value;
        }
    }
    total_bt--;
    }
}