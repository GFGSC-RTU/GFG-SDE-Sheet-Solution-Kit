
problem link:---https://practice.geeksforgeeks.org/problems/palindrome-pairs/1

Solution:-
It can be done without Trie and simple HashMap by having key as reverse of each word and value as its index position in given array arr.


class Solution {

    int palindromepair(int N, String arr[]) {

        if(N==1) {

            return 0; // No pair exist.

        }
/* Approach1: create HashMap of reversed string of all the strings. key-reversed word. value-its index position there are 2 ways, palindrome can be formed in 2 ways:

                a) initial part/prefix of S1 is palindromic with String S2. Remaining S1 (suffix of S1) is palindrome as well.

                   example: geeksfs  keeg

                                ---
                b) S1 is palindromic with suffix of S2. part of S2(prefix of S2) is palindrome as well.

                   example: abc xyxcba

            So 3 ways to form palindrome pair when lengths are different:

                a) is prefix palindrome and suffix available in reversedMap.

                b) is suffix palindrome and prefix available in reversedMap.

            c) when length is same, is S1 available in reversedMap.

   */

        

        HashMap<String, Integer> reversedMap = new HashMap<String, Integer>();      

        for(int i=0; i<N; i++) {

            reversedMap.put(reverse(arr[i]), i);

        }

        

        // case c:

        for(int i=0; i<N; i++) {

            String word=arr[i];

            if(reversedMap.containsKey(word) && reversedMap.get(word) != i) {

                return 1;

            }

        }

        

        for(String word:arr) {

            // find the palindromic prefix and check if reverse of suffix is present in normal set OR suffix is present in reverseWordsSet

            int n=word.length();

            for(int cut=1; cut<n; cut++) {

                // case a (palindromic prefix)

                if(isPalindrome(word, 0, cut) && reversedMap.containsKey(word.substring(cut))) {

                    return 1;

                }

                // case b (Palindrome suffix)

                if(isPalindrome(word, n-cut, n) && reversedMap.containsKey(word.substring(0, n-cut))) {

                    return 1;

                }

            }

        }

        return 0;

    }

    

    private boolean isPalindrome(String word, int i, int j) {

        j--;

        while(i<j) {

            if(word.charAt(i) != word.charAt(j)) {

                return false;

            }

            i++; j--;

        }

        return true;

    }

    

    private String reverse(String word) {

        StringBuilder sb=new StringBuilder(word);

        return sb.reverse().toString();

    }

};
