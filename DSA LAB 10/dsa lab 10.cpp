#include<iostream>
using namespace std;
const int SIZE =100;
	int stackarr[SIZE];
	int toparr=-1;
	void pusharray(int value){
		if(toparr>=SIZE-1){
			cout<<"stack overflow "<<endl;
			return;
		}
		stackarr[++toparr]=value;
	}
void poparray(){
	if(toparr<0){
		cout<<"Stack Underflow"<<endl;
		return ;
	}
	cout<<"Popped: "<<stackarr[toparr--]<<endl;
}
void displayarray(){
	if(toparr<0){
		cout<<"Stack is Empty "<<endl;
		return;
	}
	cout<<"Stack Elements: ";
	for(int i=toparr;i>=0;i--){
		cout<<stackarr[i]<<" ";
	}
	cout<<endl;
}
struct node{
	int data;
	node* next;
};
node* toplist=NULL;
void pushlinkedlist(int value){
	node* newnode=new node;
	newnode->data=value;
	newnode->next=toplist;
	toplist=newnode;
}
void poplinkedlist(){
	if(toplist==NULL){
		cout<<"Stack Underflow"<<endl;
		return;
	}
	cout<<"popped: "<<toplist->data<<endl;
	node* temp=toplist;
	toplist=toplist->next;
	delete temp;
}
void displaylinkedlist(){
	if(toplist==NULL){
		cout<<"Stack  is Empty "<<endl;
		return;
	}
	cout<<"Stack Elements: ";
	node* current=toplist;
	while(current !=NULL){
    cout<<current->data<<" ";
    current=current->next;
	}
	cout<<endl;
	
}

int main(){
	cout<<"Stack with Array"<<endl;
	pusharray(10);
	pusharray(20);
	pusharray(30);
	pusharray(40);
	pusharray(50);
	displayarray();
	poparray();
	poparray();
	displayarray();
	cout<<endl<<"Stack with linked list"<<endl;
	pushlinkedlist(11);
	pushlinkedlist(12);
	pushlinkedlist(13);
	pushlinkedlist(14);
	displaylinkedlist();
	poplinkedlist();
	poplinkedlist();
	displaylinkedlist();
	
	
}

