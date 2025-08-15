# Lizzie DeLong, Old Enough Conditionals Program Python

age = int(input("How old are you right now (WHOLE NUMBER):\n"))

if age >= 18:
    print("You can vote and drive and go to school! Yippy!\n")
elif age >= 16:
    print("You can drive and go to school, but not vote.\n")
elif age >= 15:
    print("You can get a learners permit and go to school, but not drive or vote. Sorry :(\n")
elif age >= 6:
    print("You can go to school, but that's it. No driving or voting for you.\n")
else:
    print("Why are you using this if you can't even go to school?\n")