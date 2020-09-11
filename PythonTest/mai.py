import python2


class Test2(object):
    pass


class Person: 
    "This is a person class"
    age = 10

    def greet(self, test):
        print('Hello')


print(python2.test(1, 2))

# Output: 10
print(Person.age)

# Output: <function Person.greet>
print(Person.greet)

# Output: 'This is my second class'
print(Person.__doc__)

python2.print()
