        //           Singly Linked List


// #include <iostream>
// using namespace std;

// class node
// {
// public:
//     int data;
//     node *next;
//     node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };

// void InsertAtFirst(node*&head,int d){
//     node* temp = new node(d);
//     temp->next = head;
//     head = temp;
// }

// void InsertAtLast(node *&tail, int d)
// {
//     node *temp = new node(d);
//     tail->next = temp;
//     tail = temp;
// }

// void InsertAtPosition(node* &tail,node *&head, int pos, int d)
// {
//     node *temp = head;
//     int c = 1;
//     while (c < pos - 1)
//     {
//         temp = temp->next;
//         c++;
//     }
//     if(c==1){
//         InsertAtFirst(head,d);
//         return;
//     }
//     if(temp->next==NULL){
//         InsertAtLast(tail,d);
//         return;
//     }
//     node *n = new node(d);
//     n->next = temp->next;
//     temp->next = n;
// }

// void print(node *head)
// {
//     node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// void deletenode(node*&head,int pos){
//     node * temp = head;
//     if(pos==1){
//         head = temp->next;
//         delete temp;
//         return;
//     }
//     int c = 1;
//     while(c<pos-1){
//         temp = temp->next;
//         c++;
//     }
//     node* pre = temp->next;
//     temp->next = temp->next->next;
//     delete pre;
// }

// int main()
// {
//     node *nod = new node(10);
//     node *head = nod;
//     node *tail = nod;
//     // print(head);

//     InsertAtLast(tail, 12);
//     // print(head);

//     InsertAtLast(tail, 15);
//     // print(head);

//     InsertAtPosition(tail,head,4,18);
//     print(head);

//     deletenode(head,4);
//     print(head);
//     // cout<<"head : "<<head->data<<endl;
//     // cout<<"tail : "<<tail->data<<endl;
//     return 0;
// }

// -------------------------------------------------------------

        //         Doubly Linked List

// #include <iostream>
// using namespace std;

// class node
// {
// public:
//     int data;
//     node *pre;
//     node *next;
//     node(int data)
//     {
//         this->data = data;
//         this->pre = NULL;
//         this->next = NULL;
//     }
// };

// void InsertAtHead(node *&head, int d)
// {
//     node *temp = new node(d);
//     temp->next = head;
//     head->pre = temp;
//     head = temp;
// }

// void InsertAtLast(node *&tail, int d)
// {
//     node *temp = new node(d);
//     tail->next = temp;
//     temp->pre = tail;
//     tail = temp;
// }

// void InsertAtPosition(node *&head, node *&tail, int pos, int d)
// {
//     if (pos == 1)
//     {
//         InsertAtHead(head, d);
//         return;
//     }
//     int c = 1;
//     node *temp = head;
//     while (c < pos - 1)
//     {
//         temp = temp->next;
//         c++;
//     }
//     if (temp->next == NULL)
//     {
//         InsertAtLast(tail, d);
//         return;
//     }
//     node *n = new node(d);
//     n->pre = temp;
//     n->next = temp->next;
//     temp->next = n;
//     n->next->pre = n;
// }

// void print(node *head)
// {
//     // node* temp = head;
//     while (head != NULL)
//     {
//         cout << head->data << " ";
//         head = head->next;
//     }
//     cout << endl;
// }

// void del(node *&head, node *&tail, int pos)
// {
//     node *temp = head;
//     if (pos == 1)
//     {
//         head->next->pre = NULL;
//         head = head->next;
//         delete temp;
//         return;
//     }
//     int c = 1;
//     while (c < pos - 1)
//     {
//         temp = temp->next;
//         c++;
//     }
//     if (temp->next->next == NULL)
//     {
//         node *t = temp->next;
//         temp->next = NULL;
//         tail = temp;
//         delete t;
//         return;
//     }
//     node *t = temp->next;
//     temp->next->next->pre = temp;
//     temp->next = temp->next->next;
//     delete t;
// }

// int main()
// {
//     node *nod = new node(3);
//     node *head = nod;
//     node *tail = nod;
//     // print(head);
//     InsertAtHead(head, 2);
//     InsertAtLast(tail, 4);
//     InsertAtHead(head, 1);
//     InsertAtLast(tail, 5);
//     // print(head);
//     InsertAtPosition(head, tail, 6, 6);
//     print(head);

//     // Deletion
//     del(head, tail, 1);
//     print(head);
//     cout << "head -> " << head->data << endl;
//     cout << "tail -> " << tail->data << endl;

//     return 0;
// }


// ----------------------------------------------------------------

        //           Circular Linked List

// #include <iostream>
// using namespace std;

// class node
// {
// public:
//     int data;
//     node *next;
//     node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };

// void insertnode(node *&tail, int element, int d)
// {
//     if (tail == NULL)
//     {
//         node *temp = new node(d);
//         tail = temp;
//         temp->next = temp;
//     }
//     else
//     {
//         node *curr = tail;
//         while (curr->data != element)
//         {
//             curr = curr->next;
//         }
//         node *temp = new node(d);
//         temp->next = curr->next;
//         curr->next = temp;
//     }
// }

// void del(node *&tail, int value)
// {
//     if (tail == NULL)
//     {
//         delete tail;
//         return;
//     }
//     else
//     {
//         node *pre = tail;
//         node *cur = pre->next;
//         if(pre==tail){
//             tail=NULL;
//             return ;
//         }
//         while (cur->data != value)
//         {
//             pre = cur;
//             cur = cur->next;
//         }
//         pre->next = cur->next;
//         // tail=cur->next;
//         if(tail==cur){
//             tail=pre;
//         }
//         delete cur;
//         return;
//     }
// }

// void print(node *tail)
// {
//     if(!tail){
//         cout<<"List is Empty";
//         return ;
//     }
//     // cout<<tail->data<<endl;
//     node *temp = tail;
//     do
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     } while (temp != tail);
//     cout << endl;
// }

// int main()
// {
//     node *tail = NULL;
//     insertnode(tail, 3, 3);
//     // insertnode(tail, 3, 6);
//     // insertnode(tail, 6, 7);
//     // insertnode(tail, 3, 5);
//     print(tail);
//     // del(tail,3);
//     // print(tail);
//     del(tail,3);
//     print(tail);
//     return 0;
// }