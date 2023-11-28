#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(int start, int end_num) {
    vector<int> result;
    for (int i = start; i >= end_num; --i) {
        result.push_back(i);
    }

    return result;
}

int main()
{
    int start_num = 10;
    int end_num = 3;

    vector<int> result = solution(start_num, end_num);
    for (const auto& value : result)
    {
        cout << value << "\n";
    }

    return 0;
}