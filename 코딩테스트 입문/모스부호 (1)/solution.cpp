#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(string letter) {
    string answer = "";
    string token = "";
    unordered_map<string, char> morse = {
        {".-", 'a'}, {"-...", 'b'}, {"-.-.", 'c'}, {"-..", 'd'}, {".", 'e'},
        {"..-.", 'f'}, {"--.", 'g'}, {"....", 'h'}, {"..", 'i'}, {".---", 'j'},
        {"-.-", 'k'}, {".-..", 'l'}, {"--", 'm'}, {"-.", 'n'}, {"---", 'o'},
        {".--.", 'p'}, {"--.-", 'q'}, {".-.", 'r'}, {"...", 's'}, {"-", 't'},
        {"..-", 'u'}, {"...-", 'v'}, {".--", 'w'}, {"-..-", 'x'}, {"-.--", 'y'},
        {"--..", 'z'}
    };
    
    for (char c : letter) {
        if (c == ' ') {
            answer += morse[token];
            token.clear();
        } else {
            token += c;
        }
    }
    
    answer += morse[token];
    
    return answer;
}
