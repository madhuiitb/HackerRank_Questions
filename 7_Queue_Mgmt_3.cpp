
//your code goes here

class Queue2:public Queue{

	
	int size; 
	int* queue; 
	
	public:
	Queue2() {
		size = 0;
		queue = new int[100];
	}

	void add(int data) { 
		queue[size] = data; 
		size++;
	}

	void print() { 
		if (size == 0) { 
			cout << "Queue is empty"<<endl; 
			return; 
		} 
		for (int i = 0; i < size; i++) { 
			cout<<queue[i]<<"\n";
		} 
		cout << endl;
	}

};
