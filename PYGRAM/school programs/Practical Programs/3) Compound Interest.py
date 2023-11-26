p=float(input("Enter the principal amount : "))
r=float(input("Enter the rate of interest : "))
t=float(input("Enter the time in years : "))

CI = p*(1+(r/100))**t - p
CI = round(CI,2)

print(f"Compound interst = {CI}")