class Solution {
public:
    int checkvowel(char c){
        switch(c){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                return 1;
            default:
                return 0;
        }
    }
    int maxVowels(string s, int k) {
        queue<int> q;
        int init = 0;
        int mx = 0;
        for(int i=0;i<k;i++){
            q.push(s[i]);
            if(checkvowel(s[i]))
            	init++;

         }
        int mx = max(mx,init);
		for(int i=k;i<s.size();i++){
             char f =q.front();
             if(checkvowel(f)){
             	init--;
             }
             q.pop();
             q.push(s[i]);
             if(checkvowel(s[i]))
             	init++;
             mx = max(mx,init);
             if(mx==k)
             	return k;
         }         
         return -1;
    }
};