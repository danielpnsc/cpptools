#include<iostream>
#include<string>

using namespace std;

struct list{
  string s;
  list *next;
};

list *splitString(string,char);

int main(){
  string input;
  getline(cin,input);
  list *result = splitString(input,' ');
  while(result!=NULL){
    cout<<result->s<<"\n";
    result=result->next;
  }
}

list *splitString(string s,char split){
  list *head=NULL;
  int begin=-1;
  int end=-1;
  int count=-1;
  for(int i=0;i<s.length();i++){
    if(begin==-1 && s[i]!=split){
      begin=i;
    }

    if(s[i]==split){
      end=i;
    }

    if(begin>-1 && i==(s.length()-1)){
      end=s.length();
    }

    if(begin>-1 && end>-1){
      list *temp=new list;
      temp->s=s.substr(begin,end-begin);
      if(head==NULL){
	head=temp;
      }else{
	temp->next=head;
	head=temp;
      }
      begin=-1;
      end=-1;
    }
  }
  return head;
}
      
