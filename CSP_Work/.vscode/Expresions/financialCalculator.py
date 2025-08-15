# Lizzie DeLong, Financial Calculator Python

# Print hi and tell user what this program does
print("Hello! This is your new personal financial calculator to help you with your money!")
# user input of income (variable)
income = float(input("What is your monthly income? \n"))
# user input of rent (variable)
rent = float(input("What is your monthly rent/morage payment? \n"))
# user input of utilities (variable)
utilities = float(input("What is your monthly utilities payment? \n"))
# user input of groceries (variable)
groceries = float(input("What is your monthly groceries spending? \n"))
# user input of transportaion (variable)
transport = float(input("What is your monthly transportaion spending? \n"))
# calculate savings as 10% of income(income * .1) (variable)
savings = income*0.1
# calculate spending as income-savings-rent-utilities-groceries-treansport
spending = income-savings-rent-utilities-groceries-transport
# calculate percent income of rent (rent/income*100) (varible)
rentPercent = (rent/income)*100
# calculate percent income of utilities (utilites/income*100) (varible)
utilitiesPercent = (utilities/income)*100
# calculate percent income of groceries (groceries/income*100) (varible)
groceriesPercent = (groceries/income)*100
# calculate percent income of transportaion (transportaion/income*100) (varible)
transportPercent = (transport/income)*100
# calculate percent income of spending (spending/income*100) (varible)
spendingPercent = (spending/income)*100
answer = input("Horray! Ready for your results? \n")
# your rent is $XX.XX which is XX% of your income. (print)
print("Your rent is", rent, "which is", rentPercent, "of your income.")
# your utilities is $XX.XX which is XX% of your income. (print)
print("Your utilities bill is", utilities, "which is", utilitiesPercent, "of your income.")
# your groceries is $XX.XX which is XX% of your income. (print)
print("Your groceries spending is", groceries, "which is", groceriesPercent, "of your income.")
# your transportion is $XX.XX which is XX% of your income. (print)
print("Your transportion cost is", transport, "which is", transportPercent, "of your income.")
# your savings is $XX.XX which is XX% of your income. (print)
print("The savings you should put away every month is", savings, "which is 10 percent of your income.")
# your spending is $XX.XX which is XX% of your income. (print)
print("Your spending money is", spending, "which is", spendingPercent, "of your income.")