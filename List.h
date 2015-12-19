#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include <list>

using namespace std;
template <class type> class List {

private: 
	type * list;
	int len;

public:	

	List(const int &l){
		list = new type[len];
  		len = l;
	}

	~List(){
		delete[] list;
	}

	type get(const int &index){
		return list[index];
	}

	void set(const int &index, const type &val){
		  list[index] = val;
	}

	int length(){
		  return len;
	}
};

