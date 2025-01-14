
#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int>q;

    // push()

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    // front()

    cout<<"Front element in queue : "<<q.front()<<endl;


    // pop()

    q.pop();

    cout<<"After pop, front element : "<<q.front()<<endl;


    // back()

    cout<<"Last element of queue : "<<q.back()<<endl;

    // size()

    cout<<"Size of queue : "<<q.size()<<endl;

    // empty()

    //  q.pop();
    //  q.pop();
    //  q.pop();
    //  q.pop();

    cout<<"Queue is empty or not : "<<q.empty()<<endl;


    // display()

    cout<<"Display the element of Queue : "<<endl;

    while(!(q.empty())){

        cout<<q.front()<<" ";
        q.pop();
    }
}


