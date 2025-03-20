cakeFlavor=0
frosting=0
cakepan=0
cakeStat= 0
ovenTemp = 0
frostPiped=0
isSprinkles = False
isStrawberries = False
isFudge = False
#general ideas,  I was thinking two inputs for each person -River

#welcome banner, intro 
print("Welcome to ")
#customer speech EX: Bake me your best cake!

#Chiara What kind of cake? EX: vanilla, chocolate, strawberry 
# 0 = vanilla, 1 = choco, 2 = strawberry
# Make user input a function   

#Chiara what kind of frosting EX: Buttercream, cream cheese, swiss meringue
# 0 = buttercream, 1 = cream cheese, 2 = swiss meringue

#River Cake pans EX: circle, square, cupcake
# 0 = circle, 1 = square, 2 = cupcakes

#River temperature EX: 325-375 normal bake, under is underbaked, over by like 20 is overbaked any further is broken and on fire oven
# 0 = underbaked, 1 = perfect, 2 = overbaked
# make temp a conditional
# if checks if underbacked (majorly)
# elif check 


#Lizzie frosting EX: pipped on, spooned on, none 
# 1 = piped, 2 = spooned, 3 = none
frostPiped = input("How would you like to frosting applied:\n 1. Piped \n 2. Spooned on \n 3. No frosting \n")
print(frostPiped) # amking sure it is reassigned. Delete later.

#Lizzie toppings EX: sprinkles, strawberries, fudge sauce
# 0 =  sprinkles, 1 = strawberries, 2 = fudge
# use a loop to loop through all topping options
# use a funtion to print out eat topping request statement
def toppingRequest(topping):
    isThereTopping = input(f"Would you like to add {topping} yes or no? \n").capitalize

toppingRequest("sprinkles")


#Lila results EX: The customer loved your (size, flavor, topping) cake! The custom demanded a refund as their cake was over/under baked
# change type for each variable. Use if statement to replace number with what it is (ex: if cakeFlavor = 1 then change it to cakeFlavor = 'chocolate')
# Use function to print out The customer (love, liked, dislike, hated) your (size) (flavor) cake (with topping or without toppings)