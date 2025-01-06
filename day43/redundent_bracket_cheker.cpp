#include <iostream>
#include <stack>
using namespace std;


bool redundent_bracket(string  &str){
   int size= str.size();
   stack<char> st;
   for (int i = 0; i < size; i++)
   {
    char ch= str[i];
    if(ch=='('||ch=='+' ||ch=='-'||ch=='*'||ch=='/'){
      st.push(ch);

   }
   else{
      if(ch==')'){
        bool iserdundent=true;
        if(!st.empty()){
                while (st.top()!='(')
                {
                    if(st.top()=='+'||st.top()=='-'||st.top()=='*'||st.top()=='/'){
                    iserdundent=false;
                    }
                    st.pop();

                }
        }

     if(iserdundent==true){
        return true;
     }

     st.pop();


           }

   }
  
}//end of for loop


return false;


}






int main(){
string st="((4+2))";
if(redundent_bracket(st)){
    cout<<"yes we have the redundent bracket here"<<endl;
}
else{   cout<<"its not  redeundent bracket"<<endl;
}


    return 0;

}
