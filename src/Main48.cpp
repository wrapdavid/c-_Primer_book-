#include<iostream>
class base_class {

public:
	virtual std::string get_name(){
		return "this is base class";
	};
};

class dog:public base_class{
private:
	std::string s_name;
public:
	dog(const std::string& str)
		:s_name("white"+str) {};
	std::string get_name() {
		return s_name;
	}

};

class cat : public base_class {
private:
	std::string s_name;
public:
	cat(const std::string& str)
		:s_name(str) {};
	std::string get_name() {
		return s_name;
	}
};

int main() {
	base_class* a = new base_class();
	std::cout << a->get_name() << std::endl;
	base_class* b =new dog("dog");
	std::cout << b->get_name() << std::endl;
	base_class* c = new cat("cat");
	std::cout << c->get_name() << std::endl;
}