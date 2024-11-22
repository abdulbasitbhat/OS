//My first preemptive logic. Alhamdullilah. This this roundrobin with srtf logic. I havent used the circular queue logic yet
#include<iostream>
using namespace std;

struct Process{
    int id;
    int rbt;
    int value;
};

int main(){
    int n=4;
     Process p[n];
     int total_bt=0;
     int value,index;
    cout<<"hi"<<endl;
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
     cout<<total_bt<<endl;
      int cpu[total_bt];
      int timeSlice=2;
      for(int i=0;i<total_bt;i+timeSlice){                                 //for 26 times. For each 1 sec of cpu
            int min=1000;
              for(int j=0;j<4;j++){                                //for getting the min next bt
                
                  if(p[j].value>=0 && p[j].rbt>0){                //if (process has arrived or is in queue) and (process has some burst time left)
                  if(p[j].rbt<=min){                              //logic for getting min bt for processes that are in ready queue and have some bt left
                      min=p[j].rbt;
                      index=j;                                    //stores index of that process that has lowest bt left.Updated and updated untill process with least bt is stored
                  }
              }
          }
          p[index].rbt=p[index].rbt-1;                        //process with least bt gets its 1 point of bt decreased
          cpu[i]=p[index].id;                                 //process is fed to cpu for 1 sec
          for(int k=0;k<n;k++){                               //now 1 sec has passed so new processes are comming closer to arrival. this is the logic to decrease their negative arrival time. When zero is reached process has arrived
          if(p[k].value<0){
              p[k].value++;
          }
      }
      }
       for(int i=0;i<total_bt;i++){                           //printing the gantt chart
      cout<<cpu[i]<<" ";
    }
    cout<<endl;

}