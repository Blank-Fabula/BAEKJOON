#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void resultNum(vector<int>&);
int main(int argc, char** argv) {
    int N; cin >> N;
    vector<int> v_Nums(N);
    for (int i = 0; i < N; ++i) {
        cin >> v_Nums[i];
    }
    resultNum(v_Nums);
return 0; }

bool compare(string, string);
void resultNum(vector<int>& v_Nums) {
    vector<string> v_str_Nums;
    for (int num : v_Nums) {
        v_str_Nums.push_back(to_string(num));
    }
    sort(v_str_Nums.begin(), v_str_Nums.end(), compare);
    string str_Result;
    for (string str_Num : v_str_Nums) {
        str_Result += str_Num;
    }
    if (str_Result[0] == '0') { cout << '0';
    } else { cout << str_Result; }
return; }

bool compare(string a, string b) {
return a + b > b + a; }
