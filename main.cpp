#include<iostream>
#include<boost/type_index.hpp>

template<typename T>
void f(T&& param) {
  using boost::typeindex::type_id_with_cvr;
  
  std::cout << "T = "
	    << type_id_with_cvr<T>().pretty_name() << std::endl;
  std::cout << "param = "
	    << type_id_with_cvr<decltype(param)>().pretty_name() << std::endl;
}

int main() {
  int i = 10;
  f(i);
  int &ri = i;
  f(ri);
  int &&rri = 10;
  f(rri);
  f(10);
}
