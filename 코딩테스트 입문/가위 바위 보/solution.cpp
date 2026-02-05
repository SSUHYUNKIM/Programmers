#include <string>
#include <unordered_map>

using namespace std;

string solution(string rsp) {
    unordered_map<char, char> m = {
        {'2', '0'}, {'0', '5'}, {'5', '2'}
    };

    for (char& c : rsp) {
        c = m[c];
    }

    return rsp;
}
