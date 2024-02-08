/*Bipartite Graph-BFS

class Solution {
private:
    bool check(int start,int V,vector<int>adj[],int col[]){
        queue<int>q;
        q.push(start);
        col[start]=0;
        while(!q.empty()){
            int node=q.front();
            
            q.pop();
            
            for(auto it:adj[node]){
                //if adj node is not yet colored
                //give opposite colr than node
                if(col[it]==-1){
                    col[it]=!col[node];
                    q.push(it);
                }
                
                //is adj node having same color
                //someone colored it on the other part
                else if(col[it]==col[node]){
                    return false;
                }
            }
        }
    return true;
    }
public:
	bool isBipartite(int V, vector<int>adj[]){
	     int color[V];
	     for(int i=0;i<V;i++){
	         color[i]=-1;
	     }
	     
	     for(int i=0;i<V;i++){
	         if(color[i]==-1){
	             if(check(i,V,adj,color)==false){
	                 return false;
	             }
	         }
	     }
	     
	     return true;
	}

};


*/