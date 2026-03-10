#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int data1 ,Node* next,Node* prev){
        this->data = data1;
        this->next = next;
        this->prev = prev;
    }
    Node(int data1){
        this->data = data1;
        this->next = nullptr;
        this->prev = nullptr;
    }
    static void printlist(Node* head){
        Node* temp = head;
        while(temp!=nullptr){
            cout << temp->data << " ";
            temp = temp->next;
        }
    } 

};

int main(){
    Node* head = new Node(100);
    head->next = new Node(200);
    head->next->prev = head;
    head->next->next = new Node(300);
    head->next->next->prev = head->next;
    Node::printlist(head);
}