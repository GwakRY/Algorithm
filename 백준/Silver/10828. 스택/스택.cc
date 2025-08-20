#include <iostream>
#include <stack>
using namespace std;

int n;
string cmd;
stack<int> s;

int main(){
    cin >> n;
    while(n--){
        cin >> cmd;
        if(cmd == "push"){
            int num;
            cin >> num;
            s.push(num);
        }
        else if(cmd == "pop"){
            if(s.empty()) cout << "-1";
            else{
                cout << s.top();
                s.pop();
            }
            cout << "\n";
        }
        else if(cmd == "size"){
            cout << s.size() << "\n";
        }
        else if(cmd == "empty"){
            if(s.empty()) cout << "1";
            else cout << "0";
            cout <<"\n";
        }
        else if(cmd == "top"){
            if(s.empty()) cout << "-1";
            else cout << s.top();
             cout << "\n";
        }
    }
    return 0;
}