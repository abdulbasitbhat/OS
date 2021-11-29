//SSTF
//Using STL
#include<iostream>
#include<algorithm>
using namespace std;

int absol(int);
//int bubble_sort(int *);
int deletee(int*,int,int);

int main(){
int n,i,head,j;
cout<<"Enter number of Queue Elements:"<<endl;
cin>>n;
int a[n];
int b[n];
for(i=0;i<n;i++){
cin>>a[i];
}
sort(a,a+n);
cout<<"Enter initial Head"<<endl;
cin>>head;
for(i=0;i<n;i++){
if(a[i]==head){
j=i;
break;
}
}

for(i=0;i<n;i++){
    cout<<a[i]<<"  ";
}
cout<<endl;
b[0]=a[j];
head=a[j];
int k; 
 k=n;
  
for(i=1;i<n;i++){
if(absol(head-a[j+1])<=absol(head-a[j-1])){   //we need to delete previous term
    head=a[j+1];
    b[i]=a[j+1];
  deletee(a,j,k);
   
    k--;
    j=j+1;
    
}
else{
    head=a[j-1];
    b[i]=a[j-1];
    //k=n;
    deletee(a,j,k);
    k--;
    j=j-1;
}
}

for(i=0;i<n;i++){
    cout<<b[i]<<"  ";
}
/*for(i=1;i<n;i++){

if(  absol(a[j+1]-a[j]) < absol(a[j]-a[j-1])   ){  
b[i]=a[j+1];
j=j+1;
}
else{
b[i]=a[j-1];
j=j-1;
}
}
for(i=0;i<n;i++){
cout<<b[i]<<"  ";
}
cout<<endl;*/
}

int absol(int c){
if(c<0){
return (-c);
}
else
return c;
}

int deletee(int a[],int index,int size){
    for(int i=index;i<size;i++){
    a[i]=a[i+1];
    }
}
/*int sort(int x[],int n){
int k,m;
for(k=0;k<n;k++){
if(a)
}
}*/