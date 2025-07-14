x=int(input("Amount to Convert  :"))
y=input("Convert currency to :") 
print(str(x) + " Converting to " + y)
input(" continue ?")
# rate
#USD 
d=135
#EUR
e=145
#DH 
h=13.5
#SR 
s=35
#EGP
g=5
#TND
t=40
#TRY
r=5
if y == "USD":
  print(round (x/d))
elif y == "EUR":
  print(round (x/e))
elif y== "SR":
  print(round (x/s))
elif y== "EGP":
   print(round (x/g))
elif y== "TND": 
   print(round (x/t))
elif y== "TRY" :
   print(round (x/r))
elif y== "DH":
   print(round (x/h))
print("thank you for using <3")
print("created by  : Mehdi ")