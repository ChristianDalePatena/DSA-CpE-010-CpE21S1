class Shapes:
        def _init_(self, length, width, base, height,side):
            self.length
            self.width
            self.base
            self.height
            self.side
    
class rectangle(Shapes):
        def _init_(self, length, width):
            self.length=length
            self.width=width
        
        def area(self):
            
            print(f'area of Rectangle = {self.length * self.width}')
      
class Triangle(Shapes):
        def _init_ (self, base, height):
            self.base = base
            self.height = height
           
        def area(self):
            
            print(f'area of Triangle ={self.base * self.height}')
class Square(Shapes):
        def _init_ (self, side):
            self.side = side
            
        def area(self):
            
            print(f'area of Square ={self.side**2}')
            
            
width = float(input("Put a Value for width: "))
length = float(input("Put a Value for length: "))
base = float(input("put a Value for base: "))
height = float(input("put a Value for height "))
side = float(input("put a Value for side: "))

rect1 = rectangle(length,width)
rect2 = Triangle(base,height)
rect3 = Square(side)
   
rect1.area()
rect2.area()
rect3.area()
              
            
            
