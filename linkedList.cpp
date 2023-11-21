#include <iostream>

using namespace std;

class IntSlNode{
    public:
        IntSlNode(){
            next = 0;
        }
        IntSlNode(int el, IntSlNode *ptr){
            info = el;
            next = ptr;
        }
        int info;
        IntSlNode *next;
};


class IntSlList{
    private:
        IntSlNode *head, *tail;
    public:
        IntSlList(){
            head = tail = 0;
        }
        void addToHead(int el){
            head = new IntSlNode(el,head);
            if (tail == 0){
                tail = head;
            }
        }
        void print(){
            IntSlNode *p = head; 
            while (p!=0){
                cout << p -> info << endl;
                p = p -> next;
            }
        }
        void addToTail(int el){
            IntSlNode* new_node = new IntSlNode;
            new_node -> info = el;
            new_node -> next = 0;
            if (tail ==0){
                head = new_node;
                tail = new_node;
            }
            else{
                tail -> next = new_node;
                tail = new_node;
            }
        }
};

int main(){
    IntSlList O;
    O.addToHead(4);
    O.addToHead(5); 
    O.addToTail(6);   
    O.print();
}