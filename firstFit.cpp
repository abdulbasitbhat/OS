//fixed partitioning
//first fit
#include<iostream>
using namespace std;


int main(){
	int pr[]={50,150,60,250};               //Process size      //in order of first come
	int part[]={80,40,200,400,300};               //Partitions   //sorted , so best fit
	int n=4;
	int n2=5;
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
		}
	}
}