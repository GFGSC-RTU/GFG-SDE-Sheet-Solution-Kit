class Solution {
    int[][] distance;
    Map<String,String> memo;
    public String shortestSuperstring(String[] A) {
        if(A.length==1) return A[0];
        buildDistanceMatrix(A);
        memo = new HashMap<>();
        //build key for the final solution, key is in the form "end:set of nodes", eg "0:1,2,3,4"
        StringBuilder builder = new StringBuilder();
        for(int i=1; i<A.length; i++){
            builder.append(i);
            builder.append(",");
        }
        builder.deleteCharAt(builder.length() - 1);
        String key = "0"+":"+builder.toString();
        
        // start top-down algo, val is in the form of "sequence;minDistance", eg "0,3,4,2,1,0;20"
        String seq = TSP(key).split(";")[0];
        String res = convertToHP(seq,A);
        return res;
    }
    
    private String convertToHP(String seq, String[]A){
        String[] tour = seq.split(",");
        int N = tour.length-1;
        int[] hamPath = new int[N];
        for(int i=0; i<N; i++){
            hamPath[i] = Integer.parseInt(tour[i]);
        }
        
        int[][] pool = new int[N][N];
        pool[0] = hamPath;
        for(int i=1; i<N; i++){
            int[]candidate = new int[N];
            for(int j=i; j<i+N; j++){
                candidate[j-i] = hamPath[j%N];
            }
            pool[i] = candidate;
        }
        int min = 1000;
        String sol = "";
        for(int[]path:pool){
            String res = buildPath(path,A);
            if(res.length()<min){
                min = res.length();
                sol = res;
            }
        }
        return sol;
    }
    
    private String buildPath(int[]path,String[]A){
        StringBuilder builder = new StringBuilder();
        for(int j=0; j<path.length-1; j++){
            int start = path[j];
            int end = path[j+1];
            int len = distance[start][end];
            builder.append(A[start].substring(0,len));
        }
        builder.append(A[path[path.length-1]]);
        return builder.toString();
    }
    
    private void buildDistanceMatrix(String[]A){
        int N = A.length;
        distance = new int[N][N];
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                if(i==j) continue;
                String start = A[i];
                String end = A[j];
                for(int k=Math.min(start.length(),end.length()); k>0; k--){
                    if(start.endsWith(end.substring(0,k))){
                        distance[i][j] = start.length()-k;
                        break;
                    }
                    else distance[i][j] = start.length();
                }
            }
        }
    }
    
    private String TSP(String key){
        if(memo.containsKey(key)) return memo.get(key);
        
        String[] temp = key.split(":");
        String endPointS = temp[0];
        int endPoint = Integer.parseInt(endPointS);
        
        //base case
        if(key.endsWith(":")){
            String seq = "0"+","+endPointS;
            int dist = distance[0][endPoint];
            String res = seq+";"+Integer.toString(dist);
            memo.put(key,res);
            return res;
        }
        
        String[] elements = temp[1].split(",");
        int min = 1000;
        String candidate="X";
        for(int i=0; i<elements.length; i++){
            String subKey = buildKey(elements, i);
            String[] res = TSP(subKey).split(";");
            int updatedDist = distance[Integer.parseInt(elements[i])][endPoint] + Integer.parseInt(res[1]);
            String updatedSeq = res[0] + "," + endPointS;
            if(updatedDist<min){
                min = updatedDist;
                candidate = updatedSeq;
            }
        }
        String val = candidate + ";" + Integer.toString(min);
        memo.put(key,val);
        return val;
    }
    
    private String buildKey(String[]s, int excl){
        String endPoint = s[excl];
        StringBuilder builder = new StringBuilder();
        builder.append(endPoint);
        builder.append(":");
        if(s.length==1) return builder.toString();
        
        for(String node:s){
            if(node.equals(endPoint))continue;
            builder.append(node);
            builder.append(",");
        }
        builder.deleteCharAt(builder.length() - 1);
        return builder.toString();
    }
}
