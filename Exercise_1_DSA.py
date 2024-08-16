
class Rectangle:

    def __init__(self, length, width):  
       
        self.length = length
        self.width = width

    def area(self):
        return self.length * self.width
    

rectangle_ = Rectangle(30,50)
print(f"The area of the Rectangle is: {rectangle_.area()} SQ. Units")
    
    

   

        
        
