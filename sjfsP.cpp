#include<iostream>           //sjfs with arrival time(primitive)
using namespace std;

struct process{
	int id;
	int bt;
	int at;
	int tat;
	int wt;
};

int main(){
	int n,i,j;
	int counter,btsum=0;
	cout<<"enter the number of processes"<<endl;
	cin>>n;
	struct process p[n];
	for(i=0;i<n;i++){
		cout<<"Enter id"<<endl;
		cin>>p[i].id;
		cout<<"enter burst time"<<endl;
		cin>>p[i].bt;
		cout<<"enter arrival time"<<endl;
		cin>>p[i].at;
		btsum=btsum+p[i].bt;
	}
	int ram[100];
    counter=0;
    while(counter<btsum){                 //the processes will end before exceeding total burst time, no matter what kind of scheduling
	
	counter++;
	}       
	
	
	p[0].wt=0;                   //arrival time
	p[0].tat=p[0].bt;
	for(i=1;i<n;i++){	
	    p[i].tat=p[i-1].tat+p[i].bt; 
		p[i].wt=p[i].tat-p[i].bt;
	}
	    cout<<"ID      "<<"Burst Time     "<<"Waiting time      "<<"Turn around time       "<<endl;
	for(i=0;i<n;i++){
		cout<<p[i].id<<"            "<<p[i].bt<<"           "<<p[i].wt<<"            "<<p[i].tat<<endl;
			}
			
	for(i=0;i<n;i++){
		for(j=0;j<p[i].bt;j++){
			cout<<p[i].id;
		}
	}		
}
