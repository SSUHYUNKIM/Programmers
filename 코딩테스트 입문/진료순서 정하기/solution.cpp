#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    vector<int> sorted = emergency;

    sort(sorted.begin(), sorted.end(), greater<int>());

    for (int x : emergency) {
        int rank = find(sorted.begin(), sorted.end(), x) - sorted.begin() + 1;
        answer.push_back(rank);
    }
    
    return answer;
}
