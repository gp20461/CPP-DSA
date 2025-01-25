#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n = 8;
	
    int arr[8] = {3,2,3,1,2,3,4,1};
    
    unordered_map<int,int>mp;
    int maxFreq = -1 ,minFreq =n+1,maxElement = 0,minElement = 0;
    for(int i=0 ; i<n; i++)
    {
    	if(mp.find(arr[i]) == mp.end())
    	{
    		mp[arr[i]] = 1;
    	}else{
    		mp[arr[i]] += 1;
    	}
    
    
    if(maxFreq <= mp[arr[i]])
    {
    	maxFreq = mp[arr[i]];
    	maxElement = arr[i];
    }
    
     if(minFreq >= mp[arr[i]])
    {
    	minFreq = mp[arr[i]];
    	minElement = arr[i];
    }
    }
    
    cout << minElement << " - " << minFreq << endl;
    cout << maxElement << " - " << maxFreq << endl;
    
}