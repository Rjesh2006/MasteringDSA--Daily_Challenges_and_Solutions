#include <iostream>
#include <stack>

using namespace std;


int valid_parenthesis(string &str ){
    if (str.length() % 2 != 0) {
    return -1;
}
    stack<char> st;
    
    for (int i = 0; i < str.length(); i++)
    {

       char ch= str[i];
       if (ch=='{')
       {
       st.push(ch);

       }else{
                //if th ch would be the closed bracket then we will searchd for the open bracket herr .

                if(!st.empty() && st.top()=='{'){
                    st.pop();

                } else{
                    st.push(ch);
                    }

            }
 
    }
    int a=0;
    int b=0;
    while (!st.empty())
    {   
        if(st.top()=='{'){
            b++;


        }
        else{
            a++;
        }
          st.pop();
    }
int ans_possible_perfect_cases = (b + 1) / 2 + (a + 1) / 2;
return ans_possible_perfect_cases;

}


int main() {
string str = "{{{{}}";
int result = valid_parenthesis(str);
cout << "Minimum number of reversals needed: " << result << endl;
 return 0;
 }