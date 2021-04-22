	//your code goes here

	Queue operator+(Queue &object){
		Queue result_queue;

		for(int i=0; i<this->size;i++){
			result_queue.add(this->queue[i]);
		}

		for(int j=0; j<object.size;j++){
			result_queue.add(object.queue[j]);
		}

		return result_queue;
	}
