
template<class T>

class Queue { 
	int size; 
	T* queue; 
	
	public:
	Queue() { 
		size = 0;
		queue = new T[100];
	}
	void add(T data) { 
		queue[size] = data; 
		size++;
	}
  //Other code which has present in previours programs.
};
