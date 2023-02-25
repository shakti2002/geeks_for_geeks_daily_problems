class Solution {
  public:
    int checkCompressed(string S, string T) {
        // code here
        int i=0;
        int j=0;
        
        while(i<T.size() && j<S.size()){
            if(T[i]>='0' && T[i]<='9'){
               
               int count=0;
               
               while(i<T.size() && T[i]>='0' &&  T[i]<='9'){
                   
                   count= count*10 + (T[i]-'0');
                   i++;
               }
               j=j+count;
            }
            else if(T[i]!=S[j]){
                return false;
            }
            else{
            i++;
            j++;
            }
        }
       if(i==T.size() && j==S.size()){
           return true;
       } 
       return false;
    }
};
