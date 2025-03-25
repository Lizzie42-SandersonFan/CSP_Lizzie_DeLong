#Chiara variables
cakeFlavor=1
frostingFlavor=2

#River varables
cakepan=1
cakeStat= 2
ovenTemp = 0

#Lizzie variables
frostPiped=1
allToppings = ["sprinkles", "strawberries", "fudge sauce"]
isSprinkles = False
isStrawberries = False
isFudge = False
notoppings = 0
toppings = 0
response = 0
explanationMessage = 0
customerAnswer = 0


def toppingRequest(theTopping):
    global response
    response = input(f"Would you like {theTopping} (YES or NO)?\n").strip().upper()

for item in allToppings:
    toppingRequest(item)
    if item == "sprinkles":
        if response == "YES":
            isSprinkles = True
    if item == "strawberries":
        if response == "YES":
            isStrawberries = True
    if item == "fudge sauce":
        if response == "YES":
            isFudge = True
    
print(isSprinkles)
print(isStrawberries)
print(isFudge)