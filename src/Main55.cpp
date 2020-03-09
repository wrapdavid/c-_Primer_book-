#include<iostream>

std::string make_plural(size_t ctr, const std::string& word, const std::string& ending = "s") {
	return (ctr > 1 )? (word + ending) : word;
}
int main() {
	std::cout << "singual: " << make_plural(1, "success", "es") << " " <<
		make_plural(1, "failure") << std::endl;
	std::cout << "plural: " << make_plural(2, "success", "es") << " " <<
		make_plural(2, "failure") << std::endl;
}