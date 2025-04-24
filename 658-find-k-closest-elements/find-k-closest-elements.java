class Solution {
    public List<Integer> findClosestElements(int[] arr, int k, int x) {
        PriorityQueue<int[]> pq = new PriorityQueue<>(
            (a,b) -> {
                 if(b[0] != a[0])
                 {
                    return b[0]-a[0];
                 }
                 else
                 {
                    return b[1] - a[1];
                 }
            }
        );

        for(int i = 0;i<arr.length;i++)
        {
            int diff = Math.abs(arr[i] - x);
            pq.add(new int[]{diff,arr[i]});
            
            if(pq.size()>k)
            {
                 pq.poll();
            }
        }

        List<Integer> lt = new ArrayList<>();
        while(pq.size() > 0)
        {
             lt.add(pq.poll()[1]);
        }
        Collections.sort(lt);
        return lt;
    }
}