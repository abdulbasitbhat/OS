#include<iostream>           //sjfs assuming same arrival time
using namespace std;

int sort(struct process p[],int n,int burstTime);                   //..

struct process{                                                     //..
	int id;
	int bt;
	int at;
	int rt;
	int tat;
	int wt;
};


int main(){
	int n,i,j;	
	int totalBurst=0;
	int burstTime=0;
	struct process temp;
	cout<<"enter the number of processes"<<endl;
	cin>>n;
	struct process p[n];
	for(i=0;i<n;i++){                                               //..
		cout<<"Enter id"<<endl;
		cin>>p[i].id;
		cout<<"enter burst time"<<endl;
		cin>>p[i].bt;
		cout<<"enter arrival time"<<endl;
		cin>>p[i].at;
		totalBurst=totalBurst+p[i].bt;
	}
//..	cout<<totalBurst<<endl;      
	
	
	for(i=0;i<n;i++){
		p[i].rt=p[i].bt;
	}
	sort(p,n,burstTime);
	
	p[0].wt=0;                   //arrival time
	p[0].tat=p[0].bt;
	for(i=1;i<n;i++){
	sort(p,n,burstTime);
	   	
	//  p[i].tat=p[i-1].tat+p[i].bt; 
	//	p[i].wt=p[i].tat-p[i].bt;
		p[i].bt=p[i].bt-1;
		burstTime++;
	}
	    cout<<"ID      "<<"Burst Time     "<<"Waiting time      "<<"Turn around time       "<<endl;
	for(i=0;i<n;i++){
		cout<<p[i].id<<"            "<<p[i].bt<<"           "<<p[i].wt<<"            "<<p[i].tat<<endl;
			}
			
	for(i=0;i<burstTime;i++){
		for(j=0;j<p[i].bt;j++){
			cout<<p[i].id;
		}
	}		
}

int sort(struct process p[],int n,int burstTime){
	int i=0,j=0;
	struct process temp;
	while(k<n){
 	if(p[i].at==burstTime){
	for(i=0;i<(n);i++){
	
		for(j=0;j<(n-i);j++){
		if((p[j-1].bt)>(p[j].bt)){
		temp=p[j-1];
		p[j-1]=p[j];
		p[j]=temp;	
		}
	}
}
}
}
}
