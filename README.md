# Classes-and-objects

# Theory:

## Definition: 

Object oriented programming is a programming principle that revolves around the concept of objects.

Class is a framework or blueprint which we use to create objects. It encapsulates data and functions that operate on the data. Objects share similarities to its class.

An object is basically an instance of a class. It is self contained unit that contains both data and methods. The data represents the state of the object,while the methods define its behaviour.
Types: 
1. Attributes: These are the properties of an object. They represnt the characteristics of the object.
2. Methods: these are the functions or behaviors that an object can perform. They define what the object can or what operations can be performed on it.

## Principles of OOP:

1. Encapsulation: It is the concept of building data and methods that operate on that data within a single unit. It hides the internal state of the object from the outside world and only exposes a controlled interface.
2. Inheritance: It allows a derived class to inherit properties and methods from another class. This promotes code reusability and establishes a hierarchy between classes.
3. Polymorphism:It allows objects of different classes to be treated as objects of a common base class. The most common use of polymorphism is to call methods on objects of derived classes through base class pointers or references, enabling dynamic method binding.
4. Abstraction: It focuses on hiding the complex implementation details and showing onlythe necessay featured of an object.

## Algorithm: Cuboid Volume

1.Start

2.Define Cubiod Class

Public Section

Data Members
int length, breadth, height, volume;

Member Functions
input() Function
Prompt the user to enter the length, breadth, and height of the cuboid.
Read the values and store them in t length, breadth, and height variables.
Volume() Function

3.Calculate the volume of the cuboid using the formula: volume = length * breadth * height.
Output() Function

Print : "The volume of the given Cuboid is : ".

4.Main Function

Create an object v1 of type Cubiod.

Call the input() function for v1 to get the dimensions from the user.

Call the Volume() function for v1 to calculate the volume.

Call the Output() function forv1 to display the volume.

5.End
