#include <iostream>
#include <cstring>
using namespace std;

class string_manip {
public:
    char s1[20], s2[20];

public:
    string_manip(char x[], char y[]) {
        strcpy(s1, x);
        strcpy(s2, y);
    }

    void show() {
        cout << "concatenation = " << s1 << endl;
    }

    void operator+() {
        strcat(s1, s2);
    }
};

int main() {
    string_manip obj("good", "morning");
    obj.show();
    +obj;
    obj.show();
    return 0;
}
