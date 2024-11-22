#include<iostream>
using namespace std;

int main(){
    int q[4]={-1,-1,-1,-1};
    int ref[20]={7,0,1,2,0,3,0,4,2,3,0,3,2,1,2,0,1,7,0,1};
    int r=0;                            //you wull get to know the use of these initializations by reading further...
    int elpos=20; 
    int qelpos;
    int flag=0;
    for(int i=0;i<20;i++){                    //main loop: it traverses ref string if q dosent have that element it replaces the el in q that is most left in ref queue.
        for(int k=0;k<4;k++){                 //to check if element already exixts in q. so we dont need to update q
            if(ref[i]==q[k]){
                flag=1;
            }
        }
        if(flag!=1){                        //runs if the el in ref queue is not in q queue
            if(q[r]==-1){               //runs if space is empty in q queue
                q[r]=ref[i];
                r++;
            }
            else                        //runs if space is not empty
            {
                for(int l=i;l>=0;l--){                         //checks ref queue from that element towards left
                    for(int lt=0;lt<4;lt++){                   //compares each left el of ref queue with the elements aready present in q queue
                        if(ref[l]==q[lt] && l<elpos){          //if the el we are at due to 24 line loop is in queue and its index is 'least from 0 index of ref queue' (at max from the element(but first occurance from that el in ref queue) we have to fit in) then save the index
                            elpos=l;                       //stores the index of farthest el as in ref queue (which is present in q queue) for further iterations of loop after 24th loop
                            qelpos=lt;                     //stores its index in q queue
                        }
                    }
                }
                q[qelpos]=ref[i];                               //we get the index of the el that is farthest from the point, we are at, in ref queue. this is index of that el in q queue. We store new value there
                r++;
            }
        }
        flag=0;
           cout<<"On Inserting "<<ref[i]<<" page, frames in main memory are: "<<endl;
           for(int j=0;j<4;j++){
               cout<<q[j]<<" ";
           }
           cout<<endl;
           cout<<endl;
    }

}