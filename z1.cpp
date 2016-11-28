#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	vector<int> v;
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		int x;
		cin>>x;
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	int c;
	cin>>c;
	int cnt=0;
	for(int i=0; i<n; i++){
		if(v[i]==c){
			cout<<"found";
			cnt++;
		}
	}
	if(cnt==0) cout<<"not found";
	return 0;
}