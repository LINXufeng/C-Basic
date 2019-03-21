/*
	If you have a data member that is an object of class(such as class),
	then that class have a construtor, and the object will be initialized automatically
	for example, all string objects are automatically initialized to the empty string.

	Initializer lists
	If a data member belongs to a class without default constructor, you need to invoke 
	the data member's constructor explicitly.

	example:
	This Order class has a data member of type Item
	class Order
	{
	public:
		Order(string customer_name, string item_description, double item_price);
	private:
		Item article;
		string customer;
	};

	The initializer list is placed before the opening brace of the constructor.
	The list starts with a colon and contains names of data members with thier
	constuction arguments.

	Order(string customer_name, string item_description, double item_price):
	article(item_descrption, item_price)
	{
	customer = customer_name;
	}
	The order constructor can also be written like this
	Order(string customer_name, string item_description, double item_price):
	article(item_descrption, item_price),customer(customer_name)
	{
	}
	C++ for everyone page 407 - 415 
	Tracing Obeject using card to record behavior and data value of class 
	every card for each object created
	Designing and discovering a class

	make parallel vectors into vector of class 
	vector<string> description;
	vector<double> prices;
	each of the vectors will have the same length, and the ith slice, consisting of description[i]
	and prices[i], contain data that needs to be processed together, These vectors are called paralled
	vectors.
	now you can use class put them together and create a vector of class
	class Item
	{
	private:
		string description;
		double price;
	};
	avoid  parallel vectors by changing them into vector of objects
	vector<Item> items;
	
	Pointer to object
	use the new operator to obtain an object that is lacated on the heap
	new CashRegister;
	return a pointer to a CashRegister object 
	CashRegister reg = new CashRegister(1000); ...
	when a heap object is no longer needed, use the delete operator 
	delete account_pointer;
	reg->additem(1.95);










*/