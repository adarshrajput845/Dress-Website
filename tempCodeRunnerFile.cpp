#include<bits/stdc++.h>
using namespace std ;
   long long findzero(string &str , string & strz)
    {
        strz=+"0";
        long long cnt=0;
        long long ans=0;
        int n=strz.length();
        for(int i=0;i<str.length();i++)
        {
            string temp=str.substr(i,n);
            cout<<temp<<endl ;

            if(strz.compare(temp)==0)
            { cnt++;}
        }
        if(cnt==0)
            return 0 ;
        else
        {
            ans=cnt+findzero(str,strz);
        }
        return ans ;
    }
    long long zeroFilledSubarray() {
        vector<int> nums={1,3,0,0,2,0,0,4};
         long long ans=0;
        string str="";
        for(int i=0;i<nums.size();i++)
        {
            str+= to_string(nums[i]);
        }
        string strz="";
        ans= findzero(str,strz);
        //cout<<ans<<endl;
        return ans ;
              
        }
        int main()
        {
            zeroFilledSubarray();
            return 0 ;
        }
