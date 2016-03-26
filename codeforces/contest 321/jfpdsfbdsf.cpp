#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,d;
	scanf("%d %d",&n,&d);
	vector<pair<int,int> > arr(n);
	for(int i = 0; i < n; ++i)
		scanf("%d %d",&arr[i].first,&arr[i].second);
	sort(arr.begin(),arr.end());
	long long sum = 0, ans = 0;
	int l = 0;
	for(int i = 0; i < n; ++i){
		sum+=arr[i].second;
		while(arr[i].first-arr[l].first>=d)
			sum-=arr[l++].second;
		ans=max(ans,sum);
	}
	cout << ans << '\n';
};
