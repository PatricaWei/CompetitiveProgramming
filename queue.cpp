#include <iostream>
#include <queue>
using namespace std;

int main()
{
   queue<int> q;

   int queueTerm3;

   int n;
   cin>>n;

   for(int i=0; i < n; i++)
   {
      int op;
      cin>>op;
      if(op == 1)
      {
         int second;
         cin>>second;
         q.push(second);
      }
      else if(op == 2)
      {
         q.pop();
      }
      else
      {
         queueTerm3 = q.front();
         cout << queueTerm3 << " ";
      }
   }
}
