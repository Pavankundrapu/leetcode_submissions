class Solution {
    public int[][] kClosest(int[][] points, int k) {
        PriorityQueue<int[]> pq = new PriorityQueue<>((a,b)->
        {
           return Integer.compare(b[0],a[0]);
        });
        for(int i = 0;i<points.length;i++)
        {
            int dis = points[i][0]*points[i][0]+points[i][1]*points[i][1];
            pq.add(new int[]{dis,i});
            if(pq.size()>k)
            {
                pq.poll();
            }
        }
        int[][] res = new int[k][2];
        int i = 0;
        while(pq.size()!=0)
        {
            int[] pair = pq.poll();
            res[i] = points[pair[1]];
            i++;
        }
        return res;

    }
}