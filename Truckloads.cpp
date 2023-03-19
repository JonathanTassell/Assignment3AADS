#include <iostream>

class Truckloads{
	public:
	int numTrucks(int numCrates, int loadSize){
		if(numCrates <= loadSize){
			return 1;
        }
		if(numCrates % 2){
			return numTrucks(numCrates/2 +1, loadSize) + numTrucks(numCrates/2, loadSize);
        }
		else return 2 * numTrucks(numCrates/2, loadSize);
	}
}; 	

int main(){
    Truckloads truck; 
    std::cout << truck.numTrucks(13, 2); 
}


