#include<iostream>
#include<stack>
#include<algorithm>
#include<cstring>

using namespace std;

int precedence(char op) {
    if (op == '+' || op == '-') return 1; 
    if (op == '*' || op == '/') return 2; 
    if (op == '^') return 3;              
    
    return 0; 
};


bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' );
};


string infix_postfix(string infinix){
    int n= infinix.length();
    string postfix= "";
    stack<char> st;
   
     
   for (int  i = 0; i <n; i++)
   {
   char c = infinix[i];

  if (isalnum(c))
   {
    postfix +=c;
   }

   else if(c=='('){
    st.push(c);
   }

   
   else if(c==')'){
    while( !st.empty() && st.top()!='('){
        postfix+= st.top();
        st.pop();

    }
      st.pop(); //also pop the opens bracket after the loops ends.
   }

   else if(isOperator(c)){
    while(!st.empty() && precedence(st.top())>=precedence(c)){
        postfix+=st.top();
        st.pop();

    }
        st.push(c); //add the smaalest presedence operator to the stack .

   }
   
   }//forloop end 
   
while (!st.empty())  //for left operators.
{
   postfix+=st.top();
   st.pop();

}
return postfix;

}




int main(){
    string infinix="3+2*(3+9)";
    cout<<"you entered "<<infinix<<endl;
    cout<<"enter the prefix u wanna to change in the postfix expression's below:"<<endl;
    string postfix= infix_postfix(infinix);
    cout<<"The ouput is : "<<postfix<<endl;


    return 0;

}
