#include "Truckloads.h"

int Truckloads::numTrucks(int numCrates, int loadSize){
	if(numCrates <= loadSize){
		return 1;
    }
	if(numCrates % 2){
		return numTrucks(numCrates/2 +1, loadSize) + numTrucks(numCrates/2, loadSize);
    }
	else return 2 * numTrucks(numCrates/2, loadSize);
}
	
