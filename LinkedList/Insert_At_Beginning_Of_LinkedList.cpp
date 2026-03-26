#include<iostream>
using namespace std;
class NODE{
    public:
    int data;
    NODE *next;
    NODE(int value){
        data=value;
        next=NULL;
    }
};
int main(){
NODE *Head;
Head= new NODE(4);
if(Head==NULL){
    Head= new NODE(5);
}
else{
    NODE *temp;
    temp=new NODE(5);
    temp->next=Head;
    Head=temp;
}
cout<<Head->data<<endl;
cout<<Head->next;
return 0;
}