#include <iostream>
#include <stack>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count=0;
    while(n--){
        string str;
        cin >> str;
         stack<char>s;
        for(char c : str){
           
            if(s.empty())s.push(c);
            else if(s.top()==c){
                s.pop();
            }
            else s.push(c);
            
        }
        if(s.empty())count ++;
    }
    cout << count;
}