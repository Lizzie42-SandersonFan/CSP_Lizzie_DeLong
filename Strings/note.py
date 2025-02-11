# Lizzie DeLong, Sting Notes Python

# string is data type that holds and info surrounded by quotaion marks "" ''

sentence = "The quick brown fox jumps over the lazy dog."

#name = input("What is your first name?\n").strip().capitalize()

# print(f"Hello {name}! Welcome to my program!")

#print("This is your name "+ name)

#print(len(sentence))
#print(sentence[37])
start = sentence.find("brown")
length = len("brown fox")
print(sentence[start: start+length])