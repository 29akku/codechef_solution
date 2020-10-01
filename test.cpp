#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
	// your code goes here
	int t,n,k;
	cin>>t;
	while(t--)
	{
	    cin>>n>>k;
	    int guest[n],hash[101]={0};
		int sum=0;
	    
	    for(int j=0;j<n;j++)
	    {
	        cin>>guest[j];
	        hash[guest[j]]++;
	    }
	    
	    int max=*max_element(hash,hash+101);
	    //cout<<"max = "<<max<<" ";
	    for(int j=0;j<101;j++)
	    {
	        if(hash[j]>=2)
	        sum+=hash[j];
	    }
	    
	    //cout<<"sum = "<<sum<<" ";
	    cout<<min(max*k,k+sum)<<endl;
        /////////////////////////////////////////////////
        int temp[n][n]={0};
        int tempa[n][n]={0};
        int copy1[n]={0};
		int copy2[n]={0};
		
		for(int i=0;i<n;i++)
        {
        	for(int j=0;j<=i;j++)
        	temp[i][j]=guest[j];
		}


    	for(int i=0;i<4;i++)
        {
        	for(int j=i+1,t=0;j<n;j++,t++)
        	tempa[i][t]=guest[j];       	
		}
		
		
		



	}
	
	return 0;
}
