#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;


bool issafe (int size, vector<vector<int> >maze, vector<vector<int> >visited, vector<string> ans, string path, int x, int y){
  return  ((visited[x][y]==0) && (maze[x][y]==1) && (x>=0) && x<size && y>=0 && y<size);
  
  
}

void solve(int size, vector<vector<int> >&maze, vector<vector<int> >&visited, vector<string> &ans, string &path, int x, int y){
    if (x==size-1 && y==size-1)
    {
      ans.push_back(path);
      return ;
    }
    if (!issafe(size,maze,visited,ans,path,x,y))
    {
        return ;

    }

    visited[x][y]=1;

  //giving direction to the rat

       //for up
    if (issafe(size,maze,visited,ans,path,x-1,y))
    {       path.push_back('U');
        solve(size,maze,visited,ans,path,x-1,y);
        path.pop_back();

        
    }
    
    
           //for down

      if (issafe(size,maze,visited,ans,path,x+1,y))
    {      path.push_back('D');
        solve(size,maze,visited,ans,path,x+1,y);
        path.pop_back();

        
        
    }
    
           //for left


      if (issafe(size,maze,visited,ans,path,x,y-1))
    {          path.push_back('l');
        solve(size,maze,visited,ans,path,x,y-1);
                 path.pop_back();

        
    }
    
           //for right


      if (issafe(size,maze,visited,ans,path,x,y+1))
         path.push_back('R');
    {     
        solve(size,maze,visited,ans,path,x,y+1);
         path.pop_back();
        
        
    }

    visited[x][y]=0;

    

}



int main(){
    int size;
    cout<<"enter the size here :";
    cin>>size;

    vector<vector<int> >maze_tavez(size,vector<int>(size));
    cout<<"enter the elements for the maze hre :"<<endl;
    for ( int i = 0; i < size; i++)
    {
       for (int j=0;j<size;j++)
       {
        cin>>maze_tavez[i][j];

       }
       
    }

    vector<vector<int> >visited(size,vector<int>(size));
     for ( int i = 0; i < size; i++)
    {
       for (int j=0;j<size;j++)
       {
          visited[i][j]=0;

       }
       
    }

    vector<string>ans;
    string path=" ";

    if (maze_tavez[0][0]==1)
    {
    solve(size,maze_tavez,visited,ans,path,0,0);
    }

    sort(ans.begin(),ans.end());
cout<<"here is ur path to get that destination :"<<endl;

    
    for (const string& str : ans) {
        cout << str << endl;
    }
    return 0;

}