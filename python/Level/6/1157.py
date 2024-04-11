word = input().upper()
word_list = list(set(word))
count = []

for i in word_list:
    word_count = word.count(i)
    count.append(word_count)
    
if count.count(max(count)) > 1:
    print("?")
else:
    print(word_list[(count.index(max(count)))])