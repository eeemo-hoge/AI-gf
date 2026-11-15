#include <iostream>
#include <string>
using namespace std;

void mathfunction();

void normalfunction(){
    cout << "how are you?" << endl;
    cout << "call math ? yes/no" << endl;
    string input;
    getline(cin, input);
    if (input == "yes") {
        mathfunction();
    } else if (input == "no") {
        cout << "How are you?" << endl;
        getline(cin, input);
        if (input == "hi") {
            cout << "Hello!" << endl;
        } else if (input == "bye") {
            cout << "Goodbye!" << endl;
        } else if (input == " what about you ?") {
            cout << "I'm good, thank you!" << endl;
        } else if (input == "how are you?") {
            cout << "I'm good, thank you!" << endl;
        } else if (input == "what about you?") {
            cout << "I'm good, thank you!" << endl;
        } else if (input == "did you eat?") {
            cout << "Yes, I did!" << endl;
            cout << "What did you eat?" << endl;
            getline(cin, input);
            if (input == "what did you eat?") {
                cout << "I had a meal!" << endl;
            } else {
                cout << "I don't understand." << endl;
            }
        } else {
            cout << "I don't understand." << endl;
        }
    }
    cout << "how did your day go?" << endl;
    getline(cin, input);
    if (input == "good") {
        cout << "That's great to hear!" << endl;
    } else if (input == "bad") {
        cout << "I'm sorry to hear that." << endl;
    } else {
        cout << "I don't understand." << endl;
    }
    cout << "what are your plans for tomorrow?" << endl;
    getline(cin, input);
    if (input == "work") {
        cout << "Good luck with your work!" << endl;
    } else if (input == "rest") {
        cout << "Enjoy your rest!" << endl;
    } else {
        cout << "I don't understand." << endl;
    }
    cout << "do you have any hobbies?" << endl;
    getline(cin, input);
    if (input == "yes") {
        cout << "That's great!" << endl;
    } else if (input == "no") {
        cout << "Maybe you can find one soon!" << endl;
    } else {
        cout << "I don't understand." << endl;
    }
}

void mathfunction(){
    int a, b;
    char op;
    while (true) {
        if (!(cin >> a >> op >> b)) {
            cout << "Invalid expression." << endl;
            return;
        }
        if (op == '+') {
            cout << (a + b) << endl;
        } else if (op == '-') {
            cout << (a - b) << endl;
        } else if (op == '*') {
            cout << (a * b) << endl;
        } else if (op == '/') {
            if (b != 0) {
                cout << (a / b) << endl;
            } else {
                cout << "Division by zero!" << endl;
            }
        } else {
            cout << "I don't understand." << endl;
        }
    }
}

int main() {
    normalfunction();
}