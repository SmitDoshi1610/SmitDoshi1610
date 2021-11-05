#include <iostream>
using namespace std;
#define n 10
class queue
{

    int *arr;
    int front;
    int rear;

public:
    queue()
    {
        arr = new int[n];
        front = -1;
        rear = -1;
    }

    void enqueue(int x)
    {

        if (rear == n - 1)
        {

            cout << "Queue is OverFlow" << endl;
            return;
        }
        rear++;
        arr[rear] = x;

        if (front == -1)
        {
            front++;
        }
    }

    void dequeue()
    {

        if (front == -1 || front > rear)
        {
            cout << "Queue is Undelflow" << endl;
            return;
        }
        front++;
    }

    int peep()
    {

        if (front == -1)
        {
            cout << "No Element Found" << endl;
            return -1;
        }
        return arr[front];
    }

    bool empty()
    {

        if (front == -1 || front > rear)
        {

            return true;
        }
        return false;
    }
};

int main()
{
    queue q;
    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(15);
    q.enqueue(20);
    q.enqueue(25);
    cout << q.peep() << endl;
    q.dequeue();
    cout << q.peep() << endl;
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    cout << q.peep() << endl;

    return 0;
}