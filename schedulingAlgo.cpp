#include<iostream>
using namespace std;

class process{
	public:
	int id;
	int bt;
	int at; 
	
	int wt;
	int tat;
	int priority;
};

int main(){
	//fcfs
	cout<<"Enter the number of processes"<<endl;
	int n;
	cin>>n;
	int p[n];
	for(int i=0;i<n;i++){
    struct process p[i];
	cout<<"Enter ID"<<endl;
	cin>>p[i].id;
	cout<<"Enter Burst Time"<<endl;
	cin>>p[i].bt;
	cout<<"Enter Arrival Time"<<endl;
	cin>>p[i].at;
}

	for(int i=0;i<(n-1);i++){
		if(p[i].bt>p[i+1].bt){
			int temp;
			temp=p[i];
			p[i]=p[i+1];
			p[i+1]=p[i];
		}
	}
	cout<<"Order:"<<endl;
	for(int i=0;i<n;i++){
		cout<<p[i].id<<endl;
	}
		
	
}
