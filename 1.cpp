#include <iostream>
#include <vector>
using namespace std;

template<typename T>
class Stack {
    public:
        int size() const;
        bool isEmpty() const;
        const T& top() const;
        void pop();
        void push(const T& ob);

        vector <T> v;
};
//change
template<typename T> bool Stack<T>::isEmpty() const
{
    return (v.empty());
}

template<typename T> const T& Stack<T>::top() const
{
    if(isEmpty()) cout<< "Stiva este goala!\n";
            return v.back();
}

template<typename T> void Stack<T>::push(const T& ob)
{
    v.push_back(ob);
}

template<typename T> void Stack<T>::pop()
{
    if(isEmpty()) cout<<"Stiva este goala!\n";
    v.pop_back();
}

int main() {
    Stack <int> st;
    Stack<float> st2;
    Stack<char> st3;

    for(int i = 1; i <= 5; i++)
            st.push(i);

    st2.push(3.4);
    st2.push(2.15);

    st3.push('c');
    st3.push('b');

    cout<<"stiva 1:"<<endl;
    while(!st.isEmpty()) {
        cout<<st.top()<<"\n";
        st.pop();}

    cout<<"stiva 2"<<endl;
    while(!st2.isEmpty()) {
        cout<<st2.top()<<"\n";
        st2.pop();
    }
    cout<<"stiva 3:"<<endl;
    while(!st3.isEmpty()) {
        cout<<st3.top()<<"\n";
        st3.pop();}

return 0;
}
