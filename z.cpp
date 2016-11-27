#include <iostream>
#include <algorithm>
#include <vector>
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
	if(binary_search(v.begin(),v.end(),c)){
		cout<<"found";
	}else{
		cout<<"not found";
	}
	return 0;
}