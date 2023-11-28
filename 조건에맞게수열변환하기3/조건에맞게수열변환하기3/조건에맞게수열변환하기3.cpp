#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;

    if(k % 2 == 0) {
        for (int i : arr) {
            answer.push_back(i + k);
        }
    }
    else {
        for (int i : arr) {
            answer.push_back(i * k);
        }
    }

    return answer;
}

int main()
{
    vector<int> vec = {1, 2, 3, 100, 99, 98};
    vector<int> result = solution(vec, 3);

    for (int i : result) {
        cout << i << ' ';
    }

    return 0;
}
