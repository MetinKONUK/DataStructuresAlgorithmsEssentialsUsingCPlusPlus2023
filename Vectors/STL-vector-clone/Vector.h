template<typename T>
class Vector {
//Data Members
private:
	T *arr;
	int cs;
	int ms;

public:
	Vector() {
		cs = 0;
		ms = 1;
		arr = new T[ms];
	}


	Vector(int max_size) {
		cs = 0;
		ms = max_size;
		arr = new T[ms];
	}


	void push_back(const T d) {
		// two cases -> vector is full or not
		if (cs == ms) { //vector is full
			//create a new array and delete the previous,
			//double the capacity
			T* old = arr;
			ms = 2 * ms;
			arr = new T[ms];

			for (int i = 0; i < cs; ++i) {
				arr[i] = old[i];
			}
			delete[] old;
		}
		if(arr[cs] != NULL)
			arr[cs] = d;
		cs++;
	}


	void pop_back() {
		if (cs >= 0)
			cs--;
	}


	bool isEmpty() const {
		return cs == 0;
	}


	T front() const {
		return arr[0];
	}


	T back() const {
		return arr[cs - 1];
	}


	T at(int i) const {
		return arr[i];
	}


	int size() const {
		return cs;
	}


	int capacity() const {
		return ms;
	}


	T operator[](const int i) {
		return arr[i];
	}

//Constructor, Destructor, Methods

};
