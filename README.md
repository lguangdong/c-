# 之前一直对面向对象的几个概念不是很清楚，今天看到了比较全面的解释，赶紧记下来防止忘记。
## 面向对象（oop）：
### 类（class）:定义了一个事物的抽象特点，包含了它的属性和方法。
### 对象（Object）：就是类的实例啦，主要通过new关键字生成，类的实例是继承了类的属性和方法的。必须说明的是这些属性和方法的对外可见性是可以在类中通过关键字声明的。
### 封装（Encapsulation）：就是将数据和对数据操作的细节隐藏起来，只对外暴露方法也就是所谓的接口。这样也能保证对象内部数据的安全。
### 继承（Inheritance）：一个类继承了另一个类，前者一般被称为子类，后者一般被称为父类或者基类。子类可以拥有父类的所有特性，同时也能为具体情况定义自己的特性。
### 多态（Polymorphism）：暂时还是不是很理解，待补充。
### 存取器（getter&setter）：改变属性的读取和赋值行为。
### 修饰符（Modifiers）:修饰符是一些关键字，用来限定成员或类型的性质。比如C++的public private。
### 抽象类（Abstract Class）:抽象类是供其他类继承的基类，同时抽象类不允许被实例化。抽象类中的抽象方法必须在子类中被实现。
### 接口（Interfaces）:看了后还是有点模糊，待补充。