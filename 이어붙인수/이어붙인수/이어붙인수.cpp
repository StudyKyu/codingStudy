#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;

    int even = 0, holes = 0;
    for (int i = 0; i < num_list.size(); ++i) {
        if (num_list[i] % 2 == 0) {
            even *= 10;
            even += num_list[i];
        }
        else {
            holes *= 10;
            holes += num_list[i];
        }
    }

    answer = even + holes;

    return answer;
}

int main()
{
    vector<int> value = {3, 4, 5, 2, 1};
    int result = 0;
    result = solution(value);

    cout << result << "\n";
    return 0;
}
