#ifndef OpStack_h
#define OpStack_h

// Define the Link struct below...

struct Link {
    long data;
    char op;
    
    Link* next;
    
    Link() {
        data = 0;
        op = NULL;
        next = NULL;
    }
    Link(long num, char letter) {
        data = num;
        op = letter;
        
        next = NULL;
    }
};

// Now define the Stack struct. It should be a stack of Links...

struct Stack {
    Link* front;
    
    void push(long value, char letter) {
        if(front == NULL) {
            front = new Link(value, letter);
            front->next = NULL;
        }
        else {
            Link* temp = front;
            temp = new Link(value, letter);
            temp->next = front;
            front = temp;
        }
    }
    Link* pop(){
        Link* temp = front;
        if(isEmpty()){
            return NULL;
        }
        
        temp = front;
        front = front->next;
        
        return temp;
    }
    bool isEmpty() {
        if(front == NULL) {
            return true;
        }
        return false;
    }
};

#endif
