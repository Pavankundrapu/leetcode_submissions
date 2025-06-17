class Solution {
    public void dfs(int node,boolean vis[],List<List<Integer>> asl)
    {
         vis[node] = true;
         for(int x : asl.get(node))
         {
            if(!vis[x])
            {
                dfs(x,vis,asl);
            }
         }
    }
    public int findCircleNum(int[][] isConnected) {
        List<List<Integer>> asl = new ArrayList<>();
        int size = isConnected.length;
        for(int i = 0;i<size;i++)
        {
            asl.add(new ArrayList<Integer>());
        }

        for(int i = 0;i<size;i++)
        {
            for(int j = 0;j<size;j++)
            {
                if(isConnected[i][j] == 1 && i!=j)
                {
                    asl.get(i).add(j);
                    asl.get(j).add(i);
                }
            }
        }
            boolean vis[] = new boolean[size];
            int count = 0;
            for(int i = 0;i<size;i++)
            {
                if(!vis[i])
                {
                     dfs(i,vis,asl);
                     count++;
                }
            }
            return count;
    }
}