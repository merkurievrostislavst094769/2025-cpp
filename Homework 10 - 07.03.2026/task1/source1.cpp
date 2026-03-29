#include <iostream>
using namespace std;

class ArrayList {
private:
    int* data;
    int size;
    int capacity;

    void resize() {
        capacity *= 2;
        int* newData = new int[capacity];
        for (int i = 0; i < size; i++) {
            newData[i] = data[i];
        }
        delete[] data;
        data = newData;
    }

public:
    ArrayList(int cap = 4) {
        capacity = cap;
        size = 0;
        data = new int[capacity];
    }

    ~ArrayList() {
        delete[] data;
    }

    void add(int value) {
        if (size == capacity) {
            resize();
        }
        data[size++] = value;
    }

    int get(int index) {
        if (index < 0 || index >= size) {
            throw out_of_range("Index out of range");
        }
        return data[index];
    }

    void set(int index, int value) {
        if (index < 0 || index >= size) {
            throw out_of_range("Index out of range");
        }
        data[index] = value;
    }

    void remove(int index) {
        if (index < 0 || index >= size) {
            throw out_of_range("Index out of range");
        }

        for (int i = index; i < size - 1; i++) {
            data[i] = data[i + 1];
        }
        size--;
    }

    int getSize() {
        return size;
    }

    void print() {
        for (int i = 0; i < size; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }

    //task2

    void insert(int index, int value) {
        if (index < 0 || index > size) {
            throw out_of_range("Index out of range");
        }

        if (size == capacity) {
            resize();
        }

        for (int i = size; i > index; i--) {
           data[i] = data[i - 1];
        }

        data[index] = value;
        size++;
}


    void clear() {
        size = 0;
    }
    bool contains(int value) {
        for (int i = 0; i < size; i++) {
            if (data[i] == value) {
                return true;
            }
        }
        return false;
    }
};