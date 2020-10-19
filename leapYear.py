import sys

def isLeapYear(year):
    
    if year % 4 != 0 :
        print("Not a leap year")
        return
        
    if (year % 100 == 0) and (year %400 == 0):
        print("It's a leap year")
        return
        
    if (year % 4 == 0 ):
        print("It's a leap year")
        return

    

if __name__ == "__main__":
    
    year = int(sys.argv[1])
    isLeapYear(year)
    
