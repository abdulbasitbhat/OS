//fixed partitioning
//Worst fit
#include<iostream>
#include<algorithm>
using namespace std;


int main(){
	int pr[]={50,60,150,250};               //Process size   //ascending order
	int part[]={40,80,200,300,400};               //Partitions
	reverse(part,part+5);                                    //descending order
/*	for(int i=0;i<5;i++){
		cout<<part[i]<<" ";
	}
	cout<<endl;*/
	int n=4;
	int n2=5;
	int count=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n2;j++){
			if(part[j]>=pr[i]){
				cout<<"Partition "<<part[j]<<" alotted to process "<<pr[i];
				int freg;
				freg=part[j]-pr[i];
				cout<<", Internal Freg "<<freg<<endl;
				part[j]=0;
			//	deletee(j);
				break; 
			}
			else{
				count++;
				if(count>n2){
					cout<<"wait"<<endl;
					break;
				}
			}
		}
	}
}