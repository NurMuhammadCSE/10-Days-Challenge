#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer;
        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0 and i % 5 == 0) {
                answer.push_back("FizzBuzz");
            } else if (i % 3 == 0) {
                answer.push_back("Fizz");
            } else if (i % 5 == 0) {
                answer.push_back("Buzz");
            } else {
                answer.push_back(to_string(i));
            }
        }
        return answer;
    }
};

vector<string> fizzBuzz(int n) {
    vector<string> result;
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0) result.push_back("FizzBuzz");
        else if (i % 3 == 0) result.push_back("Fizz");
        else if (i % 5 == 0) result.push_back("Buzz");
        else result.push_back(to_string(i));
    }
    return result;
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    vector<string> result = fizzBuzz(num);
    for (string s : result) {
        cout << s << endl;
    }
    return 0;
}