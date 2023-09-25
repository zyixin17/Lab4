#ifndef DEQUE_H
#define DEQUE_H

class deque {
    private:
        int *data;
        int size;
        int capacity;
    public:
        deque();
        ~deque();
        void push_front(int value);
        void push_back(int value);
        int pop_front();
        int pop_back();
        int peak_front();
        int peak_back();
        void remove_all();
};

#endif /* DEQUE_H */