#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int cnt[1000] = {0};
    
    for (int x : array) {
        cnt[x]++;
    }
    
    int maxCnt = 0;
    int answer = -1;
    bool duplicate = false;
    
    for (int i = 0; i < 1000; i++) {
        if (cnt[i] > maxCnt) {
            maxCnt = cnt[i];
            answer = i;
            duplicate = false;
        }
        else if (cnt[i] == maxCnt && cnt[i] != 0) {
            duplicate = true;
        }
    }

    if (duplicate) {
        return -1;
    }
    
    return answer;
}
