public class Data_Trie {  
    private Node_Trie root;  
    public Data_Trie(){  
        this.root = new Node_Trie();  
    }  
    public void insert(String word){  
        Node_Trie current = root;  
        int length = word.length();  
        for (int x = 0; x < length; x++){  
            char L = word.charAt(x);  
            Node_Trie node = current.getNode().get(L);  
            if (node == null){  
                node = new Node_Trie ();  
                current.getNode().put(L, node);  
            }  
            current = node;  
        }  
        current.setWord(true);  
    }  
}  