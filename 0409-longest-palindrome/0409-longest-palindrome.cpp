class Solution {
public:
    int longestPalindrome(string s) {
       
        vector <int> v(120,0);
        bool chk=0;
        for(char c :s)
        {
        
            v[c-'A']++;
        }
       
        int sumz=0;
        for( int i :v)
        {
           
            if(i&1)
            {
                 chk=1;
          sumz+=i-1;                
            }
          
            else
            {
                sumz+=i;
                
            }
        }
        if(chk)
     
         sumz ++ ;
            
  return sumz;
       
        
    }
};