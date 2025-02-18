# Lizzie DeLong, Functions Notes Python

# Functions hold actions to be resused
#number = int(input("Tell me a number:\n"))
#def add(numOne, numTwo):
#    return numOne +numTwo

#print(add(number,21))

def values(type):
    return input(f"Please give me {type}:\n")

name = values("name")
place = values("place")
verb = values("verb (passed tense)")

print(f"{name} was really fast getting to {place} because they {verb} the whole way there.")