int minSwaps(vector<int>&nums)
	{
	    int c=0;
	    vector<pair<int,int>>v(nums.size());
	    for(int i=0;i<nums.size();i++){
	        v[i]={nums[i],i};
	    }
	    sort(v.begin(),v.end());
	    
	    for(int i=0;i<nums.size();i++){
	        if(i==v[i].second) continue;
	        
	        else{
	            c++;
	            swap(v[i],v[v[i].second]);
	            i--;
	        }
	    }
	    return c;
