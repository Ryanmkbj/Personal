#include "stdafx.h"
#include "Project1.h"

//Default Constructor of NetworkObject
NetworkObject:: NetworkObject(int objectID){
	this->objectID = objectID;
};
//Accessor function for objectID:
int NetworkObject:: getObjectID(){
	return objectID;
}
// Inherited Server Class from NetworkObject Class

class Server : public NetworkObject {};

//Since push is obj entering, no return statement
// What do I store in the queue? 
void NetworkObject::push(Packet obj) {
	packets[back] = obj.getsourceID;
}

