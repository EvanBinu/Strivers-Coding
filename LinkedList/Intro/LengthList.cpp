#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int data1, Node* next ){
        data = data1;
        next = next;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
    }
    static int length(Node* head){
        Node* temp = head;
        int count =0;
        while(temp != nullptr){
            count++;
            temp = temp->next;
        }
        return count;
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
    head->next->next = new Node(300);
    
    Node::printlist(head);
    int leng = Node::length(head);
    cout << leng << endl;
}