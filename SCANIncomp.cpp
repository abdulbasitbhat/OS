//SCAN
//Assuming sorted input
#include<iostream>
using namespace std;

int absol(int);
//int bubble_sort(int *);

int main(){
int n,i,head,j;
cout<<"Enter number of Queue Elements:"<<endl;
cin>>n;
int a[n];
int b[n];
for(i=0;i<n;i++){
cin>>a[i];
}
// bubble_sort(a,n);
cout<<"Enter Head"<<endl;
cin>>head;
for(i=0;i<n;i++){
if(a[i]==head){
j=i;
break;
}
}
b[0]=a[j];
// for(i=1;i<n;i++)

if(  absol(a[j+1]-a[j]) < absol(a[j]-a[j-1])   ){
for(i=1;i<(n-j);i++){
HI:
for(int y=j;y<200;y++){
b[i]=a[y];

}
goto HI2;
}
}
else{
for(i=1;i>0;i--){
HI2:
        for(int y=j;y>=0;y--){
b[i]=a[y];

}
goto HI;
}

for(i=0;i<n;i++){
cout<<b[i]<<"  ";
}
cout<<endl;
}
}
int absol(int c){
if(c<0){
return -c;
}
else
return c;
}

/*int sort(int x[],int n){
int k,m;
for(k=0;k<n;k++){
if(a)
}
}*