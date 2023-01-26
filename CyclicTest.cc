bool iscycl(int v,vector<int>adj[]){
    vector<int> vis(v+1,0);
    for(int i=1;i<=v;i++)
    {
        if(!vis[i])
        check(i,vis,adj,V);
        return true;
    }
}