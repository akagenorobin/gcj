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
    int B,N;
    cin >> B >> N;
    vector<int> M;
    M.resize(B);
    for(int i=0; i<B; i++) cin >> M[i];

    vector<int> clock;
    clock.resize(B);
    for(int i=0; i<B; i++) clock[i] = 0;
    int ans;
    vector<int> v;
    for(int n=0; n<N; n++){
      int cmin = pow(10,9);
      for(int i=0; i<B; i++){
	if(clock[i] < cmin) cmin = clock[i];
      }

      for(int i=0; i<B; i++){
	if(clock[i] == cmin){
	  ans = i;
	  break;
	}
      }

      clock[ans] += M[ans];
      //for(int i=0; i<B; i++) cout << clock[i] << " ";
      //cout << endl;
    }

    cout << "Case #" << t << ": " << ans+1 << endl;
  }
}

