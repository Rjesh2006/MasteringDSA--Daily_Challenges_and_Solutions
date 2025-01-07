#include<iostream>
using namespace std;
#include<stack>
#include<vector>



vector<int> smaller_finder(vector<int> &arr){
    vector<int> ans(arr.size(),-1); 
    int n = arr.size()-1;
    int curr;
    stack<int> st;
    st.push(-1);

    for (int  i = n; i>=0; i--)
    {
        curr= arr[i];
        while(!st.empty() && st.top()>=curr){
            st.pop();
        }
        ans[i]=st.top();
        st.push(curr);


        
    }
    return ans;

    
}




int main(){
    vector<int> arr={1,3,9,5,7,6,10};
    vector<int> final_ans= smaller_finder(arr);
    for (int i = 0; i < final_ans.size(); i++)
    {
        cout<<final_ans[i]<<" ";
    }

    return 0;

}
