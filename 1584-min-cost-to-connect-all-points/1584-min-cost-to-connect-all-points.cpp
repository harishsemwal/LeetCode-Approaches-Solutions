class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n=points.size();
        vector <pair<int,int>> adj[n];

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(j==i) continue;
                int dst = abs(points[j][0]-points[i][0]) + abs(points[j][1]-points[i][1]);
                adj[i].push_back({j,dst});
            }
        }
        priority_queue <pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;
        pq.push({0,{0,-1}});
        vector <int> vis(n);
        int sum=0;
        while(!pq.empty())
        {
            
            auto it = pq.top();
            pq.pop();
            int wt=it.first;
            int nd=it.second.first;
            int par = it.second.second;
          
            
            if(!vis[nd]) 
            {
            
            sum+=wt;
            vis[nd]=1;
            for(auto itr:adj[nd])
            {
                if(!vis[itr.first])
                pq.push({itr.second,{itr.first,nd}});
            }
            }
        }
        return sum;
    }
};