class Solution {
    public List<Integer> findClosestElements(int[] arr, int k, int x) {
        PriorityQueue<int[]> pq = new PriorityQueue<>((a,b)->
        {
            if(a[0] != b[0])
            {
                return Integer.compare(b[0],a[0]);
            }
            else
            {
                return Integer.compare(b[1],a[1]);
            }
        });
        for(int i = 0;i<arr.length;i++)
        {
            pq.add(new int[]{Math.abs(arr[i]-x),arr[i]});
            if(pq.size()>k)
            {
                pq.poll();
            }
        }
        List<Integer> ls = new ArrayList<>();
        while(pq.size()!=0)
        {
            int[] pair = pq.poll();
            ls.add(pair[1]);
        }
        Collections.sort(ls);
        return ls;
    }
}