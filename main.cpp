#include <iostream>
#include <vector>
#include <string>
#include <fstream>

#include "find-targets.h"

using namespace std;

vector<string> read_targets() {
    vector<string> targets;
    ifstream ifs("targets.txt");
    string line;
    while (getline(ifs, line)) {
        targets.push_back(line);
    }
    return targets;
}

string read_input() {
    ifstream ifs("input.txt");
    return string((istreambuf_iterator<char>(ifs)), istreambuf_iterator<char>());
}

void call_back_print(string target, int position) {
    cout << "Found target: " << target << " at position: " << position << endl;
}

int main() {
    string input = read_input();
    vector<string> targets = read_targets();

    find_targets(input, targets, call_back_print);
}
