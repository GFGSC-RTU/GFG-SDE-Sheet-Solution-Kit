#problem link https://practice.geeksforgeeks.org/problems/anagram-1587115620/1

# function to check if two strings are anagram or not
def check(s1, s2):
	
	if(sorted(s1)== sorted(s2)):
		print("The strings are anagrams.")
	else:
		print("The strings aren't anagrams.")		
		
# driver code
s1 ="listen"
s2 ="silent"
check(s1, s2)
