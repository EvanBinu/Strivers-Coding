#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int data1, Node* next ){
        this->data = data1;
        this->next = next;
    }
    Node(int data1){
        this->data = data1;
        this->next = nullptr;
    }
    static Node* insertHead(Node* head, int newdata){
        Node* newnode = new Node(newdata,head);
        return newnode;
    }
    static void printlist(Node* head){
        Node* temp = head;
        while(temp!=nullptr){
            cout << temp->data <<" ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main(){
    Node* head = new Node(100);
    head->next = new Node(200);

    
    head =  Node::insertHead(head,50);
    Node::printlist(head);

}