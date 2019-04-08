
#ifndef Queue_h
#define Queue_h

#include <string>

struct Link {
    // Provide your code here...
    std::string data;
    
    Link* next;
    
    Link() {
        data = "";
        next = NULL;
    }
    Link(std::string word) {
        data = word;
        
        next = NULL;
    }
};

struct Queue {
    // Provide your code here...
    Link* front;
    Link* back;
    
    Queue (){
        front = NULL;
        back = NULL;
    }
    
    std::string peek () {
        return front->data;
    }
    
    void push(std::string value){
        if (isEmpty()){
            front = new Link(value);
            back = front;
        }
        else {
            back->next = new Link(value);
            back = back->next;
        }
    }
    
    bool isEmpty(){
        return (front == NULL);
    }
    
    std::string pop(){
        std::string val = front->data;
        
        Link* oldFront = front;
        front = front->next;
        
        delete oldFront;
        
        return val;
    }
};

#endif


