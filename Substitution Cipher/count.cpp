#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s= "wsam ie pjo ysgtm eyipbya .P axg niphay y, mey syw ahgm ewhrg tw hmysyam wh meyiepjo ys .Ag jygtmeyk pmys ie pjo ysavw kkoyjgsy whmy sy amwh rmephmewagh y!Me yigu ynay utg smew ajya apr ywap awjfkya no a mwmnmw ghiwfeyswhve wieuwr wm aepby oyyhae wtmy uox8 fkpiya. Me y fpaavgs uwa mxSrN03u wd dvwmegnmmey dngmya. Mew awameyt";
	
	map<char, int>m;  //declaring an ordered map for the purpose of hashing
	
	
	
	for(int i=0;i<s.length();i++)
	{
		if((s[i]>='A' and s[i]<='Z') or (s[i]>='a' and s[i]<='z') )  //since the string consists of spaces, numbers and special characters, so we dont want to
		//take them into account, for which we have used this condition
		{
			if(s[i]>='a' and s[i]<='z')  //we should not distinguih between upper and lower case while frequency analysis.
			m[s[i]-32]++;
			else
			m[s[i]]++;   
			
			              
		}
	}
	
	
	int n=m.size();
	
	cout<<n<<endl;	
	
	for(auto i:m)
	{
		cout<<i.first<<": "<<(i.second)<<endl;
	}

}
