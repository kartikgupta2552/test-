#include<iostream>
#include<map>
using namespace std;

class node{
    public:
        int data;
        node* next;

        node(int data){
            this->data = data;
            this->next = NULL;
        }
};

void Insertathead(node* &head,int d){
    node* temp  = new node(d);
    temp->next = head;
    head = temp;
}

void print(node* head){
    while(head){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

node* floyd(node* head){
    if(!head){
        return NULL;
    }
    node* slow = head;
    node* fast = head;
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
            return slow;
    }
    return NULL;
}

node* point(node* head){
    if(!head)
        return NULL;
    node* inter = floyd(head);
    cout<<inter->data<<endl;
    if(inter == NULL)
       return NULL;
    node* slow = head;
    while(slow!=inter){
       slow = slow->next;
       inter = inter->next;
    } 
    return slow;
}

void removeloop(node* head){
    if(!head)
        return ;
    node* start = point(head);
    node* temp = start;
    while(temp->next!=start)
        temp = temp->next;
    temp->next = NULL;
}

bool isloop(node* head){
    if(!head){
        return false;
    }
    map<node*,bool> m;
    while(head){
        if(m[head] == true){
            cout<<head->data<<endl;
            return true;
        }
        m[head] = true;
        head = head->next;
    }
    return false;
}

int main(){
    node* nod = new node(6);
    node* head = nod;
    node* tail = nod;
    Insertathead(head , 5);
    Insertathead(head , 4);
    Insertathead(head , 3);
    tail->next = head->next;


    if(floyd(head)){
        cout<<"There is loop "<<endl;
    }
    else{
        cout<<"No loop"<<endl;
    }
    // cout<<endl;
    // cout<<floyd(head)->data<<endl;
    node* lp = point(head);
    cout<<"Loop at "<<lp->data;
    removeloop(head);
    if(floyd(head)){
        cout<<"There is loop "<<endl;
    }
    else{
        cout<<"No loop"<<endl;
    }
    print(head);
    cout<<endl<<"End";
    return 0;
}