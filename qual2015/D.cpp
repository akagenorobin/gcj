#include<cmath>
#include<cstdlib>
#include<string>
#include<sstream>
#include<vector>
#include<iostream>
#include<queue>
#include<deque>
#include<map>
#include<set>
#include<stack>
#include<list>
#include<algorithm>
using namespace std;

int main(){
  int T;
  cin >> T;
  for(int t=1; t<=T; t++){
    bool ans = true;
    int X,R,C;
    cin >> X >> R >> C;
    if(R*C<=X || (R*C)%X!=0) ans = false;
    if(X>max(R,C)) ans = false;
    if(ans) cout << "Case #" << t << ": GABRIEL" << endl;
    else cout << "Case #" << t << ": RICHARD" << endl;
  }
}

