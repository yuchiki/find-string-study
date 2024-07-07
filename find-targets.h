#include<string>
#include<vector>
#include<functional>

using namespace std;

// 対象文字列の一覧を targets で受け取る。 それぞれの対象文字列について、input中に出現する位置を全てcallbackに通知する。
// callback は、対象文字列と、その文字列が出現する位置を引数に取る。
// callbackが呼ばれる順番は不同であってもよい。
void find_targets(const string input, const vector<string> targets, std::function<void(string, int)> callback);
 