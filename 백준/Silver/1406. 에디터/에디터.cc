#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<char>left;
    stack<char>right;
    string str;
    cin >> str;
    for(int i =0; i<str.size();i++){
        left.push(str[i]);
    }
    int n;
    cin>>n;
    while(n--){
        char cmd;
        cin>>cmd;
        if(cmd =='L'){
             if(!left.empty()){
                int num = left.top();
                left.pop();
                right.push(num);
             }
        }
        else if(cmd=='D'){
            if(!right.empty()){
                int num = right.top();
                right.pop();
                left.push(num);
            }
            
        }
        else if(cmd =='B'){
            if(!left.empty())
            {
                left.pop();
            }
        }
        else if(cmd=='P'){
            char c;
            cin>>c;
            left.push(c);
        }
    }
    while(!left.empty()){
        int num = left.top();
        right.push(num);
        left.pop();
    }
    while(!right.empty()){
        cout << right.top();
        right.pop();
    }
    
    //left 역순, right 순서대로 pop

}