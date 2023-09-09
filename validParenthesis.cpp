#include<iostream>
#include<stack>
using namespace std;
bool isvalid(string str){
    stack <char> s;
    bool ans =true;
    for (int i = 0 ;i <str.length();i++){
        if ( str[i] == '(' || str[i] == '{' || str[i]=='[')
        {
            s.push(str[i]) ;
        }
        else if(str[i]==')'){
            if (!s.empty() && (s.top() == '(' ) ){
                s.pop();
       }
       else {
        return ans=false;
       break;
       }
     }
     else if(str[i]=='}'){
            if (!s.empty() && (s.top() == '{' ) ){
                s.pop();
       }
       else {return ans=false;
       break;
       }
     }
     else if(str[i]==']'){
            if (!s.empty() && (s.top() == '[' ) ){
                s.pop();
       }
       else {return ans=false;
       break;
       }
     }
     
  }
  if(!s.empty()){
    return false;
  }
  return ans;

}
int main(){
    string s;
    cout<<"Enter any combination of parenthesis to chrck validation s =";
    cin>>s;
    for(int i=0;i<s.length();i++){
    if(s[i]=='(' || s[i]=='{' || s[i]=='[' || s[i]==')' || s[i]=='}' || s[i]==']'){
        if(isvalid(s)){
        cout<<"Valid string"<<endl;
        break;
    }
    else{
        cout<<"Invalid string"<<endl;
        break;
    }
    }
    else{
        cout<<"Give brackets to check !!"<<endl;
        break;
    }
    }
    
 
    return 0;

}