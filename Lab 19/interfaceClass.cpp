#include <iostream>

class Stack{
    public:
        virtual ~Stack() {}

        virtual bool push(const int element) = 0;
        virtual bool pop(int &element)= 0;
        virtual bool top(int &element) const = 0;
};

class ArrayStack : public Stack{
    private:
        int *data;
        int topIndex;
        int size;

    public:
        ArrayStack(int size);

        virtual bool push(const int element);
        virtual bool pop(int &element);
        virtual bool top(int &element) const;
};


ArrayStack::ArrayStack(int size)
    :size(size),topIndex(-1), data(new int[size]){}

bool ArrayStack::push(const int element){
    if(topIndex<size - 1){
        topIndex++;
        data[topIndex]=element;
        return true;
    }
    else{
        return false;
    }
}

bool ArrayStack::pop(int &element) {
    if (topIndex >= 0) {
        element = data[topIndex];
        topIndex--;               
        return true;
    } else {
        return false;
    }
}

bool ArrayStack::top(int &element) const{
    if (topIndex >= 0) {
        element = data[topIndex];
        return true;
    }
    else{
        return false;
    }
}


    
