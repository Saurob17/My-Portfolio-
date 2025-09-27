#include<iostream>
#include<cassert>
using namespace std;
int N,Q;
int A[2<<17];
long S[4<<17];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>N>>Q;
	for(int i=0;i<N;i++)cin>>A[i];
	for(int i=1;i<=N+N;i++)S[i]=S[i-1]+A[(i-1)%N];
	int L=0;
	for(;Q--;)
	{
		int op;cin>>op;
		if(op==1)
		{
			int c;cin>>c;
			L=(L+c)%N;
		}
		else
		{
			int l,r;cin>>l>>r;
			l--;
			cout<<S[L+r]-S[L+l]<<"\n";
		}
	}
}
