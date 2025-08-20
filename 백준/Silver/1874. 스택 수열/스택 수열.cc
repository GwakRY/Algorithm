#include <iostream>
#include <stack>
using namespace std;

int n;
stack<char> s;
stack<int> s_count;
int total_plus_count = 0;

bool sol(){
    cin >> n;
    int current_num =1;

    for(int i = 0; i<n; i++){
        int num;
        cin >> num;
        while(current_num <= num){
            s.push('+');
            s_count.push(current_num);
            current_num++;
        }
        if(!s_count.empty() && s_count.top()==num){
            s.push('-');
            s_count.pop();
        }
        else return false;
       
    }  
    return true;

}

int main() {
    if (sol()) {
        stack<char> s2;
        // 스택에 쌓인 연산(+, -)을 역순으로 출력하기 위해 재스택
        while (!s.empty()) {
            s2.push(s.top());
            s.pop();
        }
        while (!s2.empty()) {
            cout << s2.top() << "\n";
            s2.pop();
        }
    } else {
        cout << "NO";
    }
}
