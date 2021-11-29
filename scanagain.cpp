//CScan
//Using STL
#include<iostream>
#include<algorithm>
using namespace std;

int absol(int);
//int bubble_sort(int *);
int deletee(int*,int,int);

int main(){
int n,i,head,j,d;
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
cout<<"Enter the direction"<<endl;
cin>>d;
for(i=0;i<n;i++){
if(a[i]==head){
j=i;
//break;
}
}

for(i=0;i<n;i++){
    cout<<a[i]<<"  ";
}
cout<<endl;

head=a[j];
b[0]=head;
int k; 
int p;
p=n;
  
for(i=1;i<n;i++){
    if(d>0){   //move rt
      for(k=j;k<n;k++){   //j is head. move rt and get all
      if(a[k]>head){
          b[i]=a[k];
         // head=a[j+1]
         // deletee(a,k,p);

          //p--;
      }
      }
    }
    if(k==n){
          d=(-1);
      }
    if(d<0){       //mv left
        for(k=j;k>0;k--){
            if(a[k]<head){
             b[i]=a[k];
            // deletee(a,k,p);
            // p--;
        }
        }
    }
    if(k==0){
        d=1;
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
    cout<<"el deleted "<<a[index]<<" at index "<<index<<endl;
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