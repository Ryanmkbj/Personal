#include "stdafx.h"
#include"Project1.h"
#include "Packet.h"
using namespace std;
int main()
{
	// Instantiate 3 NetworkObject objects

	NetworkObject Network1 = NetworkObject(1);
	NetworkObject Network2 = NetworkObject(2);
	NetworkObject Network3 = NetworkObject(3);

	Packet Packet1 = Packet(1,2,"word dawg!");

	// Store 3 objects into an array

	int storage[3];
	storage[0] = Network1.getObjectID();
	storage[1] = Network2.getObjectID();
	storage[2] = Network3.getObjectID();

	//Print objectIds
	for (int i = 0; i < 3; i++) {
		std::cout << "Network Object #" << i + 1 << ": " << storage[i] << std::endl;
	}
	
	return 0;

}