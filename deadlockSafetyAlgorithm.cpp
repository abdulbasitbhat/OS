#include<iostream>
using namespace std;
#define res 3
struct process{
	int id;
	int ava[res];
	int max[res];
	int alloc[res];
	int need[res];
};

int main(){
	int n,i=0,j=0;
	cout<<"Enter the no. of processes:"<<endl;
	cin>>n;
	struct process p[n];
	for(i=0;i<n;i++){
	cout<<"Enter Id"<<endl;
	cin>>p[i].id;
	cout<<"Enter the max instances reqd by process of resources A , B and C"<<endl;
	for(j=0;j<res;j++){
		cin>>p[i].max[j];
	}
	cout<<"Enter the allocated instances of resources A , B , C"<<endl;
	for(j=0;j<res;j++){
		cin>>p[i].alloc[j];
	}

}
int A[n],B[n],C[n];
for(i=0;i<res;i++){                //3 res
	for(j=0;j<n;j++){           //processes
		A[n]=A[n]+p[j].alloc[0];
		B[n]=B[n]+p[j].alloc[1];
		C[n]=C[n]+p[j].alloc[2];
	}
}
cout<<"Id      "<<"Allocation    "<<"      Max"<<"     Available"<<endl;
for(i=0;i<n;i++){
	cout<<p[i].id<<"      ";
	for(j=0;j<res;j++){
		cout<<p[i].alloc[j]<<"  ";
	//	cout<<"       "<<p[i].max[j]<<"   ";
	}
	for(j=0;j<res;j++){
		cout<<" ";
		cout<<p[i].max[j]<<" ";
	}
	cout<<endl;
	//available

}
    	cout<<A[0];
}
