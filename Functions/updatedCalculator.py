# Lizzie DeLong, Updated Python Financial Claculator with Functions

def userInputs(expense):
    return float(input(f"What is your monthly {expense}:\n"))

def calculatePercents(expenceOne, expenseTwo):
    return float(expenceOne/expenseTwo)*100
# Print hi and tell user what this program does
print("Hello! This is your new personal financial calculator to help you with your money!")
# user input of income (variable)
income = userInputs("income")
# user input of rent (variable)
rent = userInputs("rent/morage payment")
# user input of utilities (variable)
utilities = userInputs("utilities payment")
# user input of groceries (variable)
groceries = userInputs("groceries spending")
# user input of transportaion (variable)
transport = userInputs("transportaion spending")
# calculate savings as 10% of income(income * .1) (variable)
savings = income*0.1
# calculate spending as income-savings-rent-utilities-groceries-treansport
spending = income-savings-rent-utilities-groceries-transport
# calculate percent income of rent (rent/income*100) (varible)
rentPercent = calculatePercents(rent, income)
# calculate percent income of utilities (utilites/income*100) (varible)
utilitiesPercent = calculatePercents(utilities, income)
# calculate percent income of groceries (groceries/income*100) (varible)
groceriesPercent = calculatePercents(groceries, income)
# calculate percent income of transportaion (transportaion/income*100) (varible)
transportPercent = calculatePercents(transport, income)
# calculate percent income of spending (spending/income*100) (varible)
spendingPercent = calculatePercents(spending, income)
answer = input("Horray! Ready for your results? \n")
# your rent is $XX.XX which is XX% of your income. (print)
print("Your rent is", rent, "dollars which is", rentPercent, "percent of your income.")
# your utilities is $XX.XX which is XX% of your income. (print)
print("Your utilities bill is", utilities, "dollars which is", utilitiesPercent, "percent of your income.")
# your groceries is $XX.XX which is XX% of your income. (print)
print("Your groceries spending is", groceries, "dollars which is", groceriesPercent, "percent of your income.")
# your transportion is $XX.XX which is XX% of your income. (print)
print("Your transportion cost is", transport, "dollars which is", transportPercent, "percent of your income.")
# your savings is $XX.XX which is XX% of your income. (print)
print("The savings you should put away every month is", savings, "which is 10 percent of your income.")
# your spending is $XX.XX which is XX% of your income. (print)
print("Your spending money is", spending, "dollars which is", spendingPercent, "percent of your income.")