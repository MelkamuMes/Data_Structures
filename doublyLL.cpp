












// /**
//  * @file doublyLinkedList.cpp
//  * @author BereketeAb 
//  * @brief A program that works the basic functions on a Doubly Linked List.
//  *          The program 
//  *              -Inserts Node at any poition
//  *              -Deletes Node from any position
//  *              -Searchs for a particular number in the List
//  *              -Displays the data in both order
//  * 
//  * @Contact BereketeAbBirkuK@gmail.com
//  *          +251 935 344 088
//  *          Github: https://github.com/BereketeAbB/
//  *          Telegram: @BereketeAb
//  * @version 0.1
//  * @date 2023-03-27 - áˆ˜áŒ‹á‰¢á‰µ 17 á‰°áŒ»áˆ 
//  * 
//  * @copyright Copyright (c) 2023
//  * 
//  */


// #include <iostream>
// #include <cstring>

// using namespace std;

// class DoubleLinkedList {
//     struct node {
//         int data;
//         node *nPtr = nullptr;
//         node *pPtr = nullptr;
//     };
//     int size = 0;

//     node* headPtr = nullptr;
    
//     public:

//         int getSize(){
//             return size;
//             // headPtr->
//         }
//         void createNode(int value){             // Creating a Node and addigning it with a variable
//             node* newNode = new node;
//             newNode->data = value;

//             cout << "node created with " << newNode->data << "value";
//         }

//         void insertBeg(int value){      //Insert data at the beginnig of the Doubly Linked List
//             node* newNode = new node;               //create a new node and initialize its value with the data required by the user.
//                 newNode->data = value;
//                 newNode->nPtr = nullptr;
//                 newNode->pPtr = nullptr;

//             if (headPtr == nullptr){
//                 headPtr = newNode;
//                 // cout << headPtr->data <<  " Inserted. " << endl;
//                 size++;
//                 return;


//             } else{
//                 node* temp = headPtr;                   // swap the new node with the first element
//                 temp->pPtr = newNode;                   // HeadPtr and the pPtr of the 1st element points to newNode 
//                 headPtr = newNode; 
//                 newNode->nPtr = temp;                   //newNode's nPtr points to the previous 1st element
//                 size++;

//             }

//         }

//         void insertEnd(int value){

//             // headPtr->nPtr->nPtr->nPtr->nPtr->nPtr;
//             node* newNode = new node;               //create a new node and initialize its value with the data required by the user.
//                 newNode->data = value;
//                 newNode->nPtr = nullptr;
//                 newNode->pPtr = nullptr;

//             node* curr = headPtr;                   // Node pointer that is used to traverse in the list

//             while(!(curr->nPtr == nullptr)){           // Traverse to the last element of the set
//                 curr = curr->nPtr;
//                 // cout << value << " ";
//                 // test();
//             }                                                   //===== ERROR AT THIS WHILE LOOP?

//             newNode->pPtr = curr;                   // previous pointer points to the last element
//             curr->nPtr = newNode;                   // Next pointer points to new node
//             size++;
//         }

//         void insertAny( int value, int index){
//             node* newNode = new node;               //create a new node and initialize its value with the data required by the user.
//                 newNode->data = value;

//             node* curr = headPtr;                   // Node pointer that is used to traverse in the list
//             int currI = 1;                               //traverser variable to the required index

//             if(index == 0){
//                 insertBeg(value);
//                 return;
//             }

//             while(currI++ < index){                 //traverse to the desired index previous node
//                 curr = curr->nPtr;
//             }

//             newNode->nPtr = curr->nPtr;             //inserting the node between the two elements
//             // newNode->pPtr = (curr->nPtr)->pPtr;
//             newNode->pPtr = curr;

//             (curr->nPtr)->pPtr = newNode;
//             curr->nPtr = newNode;

//             size++;
//         }

//         void search(int value){                                                                                                                                                                                           
//             node* curr = headPtr;
//             int ind = 0;
//             int found = 0;

//             while(!(curr == nullptr)){  
//                 if (curr->data == value){                                                        //If the data is found
//                     cout << endl <<  "Search Result: " << value << " is found on index " << ind++ << "." << endl;
//                     curr = curr->nPtr; 
//                     found = 1;
//                     // return;
//                 } else {   
//                     curr = curr->nPtr;                                                                      // Else increase the value
//                     ind++;
//                     // test();
//                 }
//             }
//             if(found == 0){                                                               // if the while loop ends without obtaining the result
//                 cout << endl << "Search Result: " << value << "  is not found." << endl;
//                 return;
//             }
//         }

