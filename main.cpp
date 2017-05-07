#include <iostream>

using namespace std;
class linked{
private:
    struct node{
    int data;
    node *link;
    }*p;
public:
        linked(){
    p=NULL;
    }
    void insert1(int num){
       //
    node *temp,*r,*q;
    if(p==NULL){
            temp=new node;
        temp->data=num;
        temp->link=NULL;
        p=temp;

    }
    else{
            temp=p;
            r=new node;
              r->data=num;
            if(num<temp->data){
              r->link=p;
                p=r;
                q=p->link;
            }

            while(temp->link!=NULL){
                    if(num>temp->data&&(num<temp->link->data)){
                       r->link=temp->link;
                       temp->link=r;
                       }
                temp=temp->link;
            }
            if(temp->link==NULL&&num>temp->data)
            {
                r->link=NULL;
                  temp->link=r;

            }

          //  r=new node;
   // r->data=num;
   // temp->link=r;
    //r->link=NULL;

    }
    }
    void display(){

    node *temp;
    temp=p;
    while(temp!=NULL){
         cout<<temp->data;
         temp=temp->link;
         }
}
~linked(){
node *q;

while(p!=NULL){
        q=p->link;
        delete p;
        p=q;
      }
}
};

int main()
{
    linked l;
    l.insert1(9);
    l.insert1(1);
     l.insert1(6);
      l.insert1(8);
       l.insert1(2);
       l.display();


    return 0;
}
