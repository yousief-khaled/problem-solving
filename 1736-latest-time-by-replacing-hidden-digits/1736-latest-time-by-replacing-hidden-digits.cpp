class Solution {
public:
    string maximumTime(string time) {
     for(int i=0;i<time.size();i++)
     {
         if(i==0&&time[i]=='?')
         {
             if(time[i+1]>'3'&&time[i+1]!='?')
             {
                 time[i]='1';
             }else
                
         time[i]='2';
         }
         else if(i==1&&time[i]=='?')
         {
             if(time[i-1]<='1')
             {
                 time[i]='9';
             }
             else 
             {
                 time[i]='3';
             }
             
         }
         else if(i==3&&time[i]=='?')
         {
             time[i]='5';
         }
         else if(i==4&&time[i]=='?')
         {
             time[i]='9';
         }

     }
     return  time; 
    }
};