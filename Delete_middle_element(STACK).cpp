

#include <bits/stdc++.h>
using namespace std;
void sol(stack<int>&st,int n,int count)
{
   if(count==n/2) { st.pop(); return;}
   int num=st.top();
   st.pop();
   sol(st,n,count+1);
   st.push(num);

}
int main()
{
    stack<int> st;
    st.push(3);
    st.push(5);
    st.push(9);
    st.push(2);
    st.push(4);
    int count=0;
    int n=st.size();
    
    sol(st,n,count);

    while(!st.empty())
    {
     cout<<st.top();
      st.pop();
    }
    


}
