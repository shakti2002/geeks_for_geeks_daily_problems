class Solution{ 
    static int mod = 1000000007;
public int countPaths(int N){
        // code here
        return solve(N, 'O');
    }
        static int solve(int n, char loc){
            if(n==0 && loc=='O') return 1;
            if(n==0 && loc!='O') return 0;
            
            int ans=0;
            if(loc=='O'){
                ans= (ans+solve(n-1, 'A'))%mod;
                ans= (ans+solve(n-1, 'B'))%mod;
                ans= (ans+solve(n-1, 'C'))%mod;
            }
            if(loc=='A'){
               ans= (ans+solve(n-1, 'O'))%mod;
                ans= (ans+solve(n-1, 'B'))%mod;
                ans= (ans+solve(n-1, 'C'))%mod;
            }
            if(loc=='B'){
                ans= (ans+solve(n-1, 'A'))%mod;
                ans= (ans+solve(n-1, 'O'))%mod;
                ans= (ans+solve(n-1, 'C'))%mod;
            }
            if(loc=='C'){
                ans= (ans+solve(n-1, 'A'))%mod;
                ans= (ans+solve(n-1, 'B'))%mod;
                ans= (ans+solve(n-1, 'O'))%mod;
            }
            
        return ans;
    }
};
