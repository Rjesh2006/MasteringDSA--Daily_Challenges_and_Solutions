#include <iostream>
#include <stack>
#include <string>   
using namespace std;


bool valid_parenthesis(string expression){
    stack<char> st;
for (int  i = 0; i < expression.length(); i++){
    char ch = expression[i];
      if (ch == ' ') {
            continue;
        }
    if (ch=='('||ch=='{'||ch=='[')
    {
        st.push(ch); 
    }
    else{
        if(!st.empty()){
            if(ch==')'&&st.top()=='('|| ch=='}'&&st.top()=='{'||ch==']'&&st.top()=='['){
                st.pop();
        }else{
            cout<<"not mathcig "<<endl;
            return false ;
        }
        
    }else{
        cout<<"'here we have the stack is empty thats why its false"<<endl; 
        return false;
    }

    }

}

if(st.empty()){
    return true;
}
else{
    return false;
}
}
int main(){
   string expresssion= " {(([))} ";
    if(valid_parenthesis(expresssion)){
         cout<<"valid parenthesis"<<endl;
    }
    else{
         cout<<"invalid parenthesis"<<endl;
    }






return 0;
}
