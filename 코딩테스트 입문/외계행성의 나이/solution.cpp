#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    string s = to_string(age);
    
    for (char c : s) {
        answer += (c - '0') + 'a';
    }
    
    return answer;
}
