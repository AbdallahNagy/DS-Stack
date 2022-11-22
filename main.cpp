#include <iostream>
using namespace std;

class Stack
{
private:
    int* arr;
    int tos;
    int Size;
public:
    Stack()
    {
        tos = 0;
        Size = 5;
        arr = new int[5];
    }
    Stack(int _size)
    {
        tos = 0;
        Size = _size;
        arr = new int[Size];
    }
    ~Stack()
    {
        delete[] arr;
    }
    void push(int num)
    {
        if(!Full())
        {
            arr[tos] = num;
            tos++;
        }else
        {
            cout << "stack is full" <<endl;
        }
    }
    void pop()
    {
        if(!Empty())
        {
            tos--;
            arr[tos] = -99; //rubish
        }else
        {
            cout << "stack is empty" << endl;
        }
    }
    bool Full()
    {
        return tos == Size;
    }
    bool Empty()
    {
        return tos == 0;
    }
    void print()
    {
        for(int i=0; i<tos; i++)
        {
            cout << arr[i]<<endl;
        }
    }
};


int main()
{

    return 0;
}
