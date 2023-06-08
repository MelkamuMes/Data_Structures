#include <iostream>
#include <cstring>

using namespace std;

class simpleQ {
    int front = -1, rear = -1, len;
    int que[15];
    bool emptyQ(){
        if (front == rear) return true;
        return false;
    }
    bool fullQ(){
        if (rear >= 15) return true;
        return false;
        // if();
    }
    public:
        void insert(int x){
            if (fullQ()) {
                cout << "Queue OverFlow" <<endl;
                return;
            }
            else if (emptyQ()){
                // rear = 0;
                front = 0;
            }
            que[++rear] = x;
            len = rear - front + 1;
            
        }

        void remove(){
            cout << que[front++];
        }

        void display(){
            for (int i = 0; i < len; i++)
            {
                cout << que[i] << " ";
            }
            
        }

};


class circularQ {
    int front = -1, rear = -1, size = 15;
    int len = 0, counter = 0;
    int que[16];

    bool isEmpty(){
        if (front == -1) return true;
        else if (front % size > rear % size) return true;
        return false;
    }

    bool isFull(){
        if((front % size) == ((rear%size) + 1)) return true;
        return false;
    }


    public:
        void enqueue(int x){
            counter++;
            rear = counter % size;
            if (front = -1){
                ++front;
                que[rear] = x;
                return;
            } else if (isFull()){
                cout << "Circular Queue Overflow." << endl;
                return;
            } else {
                que[rear] = x;
            }
        }

        void dequeue(){
            if(isEmpty()){
                cout << "Queue Empty!" << endl;
                return;
            } else {
                front = front % size;
                cout << que[++front] << endl;
            }
        }

        int leng(){
            if ((front % size) <= (rear)){ 
                len = (rear) - (front % size) +  1;
                return len;
            }
            else if ((front % size) > (rear)){
                len = (size - (front%size) + (rear) + 1);
                return len;
            }
            return 0;
        }

        void display(){
            int count = front%size;
            cout << "F " << counter << endl;
            cout << "R " << rear%size << endl;
            cout << leng() << " L" << endl;
            for (int i = 0; i <= 20; i++)            // Length
            {
                // cout << count << " m";
                if (count == 15) count = 0;
                // cout << leng() << " |"; 
                cout << que[count++] << " ";
                // counter = counter%size;;
            }
            
        }


};


class circleQ {
    int front = -1, rear = -1, size = 15, counter = 0;
    int fr, re, goer = -1;
    int que[15];
    

    bool isEmpty() {
        if (rear < front) return true;
        else if (rear = -1) return true;
        return false;
    }

    bool isFull() {
        fr = front % size;
        re = rear % size;
        if (re > fr)
            if(re - fr + 1 == size) return true;
        else if((re+1) == fr) return true;
        return false;
    }

    public:
        void enqueue(int x){
        fr = front % size;
        re = rear % size;
        goer = front;
            if(isFull()) {
                cout << "Queue Overflow!" << endl;
                return;
            }
            else if (rear = -1){
                rear++;
                front++;
            }
            else {
                if (re = (size - 1)) {
                    re = -1;
                }
                que[++re] = x;
            }
            rear++;
        }

        void dequeue(){
        fr = front % size;
        re = rear % size;
            if (isEmpty()) {
                cout << "Stack Underflow.";
                return;
            } else {
                goer = front++; 
            }
        }

        void display(){
        // int goer = front;
            for (int i = 0; i < size; i++)
            {
                if (fr == size) fr = 0;
                fr = goer ;
                cout << fr << " " << endl;
                // re = rear % size;
                cout << que[fr] << ", ";
                goer++;  
            }
        }

};

int main(){

    simpleQ sQue;
    for (int i = 0; i < 20; i++)
    {
        sQue.insert(i);
    }   
    sQue.display();


    cout << endl << endl;

    circleQ cQue;
    for (int i = 0; i < 25; i++)
    {
        cQue.enqueue(i);
        // cout << "|" << cQue.isFull() << "| ";
    }   
    cQue.display();
 



    return 0;
}



// #include <iostream>

// using namespace std;

// class Queue {
//         int que[10];
//         int top = -1, bot = -1;
//     public:

//         void push (int x){
//             if (top >= 9){
//                 cout << "Queue overflow!" << endl;
//                 top = 10;
//             } else {
//                 if (bot == -1) bot++;
//                 que[++top] = x;
//                 cout << x << " is inserted to the Queue" << endl;
//             }
//         }

//         void pop (){
//             if (bot == top){
//                 cout << que[bot++];
//                 cout << " => Last Element" << endl;
//             } else if (bot > top) {
//                 cout << "Queue Empty!" << endl;
//             } else {
//                 cout << que[bot++] << " is removed!" << endl; 
//             }
//         }

//         void display(){
//             for (int i = bot; i <= top; i++)
//             {
//                 if(i == -1) continue;
//                 cout << que[i] << "   ";
//             }
//             cout << endl;
            
//         }

// };

// int main(){
//     Queue queue;

//         for (int i = 0; i < 6; i++)
//         {
//             queue.push(1);
//             queue.push(2);
//         }
//     queue.display();


//         for (int i = 0; i < 12; i++)
//         {
//             queue.pop();
//         }

//     queue.display();
// }