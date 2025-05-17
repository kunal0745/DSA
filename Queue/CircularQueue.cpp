#include<iostream>
#define max 5
using namespace std;

class Queue{
    private:
    int queue[max];
    int front, rear;

    public:
    Queue(){
        front = -1;
        rear = -1;
    }

    void enqueue(int num){
        if(front == -1 && rear == -1){
            front = rear = 0;
            queue[rear] = num;
            cout << num << " is added into the queue\n";
        }
        else if(((rear + 1) % max) == front){
            cout << "Queue is full can't insert " << num << endl;
        }
        else{
            rear = (rear + 1) % max;
            queue[rear] = num;
            cout << num << " is added into the queue" << endl;
        }
    }

    void dequeue(){
        if(front == -1 && rear == -1){
            cout << "queue is empty\n";
        }
        else if(front == rear){
            cout << queue[front] << " deleted from the queue\n";
            front = rear = -1;
        }
        else{
            cout << queue[front] << " deleted from the queue\n";
            front = (front + 1) % max;
            
        }
    }

    void display(){
        int i = front;
        if(front == -1 && rear == -1){
            cout << "Queue is empty\n";
        }
        else{
            cout << "Elements in the queue are:";
            while(i != rear){
                cout << queue[i] << " ";
                i = (i+1) % max;
            }
            cout << queue[rear];
        }
        cout << endl;
    }

    void peek(){
        if(front == -1 && rear == -1){
            cout << "Queue is empty\n";
        }
        else{
            cout << queue[front] << " is the top element";
        }
    }

};

int main(){
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.dequeue();
    q.enqueue(50);
    q.display();
    q.peek();
    
}
