public class reversewords {
    public static String reverseWord(String str){  
        String words[]=str.split("\\s");  
        String reversewords="";  
        for(String w:words){  
            StringBuilder sb=new StringBuilder(w);  
            sb.reverse();  
            reversewords+=sb.toString()+" ";  
        }  
        return reversewords.trim();  
    }  

    public class TestStringFormatter {  
        public static void main(String[] args) {  
            System.out.println(reversewords.reverseWord("my name is khan"));  
            System.out.println(reversewords.reverseWord("I am sonoo jaiswal"));    
            }  
        }  
}
