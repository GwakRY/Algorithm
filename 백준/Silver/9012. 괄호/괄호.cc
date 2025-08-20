#include <iostream>
#include <stack>
using namespace std;
int n;
string cmd;

bool sol(){
    stack <int> s;
    cin >> cmd;
        for(int i=0; i< cmd.size(); i++){
            if(cmd[i]=='('){
                s.push('(');
            }  
            else{
                if(s.empty()){
                    return false;
                }
                else{
                    s.pop();
                }
            }

        }
        if(s.empty() == false){
        return false;
    }
        return true;
    
}


int main(){
    cin >> n;
    while(n--){
        if(sol()){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
        cout << "\n";
    }
}