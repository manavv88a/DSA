#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
  int data;
  Node *next;
  Node(int val){
      data=val;
      next=NULL;
  }
};
class linkedlist{
    public:
  Node *head=NULL;
  void insert(int val){
      Node *newnode= new Node(val);
      if(head==NULL){
          head=newnode;
      }
      else{
          Node *temp=head;
          while(temp->next!=NULL){
              temp=temp->next;
          }
          temp->next=newnode;
          newnode->next=NULL;
          
      }
  }
  void insertatindex(int index,int val){
      Node *newnode=new Node(val);
      Node *temp=head;
      int counter=1;
      while(counter!=index-1 && temp!=NULL){
          temp=temp->next;
          counter++;
      }
      newnode->next=temp->next;
      temp->next=newnode;
      
  }
  void delatbeg(){
      Node *temp=head;
      head=head->next;
      temp->next=NULL;
      delete temp;
  }
  
  void display(){
      Node *temp=head;
      while(temp!=NULL){
          cout<<temp->data<<" ";
          temp=temp->next;
      }
  }
};
int main() {
	// your code goes here
	linkedlist l1;
	l1.insert(30);
	l1.insert(40);
	l1.insert(50);
	l1.insertatindex(3,100);
	l1.delatbeg();
	l1.display();

}