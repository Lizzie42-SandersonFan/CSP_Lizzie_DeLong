# Lizzie DeLong, Python Conditional Notes
name = input("What is your name:\n")

if name == "LaRose":
    print("Hi Ms. LaRose")
else:
    print(f"Hello {name}!")

num = int(input("Give me a number:\n"))

if num >= -1000000000000000000000000000000000000000000000000000000000000000000000000000000000:
    print("That is a negitive number!")
elif num == 0:
    print("There are none.")
elif num == 1:
    print("There is one.")
elif num <= 4:
    print("There are a couple.")
elif num <= 10:
    print("There are a few.")
else:
    print("There are many!")

if num < 10 and num > -1:
    print("This is a big single digit number")

if num < 10:
    if num == 8:
        print("This prints at 8")