//         void deleteNode(int index){
//             int currI = 0;
//             node* curr = headPtr;

//             if (index >= size || index < 0){
//                 cout << "No node at index " << index;
//                 return;
//             }
//             while(currI++ < index){
//                 curr = curr->nPtr;
//             }
            
//             if(index == 0){                                     //If the being deleted value is the first element
//                 headPtr = headPtr->nPtr;
//                 (headPtr->nPtr)->pPtr = nullptr;
//                 delete curr;
//                 size--;
//                 return;
//             }

//             if(curr->nPtr == nullptr){                             //If the being deleted value is the last element
//                 (curr->pPtr)->nPtr == nullptr;
//                 delete curr;
//                 size--;
//                 return;
//             }

//             (curr->pPtr)->nPtr = curr->nPtr;                        //Adjusting the pointers while deleting the node
//             (curr->nPtr)->pPtr = curr->pPtr;
//             delete curr;
//             size--;
//         }

//         void display(){
//             node* curr = headPtr;
//             // test();

//             if (curr == nullptr){
//                 cout << endl << "DLList empty." << endl;
//                 return;
//             }
//             cout << endl << "Values of the Doubly Linked List: ";
//             while(!(curr == nullptr)){
//                 // test();
//                 cout << curr->data << ", ";
//                 curr = curr->nPtr;
//             }
//             cout << endl;
//         }

//         void displayReverse(){
//             node* curr = headPtr;

//             while(!(curr->nPtr == nullptr)){            //traverse to the last element
//                 curr = curr->nPtr;
//             }
             
//             cout << endl << "Reversed Values of the Doubly Linked List: ";
//             do{                                         //display the element and return to the previous 
//                 cout << curr->data << ", ";
//                 curr = curr->pPtr;
//                 // test();
//             }while (!(curr == nullptr));
//             }

//         void index(){
//                 int ind;
//             cout << "================================" << endl;
//             cout << "====Menu Operations on Stack====" << endl;
//             cout << "================================" << endl;
//             cout << "Press 1: To Push elements in stack" << endl;
//             cout << "Press 2: To Pop elements from stack" << endl;
//             cout << "Press 3: To Display the contents of stack" << endl;
//             cout << "Press 4: To Exit" << endl;

//             cin >> ind;

//             switch (ind)
//             {
//             case 1:
//                 int x;
//                 cout << "Enter the Number to be pushed: ";
//                 cin >> x;
//                 push(x);
//                 index();
//                 break;
            
//             case 2:
//                 pop();
//                 cout << "Item Popped!" << endl;
//                 index();
//                 break;

//             case 3:
//                 cout << "Stack: " << endl;
//                 display();
//                 cout << endl << endl;
//                 index();
//                 break;

//             case 4:
//                 break;
            
//             default:
//                 cout << "Invalid Attempt!" << endl;
//                 index();
//                 break;
//             }

//         }

//         void test(){                            //tester
//             cout << "\n\n>>>   Check Code 1 . . . \n>>>   Check Code 2 . . . \n>>>   Check Code 3. . ." << endl << endl;
//         }

        
// };


// int main(){





//     DoubleLinkedList dLink;

//     cout << dLink.getSize() << endl;

//     dLink.display();    

//     dLink.search(3);
//     dLink.insertBeg(4);
//     dLink.insertBeg(4);
//     dLink.insertBeg(5);
//     dLink.insertBeg(2);      
//     dLink.insertEnd(0);
//     dLink.insertEnd(100);
//     dLink.insertEnd(9);
//     dLink.insertBeg(78);

//        cout << "Size: " << dLink.getSize() << endl;

    

//     dLink.displayReverse();
//     // cout << "\n=============\n";
//     // dLink.displayReverse();

//     dLink.insertAny(71, 2);
//     dLink.insertAny(10, 6);
//     dLink.insertAny(20, 1);
//     dLink.insertAny(70, 0);

//     cout << dLink.getSize() << endl;

//     dLink.search(4);

//     dLink.display();


//     cout << endl << dLink.getSize() << endl;
//     dLink.deleteNode(20);
//     dLink.deleteNode(0);
//     dLink.deleteNode(7);
//     dLink.deleteNode(4);
//     dLink.display();

//     cout << endl << dLink.getSize();

//     return 0;
// }