#include<iostream>
#include<stack>
#include<queue>
#include<cstring>
#include<map>
#include<vector>

using namespace std;



string  first_non_repeated_char(string str){
    queue<char> q;
    map<char, int> count;
    int n = str.length();
   string ans;

    for (int i = 0; i < n; i++) {
        count[str[i]]++;
        q.push(str[i]);

        while (!q.empty()) {
            if (count[q.front()] > 1) {
                q.pop();
            } else {
                ans.push_back(q.front());
                break;
            }
        }

        ans.push_back('#');
    }

    return ans ;

   
}


int main(){
    string a = "swiss";
    string result = first_non_repeated_char(a);
    cout << "First non-repeated character: " << result << endl;
    return 0;
}