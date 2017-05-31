#include<bits/stdc++.h>
using namespace std;
int a[100005];
int ct=0;
int quadSearch(int l,int h,int x){
	if(l<=h){
		ct++;
		int m1,m2,m3;
		m1=l+(h-l)/4;
		m2=l+(h-l)/2;
		m3=h-(h-l)/4;
		
		
		if(a[m1]==x)
		return m1;
		if(a[m2]==x)
		return m2;
		if(a[m3]==x)
		return m3;
		
		if(x<a[m1])
		return quadSearch(l,m1-1,x);
		else if(x<a[m2])
		return quadSearch(m1+1,m2-1,x);
		else if(x<a[m3])
		return quadSearch(m2+1,m3-1,x);
		else
		return quadSearch(m3+1,h,x);
	}
	return -1;
}
int main(){
//	freopen("quadResult.txt","w",stdout);
	int i,n,m;
	cin>>n;

	for(i=0;i<n;i++)
	cin>>a[i];


	cin>>m;

	while(m--){
		int num;
		cin>>num;
		ct=0;
		cout<<quadSearch(0,n-1,num);
		cout<<" cnt "<<ct<<endl;
	}
	return 0;
}
