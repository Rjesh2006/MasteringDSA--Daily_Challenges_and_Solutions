#include<iostream>
using namespace std;
#include<stack>
#include<vector>
vector<int>  next_smaller_finder(vector<int>arr, int n ){
    vector<int> ans(n,-1);
    stack<int> st;
    st.push(-1);
        for(int i = n-1; i>=0; i--){
        while ((st.top()!=-1) && (arr[st.top()]>=arr[i]))
        {
            st.pop();
        }
        
           ans[i]=st.top();
           st.push(i);

        }
        return ans ;

        
}


vector<int> prev_smaller_finder(vector<int> arr, int n){
        vector<int> ans(n,-1);
    stack<int> st;
    st.push(-1);
        for(int i = 0; i<n; i++){
        while ((st.top()!=-1) && (arr[st.top()]>=arr[i]))
        {
            st.pop();
        }
        
           ans[i]=st.top();
           st.push(i);

        }
        return ans ;
}



int largest_recangular_area(vector<int> &height ){
    int n =height.size();
    vector<int> next(n);
    next=next_smaller_finder(height,n);
    

    vector<int>prev(n);
    prev=prev_smaller_finder(height,n);
    int area= INT_MIN;
    for (int i = 0; i < n; i++)
    {
        next[i]=next[i]-prev[i]-1;
        if(next[i]==-1){
            next[i]=n;
        }
        int new_area = height[i]*next[i];
        area=max(area,new_area);
    }
    return area;
}


int main() {
    vector<int> arr = {2, 1, 5, 6, 2, 3};
   int  result = largest_recangular_area(arr);
    cout << "The largest rectangular area is: " << result << endl;
    return 0;
}
