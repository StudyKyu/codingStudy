#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int n) {
    vector<int> answer;

    bool flag = arr.size() % 2 == 0 ? true : false;
    for (int i = 0; i < arr.size(); ++i) {
        if (flag) {
            if (i & 1)
                answer.push_back(arr[i] + n);
            else
                answer.push_back(arr[i]);
        }
        else {
            if (i & 1)
                answer.push_back(arr[i]);
            else
                answer.push_back(arr[i]+n);
        }
    }

    return answer;

    /*for (int i = (arr.size() + 1) % 2; i < arr.size(); i += 2)
        arr[i] += n;
    return arr;*/
}

int main()
{
    vector<int> vec = {49, 12, 100, 276, 33};

    vector<int> result = solution(vec, 27);

    for (int n : result) {
        cout << n << " ";
    }

}
