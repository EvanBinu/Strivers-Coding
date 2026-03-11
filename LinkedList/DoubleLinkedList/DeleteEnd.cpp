#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int data1){
        this->data=data1;
        this->next=nullptr;
        this->prev=nullptr;
    }
    Node(int data1,Node* next, Node* prev){
        this->data = data1;
        this->next = next;
        this->prev = prev;
    }
    static void insertEnd(Node* head,int val){
        if (head == nullptr) return;
        Node* temp = head;
        while(temp->next!=nullptr){
            temp = temp->next;
        }
        Node* node = new Node(val,nullptr,temp);
        temp->next = node;
    }
    static void deleteEnd(Node* head){
        if(head == nullptr) return;
        if(head->next == nullptr){
            delete head;
        }
        Node* temp = head;
        while(temp->next !=nullptr){
            temp = temp->next;
        }
        temp->prev->next = nullptr;
        delete temp;
    }
    static void printlist(Node* head){
        Node* temp = head;
        while(temp!=nullptr){
            cout << temp->data<<" ";
            temp = temp->next;
        }
        cout << endl;

    }
};

int main(){
    Node* head = new Node(100);
    head->next = new Node(200);
    head->next->prev = head;
    head->next->next = new Node(300);
    head->next->next->prev = head->next;

    Node::printlist(head);

    Node::deleteEnd(head);
    Node::printlist(head);
}