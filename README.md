# Design-Patterns
This repo includes reusable design pattern examples presented in the book, *Design Patterns: Elements of Reusable Object-Oriented Software*.
## Catalog of Design Patterns
* __Abstract Factory__: <br> Provide an interface for creating families of related or dependent objects without specifying their concrete classes.
* __Adapter__: <br> Convert the interface of a class into another interface clients expect. Adapter lets classes work together that couldn’t otherwise because of incompatible interfaces.
* __Bridge__: <br> Decouple an abstraction from its implementation so that the two can vary independently.
* __Builder__: <br> Separate the construction of a complex object from its representation so that the same construction process can create different representations.
* __Chain of Responsibility__: <br> Avoid coupling the sender of a request to its receiver by giving more than one object a chance to handle the request. Chain the receiving objects and pass the request along the chain until an object handles it.
* __Command__: <br> Encapsulate a request as an object, thereby letting you parameterize clients with different requests, queue or log requests, and support undoable operations.
* __Composite__: <br> Compose objects into tree structures to represent part-whole hierarchies. Composite lets clients treat individual objects and compositions of objects uniformly.
* __Decorator__: <br> Attach additional responsibilities to an object dynamically. Decorators provide a flexible alternative to subclassing for extending functionality.
* __Facade__: <br> Provide a unified interface to a set of interfaces in a subsystem. Facade defines a higher-level interface that makes the subsystem easier to use.
* __Factory Method__: <br> Define an interface for creating an object, but let subclasses decide which class to instantiate. Factory Method lets a class defer instantiation to subclasses.
* __Flyweight__: <br> Use sharing to support large numbers of fine-grained objects efficiently.
* __Interpreter__: <br> Given a language, define a represention for its grammar along with an interpreter that uses the representation to interpret sentences in the language.
* __Iterator__: <br> Provide a way to access the elements of an aggregate object sequentially without exposing its underlying representation.
* __Mediator__: <br> Define an object that encapsulates how a set of objects interact. Mediator promotes loose coupling by keeping objects from referring to each other explicitly, and it lets you vary their interaction independently.
* __Memento__: <br> Without violating encapsulation, capture and externalize an object’s internal state so that the object can be restored to this state later.
* __Observer__: <br> Define a one-to-many dependency between objects so that when one object changes state, all its dependents are notified and updated automatically.
* __Prototype__: <br> Specify the kinds of objects to create using a prototypical instance, and create new objects by copying this prototype.
* __Proxy__: <br> Provide a surrogate or placeholder for another object to control access to it.
* __Singleton__: <br> Ensure a class only has one instance, and provide a global point of access to it.
* __State__: <br> Allow an object to alter its behavior when its internal state changes. The object will appear to change its class.
* __Strategy__: <br> Define a family of algorithms, encapsulate each one, and make them interchangeable. Strategy lets the algorithm vary independently from clients that use it.
* __Template Method__: <br> Define the skeleton of an algorithm in an operation, deferring some steps to subclasses. Template Method lets subclasses redefine certain steps of an algorithm without changing the algorithm’s structure.
* __Visitor__: <br> Represent an operation to be performed on the elements of an object structure. Visitor lets you define a new operation without changing the classes of the elements on which it operates.
## Chapter 1 Notes:
__Class vs Interface Inheritance__: <br>
* An objects class defines how the object is implemented; in contrast, an object's type only refers to its interface, the set of requests to which it can respond.
* Class inheritance defines an object's implementation in terms of another object's implementation.
* Interface inheritance (Subtyping) describes when an object can be used in place of another.
* There are two benefits to manipulating objects in terms of the interface defined by abstract classes: <br>
1. Clients remain unaware of the specific types of objects they use, as long as the objects adhere to the interface that clients expect.
2. Clients remain unaware of the classes that implement these objects. Clients only know about the abstract class(es) defining the interface.
* Creational patterns ensure that your system is written in terms of interfaces, not implementations. <br>
---
__Inheritance vs Composition__: <br>
__Inheritance vs Parameterized Types__: <br>
