#include <iostream>

using namespace std;

struct Cell{
  int data;
  Cell *next;

  Cell(){
    data=0;
  }

  Cell(int n){
    data=n;
  }

  ~Cell(){
    cout<<data<<" Deleted\n";
  }
};

class Stack{
  Cell* head;

public:
  Stack(){
    head=nullptr;
  }

  ~Stack(){
    while(head!=nullptr){
      Cell *temp = head->next;
      delete head;
      head=temp;
    }
      
    cout<<"Deleted stack\n";
  }

  void push(int n){
    Cell *temp=new Cell(n);
    if(head==nullptr){
      head=temp;
    }else{
      temp->next=head;
      head=temp;
    }
  }

  void print(Cell *curr){
    if(curr!=nullptr){
      cout<<curr->data<<"\n";
      print(curr->next);
    }
  }

  void print(){
    print(head);
  }
};

int main(){
  Stack s;
  for(int i=0;i<11;i++){
    s.push(i);
  }
  s.print();
}
