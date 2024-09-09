animals =['cat', 'dog', 'fish']
adj=['lover', 'care', 'kind']
animals.reverse()
adj.reverse()
for x in animals:
    for y in adj:
        print(x[::-1] ,y[::-1])
      


