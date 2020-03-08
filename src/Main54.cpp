#include<iostream>
class Entity {
public:
	void Print() {
		std::cout << "hello" << std::endl;
	}

};
class ScopePtr {
private:
	Entity* m_obj;
public:
	ScopePtr(Entity* entity) : m_obj(entity) {	}//constructor 進來的值是Entity類別型別的指標
	Entity* get_Print() {
		return m_obj;
	}
	Entity* operator->() {
		return m_obj;
	}
};
int main() {
	ScopePtr entity =  new Entity();//see new, ()可有可無 default
	ScopePtr* entity1 = (ScopePtr*)malloc(sizeof(Entity)); //等同上一行，但少了constructor
	(*entity1)->Print();//指標再指標，跟進去看這行。 
	entity->Print();


	int* b = new int[50];//200byte
	Entity* c = new(b) Entity();//在b中的200byte裡塞進Entity
	
	delete[] b;
	char* a = new char;
	char* a1 = new char[2];//有多少個char大小的地方
	std::cin.get();
}