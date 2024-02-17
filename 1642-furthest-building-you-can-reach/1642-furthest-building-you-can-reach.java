class Solution {
    public int furthestBuilding(int[] heights, int bricks, int ladders) {
        PriorityQueue<Integer> q = new PriorityQueue<>();
        for(int i=1; i<heights.length; i++){
            int diff = heights[i]-heights[i-1];
            if(diff>0){
                if(bricks>=diff){
                    bricks-=diff;
                    q.add(-diff);
                }
                else if(ladders>0){
                    ladders--;
                    if(q.size()>0 && diff<-q.peek()){
                        bricks+=-diff-q.poll();
                        q.add(-diff);
                    }
                }
                else return i-1;
            }
        }
        return heights.length-1;
    }
}