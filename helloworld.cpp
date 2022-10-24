#include <iostream>
#include <string>

using namespace std;

void changeInt(int &i)
{
    i = i + 1;
}

void print(string s)
{
    cout << s << endl;
}

void print(int i)
{
    cout << i << endl;
}

void writeTo(string &s)
{
    cin >> s;
}

void printInBrackets(const char *c);

void oldStuff()
{
    string s = "Hello world! 123";
    cout << s << endl;
    int a = 8;
    int *b = &a;
    changeInt(a);
    cout << "A = " << a << endl;
    cout << "B = " << b << endl;
    print("*B =" + to_string(*b));
    print(99);
    string name;
    writeTo(name);
    print("Hello " + name);
    printInBrackets("Brackets");
}

void doArrayStuff()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int arr2[5];
    for (int i = 0; i < 5; i++) {
        arr2[i] = arr[4-i];
        cout << arr2[i] << endl;
    }
    cout << endl;
}

int main()
{
    // oldStuff();
    doArrayStuff();
    return 0;
}