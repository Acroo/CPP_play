#include <iostream>
#include <stack>
#include <queue>
#include <deque>

using namespace std;

int main() {

    cout << "DEQUEUE" << " ";
    deque<int> transactions;

    transactions.push_front(100);
    transactions.push_front(300);

    transactions.push_back(500);
    transactions.push_back(800);

    for (int i = 0; i < transactions.size(); ++i) {
        cout << transactions[i] << " " ;
    }
    cout << endl;

    cout << "STACK" << " ";
    stack<int> mystack;
    mystack.push(100);
    mystack.push(200);
    mystack.push(300);
    mystack.push(400);

    while(!mystack.empty()) {
        cout << mystack.top() << " ";
        mystack.pop();
    }
    cout << endl;

    cout << "QUEUE" << " ";
    queue<int> myqueu;
    myqueu.push(100);
    myqueu.push(200);
    myqueu.push(300);
    myqueu.push(400);

    while(!myqueu.empty()) {
        cout << myqueu.front() << " ";
        myqueu.pop();
    }
    cout << endl;

    cout << "PRIORITY" << " ";
    priority_queue<int> pqueue;
    pqueue.push(200);
    pqueue.push(600);
    pqueue.push(100);
    pqueue.push(400);
    pqueue.push(40);
    pqueue.push(3000);

    while (!pqueue.empty()) {
        cout << pqueue.top() << " ";
        pqueue.pop();
    }
    cout << endl;

    return 0;
}