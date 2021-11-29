//SJFS np
#include<iostream>
using namespace std;
int main() {
	int n,bt[20],wt[20],tat[20],i,j;
	cout<<"Enter total number of processes:"<<endl;
	cin>>n;
	cout<<"nEnter Process Burst Times"<<endl;
	for (i=0;i<n;i++) {
	//	cout<<"P["<<i+1<<"]:"<<endl;
		cin>>bt[i];
	}
	//sort
	for(i=0;i<(n);i++){
		for(int j=0;j<(n-i);j++){
		if(bt[i]>bt[i+1]){
			int temp=bt[i];
			bt[i]=bt[i+1];
			bt[i+1]=temp;
		}
	}
	}
	for(int i=0;i<n;i++){
		cout<<bt[i]<<endl;
	}
	
	wt[0]=0;
                                                    
	//calculating waiting time                      	//waiting time for first process is 0
	for (i=1;i<n;i++) {
		wt[i]=0;
		for (j=0;j<i;j++)
		            wt[i]=wt[i]+bt[j];
	}
	cout<<"Process Burst Timet    ,Waiting Time ,      Turnaround Time";
	//calculating turnaround time
	for (i=0;i<n;i++) {
		tat[i]=bt[i]+wt[i];
	//	cout<<"P["<<i+1<<"]"<<endl;
	cout<<endl;
		cout<<"Birst Time "<<bt[i]<<"    Waiting Time "<<wt[i]<<"  Turn around Time    "<<tat[i]<<endl;
	}

}
