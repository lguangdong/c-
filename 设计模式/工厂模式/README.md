# 工厂模式：创建型模式的一种，简单说就是它提供了一种创建对象的最佳方式。创建对象时不会对客户端暴露创建逻辑，并使用一个共同的接口来指向新创建的对象。
## 优点：创建对象方便，提供要创建的对象的名称就可以；可拓展性，当你想要增加一个产品时，拓展工厂类就可以了；封装创建细节，调用者只关注创建产品的接口。
## 缺点：当然也是有缺点的，当增加一个产品时，总要实现一个具体的产品类和相应的工厂实现，会使系统中类的个数倍增，在一定程度上增加了系统的复杂度，这并不是什么好事。
## 注意事项：作为一种创建型模式，原则上可以在任何需要对象的地方使用工厂模式，但对于一个简单的，只需要new就可以创建的对象，使用工厂模式会增加系统的复杂度。
