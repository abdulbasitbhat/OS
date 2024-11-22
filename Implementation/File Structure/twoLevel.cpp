#include<iostream>
#include<cstdlib>
using namespace std;

struct node{
    string data;
    struct node *next;
};

struct user{
    string data;
    struct user *next;
    struct node *files;
};


int main(){
    struct user *rootDir;
    
     struct user *user1=(struct user *)malloc(sizeof(struct user));
      struct user *user2=(struct user *)malloc(sizeof(struct user));
       struct user *user3=(struct user *)malloc(sizeof(struct user));
      //  struct user *user4=(struct user *)malloc(sizeof(struct user));
    
    user1->data="User1";
    user2->data="User2";
    user3->data="User3";
    //user4->data="User4";
      user1->next=user2;
      user2->next=user3;
      user3->next=NULL;
     // user4->next=NULL;
      rootDir=user1;

  //Files for user 1
    struct node *file1=(struct node *)malloc(sizeof(struct node));
     struct node *file2=(struct node *)malloc(sizeof(struct node));
      struct node *file3=(struct node *)malloc(sizeof(struct node));
       struct node *file4=(struct node *)malloc(sizeof(struct node));
    

    file1->data="File1";
    file1->next=file2;
    
    file2->data="File2";
    file2->next=file3;

    file3->data="File3";
    file3->next=file4;

    file4->data="File4";
    file4->next=NULL;

    user1->files=file1;

//.....................

 struct node *u2file1=(struct node *)malloc(sizeof(struct node));
     struct node *u2file2=(struct node *)malloc(sizeof(struct node));
      struct node *u2file3=(struct node *)malloc(sizeof(struct node));
  //     struct node *u2file4=(struct node *)malloc(sizeof(struct node));
    

    u2file1->data="U2File1";
    u2file1->next=u2file2;
    
    u2file2->data="U2File2";
    u2file2->next=u2file3;

    u2file3->data="U2File3";
    u2file3->next=NULL;

    user2->files=u2file1;

   //........................................
   struct node *u3file1=(struct node *)malloc(sizeof(struct node));
     struct node *u3file2=(struct node *)malloc(sizeof(struct node));
   //   struct node *u3file3=(struct node *)malloc(sizeof(struct node));
  //     struct node *u2file4=(struct node *)malloc(sizeof(struct node));
    

    u3file1->data="U3File1";
    u3file1->next=u3file2;
    
    u3file2->data="U3File2";
    u3file2->next=NULL;

    user3->files=u3file1;
   //.............................
   
   
   
   
    cout<<endl;
    cout<<"Dispaying Files of Root Dir :\n";
    struct user *ptr;
    ptr=rootDir;
    while(ptr->next!=NULL){
        cout<<ptr->data<<"  ";
        ptr=ptr->next;
    }
    cout<<ptr->data<<endl;

    cout<<endl;
    cout<<"Dispaying Files of User1 :\n";
    struct node *ptrf;
    ptrf=file1;
    while(ptrf->next!=NULL){
        cout<<ptrf->data<<"  ";
        ptrf=ptrf->next;
    }
    cout<<ptrf->data<<endl;

     cout<<endl;
    cout<<"Dispaying Files of User2 :\n";
    //struct node *ptrf;
    ptrf=u2file1;
    while(ptrf->next!=NULL){
        cout<<ptrf->data<<"  ";
        ptrf=ptrf->next;
    }
    cout<<ptrf->data<<endl;

    cout<<endl;
    cout<<"Dispaying Files of User3 :\n";
    //struct node *ptrf;
    ptrf=u3file1;
    while(ptrf->next!=NULL){
        cout<<ptrf->data<<"  ";
        ptrf=ptrf->next;
    }
    cout<<ptrf->data<<endl;

}