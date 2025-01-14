
// Using STL : without class and object


// #include<iostream>
// #include<stack>
// using namespace std;

// int main(){
//     stack<int>s; // stack created

//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     s.push(50);

//     //top()

//     cout<<"Top element in stack : "<<s.top()<<endl;

//     //pop()

//     s.pop();

//     cout<<"After pop element from stack , Top element present in Stack : "<<s.top()<<endl;


//     // empty()

//     cout<<"Check Stack is empty : "<<(s.empty() ? "YES" : "NO")<<endl;


//     if(!(s.empty())){
//         cout<<"Stack is not empty! "<<endl;
//     }
//     else{
//         cout<<"Stack is empty!"<<endl;
//     }

//     // size()

//     cout<<"Size of stack : "<<s.size()<<endl;

//     // display all element from stack

//     while( s.size() > 0 ){

//     cout<<s.top()<<" ";

//         s.pop();

//     }

// }



// Using Class and Object

// #include<iostream>
// #include<stack>
// using namespace std;

// class Stack{
//     public : 
//     stack<int>s;
//     int capacity;

//     public : 

//     Stack(int cap){
//         capacity = cap;
//     }

//     void push(int data){

//         if(s.size()<capacity){
//             s.push(data);
//         }else{
//             cout<<"Stack Overflow!"<<endl;
//         }
//     }

//     void pop(){
//         if(s.empty()){
//             cout<<"Stack Underflow!"<<endl;
//         }else{
//             int topElement = s.top();
//             s.pop();
//             cout<<topElement<<" deleted from stack "<<endl;
//         }
//     }

//     void peek(){
//         if(s.empty()){
//             cout<<"Stack is empty!"<<endl;
//         }else{
//             cout<<"Top element of stack : "<<s.top()<<endl;
//         }
//     }

//     void display(){
//         if(s.empty()){
//             cout<<"Stack is Empty!"<<endl;
//             return;
//         }

//       stack<int> temp = s; 
//       while (!temp.empty()) { 
//         cout << temp.top() << " "; 
//         temp.pop(); 
//         }
//         cout << endl; 
//     }

//     bool isEmpty(){
//         return s.empty();
//     }

//     bool isFull(){
//         return capacity == s.size();
//     }

//     int size(){
//         return s.size();
//     }

// };

// int main(){

//     Stack mystack(5);

//     mystack.push(10);
//     mystack.push(20);
//     mystack.push(30);
//     mystack.push(40);
//     mystack.push(50);

//     cout<<"\nStack element display after push element : "<<endl;

//     mystack.display();

//     cout<<"\nPusing element after fulling stack : "<<endl;

//     mystack.push(50);

//     cout<<"\nPop element : "<<endl;

//     mystack.pop();

//     cout<<"\nStack Element : "<<endl;

//     mystack.display();
    

//     cout<<"Stack is empty or not : "<<(mystack.isEmpty()?"YES" : "NOT")<<endl;

//     mystack.push(100);
   

//     cout<<"Stack is full or not : "<<(mystack.isFull() ? "YES" : "NOT")<<endl;

//     mystack.push(200);

//     cout<<"Size of stack : "<<mystack.size()<<endl;
// }




