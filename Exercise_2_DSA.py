#Atrributes
class Shapes:
        def __init__ (self, length, width, base, height, side):
            self.length=length
            self.width=width
            self.base=base
            self.height=height
            self.side=side
#Functions   
class Rectangle(Shapes):
        def __init__ (self, length, width):
            self.length=length
            self.width=width
        
        def area(self):
            
            print(f'area of Rectangle = {self.length * self.width}')
      
class Triangle(Shapes):
        def __init__ (self, base, height):
            self.base = base
            self.height = height
           
        def area(self):
            
            print(f'area of Triangle ={self.base * self.height}')
class Square(Shapes):
        def __init__ (self, side):
            self.side = side
            
        def area(self):
            
            print(f'area of Square ={self.side**2}')
            
#input Values           
width = float(input("Put a Value for width: "))
length = float(input("Put a Value for length: "))
base = float(input("put a Value for base: "))
height = float(input("put a Value for height "))
side = float(input("put a Value for side: "))
#Calling Methods\Values
rect1 = Rectangle(length,width)
rect2 = Triangle(base,height)
rect3 = Square(side)
   
rect1.area()
rect2.area()
rect3.area()
              
    
    

   

        
        