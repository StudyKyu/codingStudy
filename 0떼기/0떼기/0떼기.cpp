#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string n_str) {

    /*string answer = to_string(stoi(n_str));*/
    string answer = "";

    bool flag = false;
    for (int i = 0; i < n_str.size(); ++i) {
        

        if (n_str[i] != '0')
            flag = true;
    }
    return answer;
}

int main()
{
    
}