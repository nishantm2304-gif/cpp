#include <iostream>
using namespace std;

class unary_with_friend {
public:
    int a;

public:  unary_with_friend(int x) {
        a = x;
    }

public:    void show() {
        cout << "unary with friend " << a << endl;
    }

    friend unary_with_friend operator-(unary_with_friend &obj);
};

unary_with_friend operator-(unary_with_friend &obj) {
    obj.a = -obj.a;
    return obj;
}

int main() {
    unary_with_friend obj(10);
    obj.show();

   -obj;
    obj.show();

    return 0;
}