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
	ScopePtr(Entity* entity) : m_obj(entity) {	}//constructor �i�Ӫ��ȬOEntity���O���O������
	Entity* get_Print() {
		return m_obj;
	}
	Entity* operator->() {
		return m_obj;
	}
};
int main() {
	ScopePtr entity =  new Entity();//see new, ()�i���i�L default
	ScopePtr* entity1 = (ScopePtr*)malloc(sizeof(Entity)); //���P�W�@��A���֤Fconstructor
	(*entity1)->Print();//���ЦA���СA��i�h�ݳo��C 
	entity->Print();


	int* b = new int[50];//200byte
	Entity* c = new(b) Entity();//�bb����200byte�̶�iEntity
	
	delete[] b;
	char* a = new char;
	char* a1 = new char[2];//���h�֭�char�j�p���a��
	std::cin.get();
}