class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int N, int K) {
        vector<vector<vector<int>>> graph(N);
        int degrees[N][2];
        for(int i=0;i<N;i++){
            degrees[i][0] = 0;degrees[i][1] = 0;    
        }
        
        for(auto time:times){
            vector<int> dest;
            dest.push_back(time[1]);
            dest.push_back(time[2]);
            degrees[time[0]][1]++;
            degrees[time[1]][0]++;
            graph[time[0]].push_back(dest);
        }
        if(degrees[K][1]==0 && N>1)
            return -1;
        for(int i=0;i<N;i++){
            if(i!=K && degrees[i][0]==0 && N>1)
                return -1;        
        }
        
        int cur_time = 0;
        multimap<int,vector<int>> future;
        vector<bool> visited[N];
        for(auto contime:graph[K]){
            for(auto con:contime){
                auto it = future.find(con[1]);
                if(it==future.end()){
                    vector<int> temp;
                    temp.push_back(con[0]);
                    future.insert(pair<int,vector<int>>(con[1],temp));
                    }
                else{
                    auto it = future.find(con[1]);
                    vector<int> values = it->second;
                    values.push_back(con[0]);
		    
                }
            }
        }
        return 2;
    }
};
