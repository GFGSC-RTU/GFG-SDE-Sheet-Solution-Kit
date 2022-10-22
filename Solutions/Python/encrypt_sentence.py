# Problem Statement

# Write a python function, encrypt_sentence() which accepts a message and encrypts it based on rules given below and returns the encrypted message.
# Words at odd position -> Reverse It
# Words at even position -> Rearrange the characters so that all consonants appear before the vowels and their order should not change

# Note: 
# Assume that the sentence would begin with a word and there will be only a single space between the words.
# Perform case sensitive string operations wherever necessary.

# Sample Input
# the sun rises in the east

# Expected Output
# eht snu sesir ni eht stea

def encrypt_sentence(sentence):
    l = sentence.split(" ")
    ans = ""
    for i in range(0, len(l)):
        if((i+1) % 2 != 0):
            ans += l[i][::-1]
        else:
            word = l[i]
            vowels = ""
            consonats = ""
            for j in range(0, len(word)):
                if(word[j] == 'a' or word[j] == 'e' or word[j] == 'i' or word[j] == 'o' or word[j] == 'u' or word[j] == 'A' or word[j] == 'E' or word[j] == 'I' or word[j] == 'O' or word[j] == 'U'):
                    vowels += word[j]
                else:
                    consonats += word[j]
    
            ans += consonats
            ans += vowels 
        ans += " "    
                   
    return ans.strip()

print("Enter your sentence : ")
sentence = input()
encrypted_sentence=encrypt_sentence(sentence)
print(encrypted_sentence)
