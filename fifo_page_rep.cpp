#include<iostream>
using namespace std;
#define size 3
  //Think. when we have a no. already in queue do we 

    //My Queue code


int check_if_there(int);
int qu[size];
int front=-1;
int rear=-1;
void enque(int );
void deque();
void display();

int main(){ 
    int que[10]={7,2,4,2,1,0,3,1,5,2};
    for(int i=0;i<10;i++){
    if(check_if_there(que[i])){
    }
     else{
           enque(que[i]);
     }
   }
   display();

}

void enque(int el){
    
    if(front==-1 && rear==-1){                //Cond for first entry
        front=0;
        rear=0;
        qu[rear]=el;
    }
    else if((rear+1)%size==front){   //cond for full queue
        //cout<<"Overflow"<<endl;
          front=(front+1)%size; 
        
          rear=(rear+1)%size; 
           qu[rear]=el;
         
    } 
    else{                                                //normal cond
        rear=(rear+1)%size;
        qu[rear]=el;
    }
    // Here: 
}

void deque(){
    if(front==-1 && rear==-1){                         //if empty
        cout<<"Underflow"<<endl;
    }
    else if(front==rear){                              //if only one element
        cout<<"Deleted "<<qu[front]<<endl;
        front=-1;
        rear=-1;
    }
    else{ 
        cout<<"Deleted "<<qu[front]<<endl;                 //normal delete
        front=(front+1)%size;
    }
}

void display(){
    if(front==-1 && rear==-1){
        cout<<"Empty"<<endl;
    }
    else if(front==0 && rear==0){
        cout<<"Only one element and that is: "<<qu[front];
    }
    else{
        cout<<"Queue is: "<<endl;
         int i=front;
         while(i!=rear){
             cout<<qu[i]<<" ";
             i=(i+1)%size;
         }
       cout<<qu[rear];   //outside because if we use rear+1 in while loop and rear was last el, i will have to be not equal to 1
      cout<<endl;
    }
}
//End of my Queue code.
int check_if_there(int el){
     int i=front;
         while(i!=rear){
             if(qu[i]==el){
                // goto Here;
                return 1;
             }
             i=(i+1)%size;
         }
        if(qu[rear]==el){
             //goto Here;
             return 1;
         }
         return 0;
      // cout<<qu[rear]; 
}
