# Palindrome String

string = input()

l = len(string) - 1
i = 0
result = 'YES'

while i < l:
    if string[i] != string[l]:
        result = "NO"
    i += 1
    l -= 1

print(result) 