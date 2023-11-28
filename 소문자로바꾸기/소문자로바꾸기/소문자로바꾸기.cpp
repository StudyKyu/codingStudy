#include <iostream>
#include <cctype>
using namespace std;

string solution(string myString) {

    string answer;
    
    for (int i = 0; i < myString.size(); ++i) {
        if (myString[i] - '0' <= 43) {
            answer += (char)(myString[i]+32);
        }
        else {
            answer += (char)(myString[i]);
        }
    }

    /*for (char c : myString) {
        answer += tolower(c);
    }*/

    return answer;
}

int main()
{
    string result = "aBcDeFg";

    string myString = solution(result);

    cout << myString << endl;

    return 0;
}