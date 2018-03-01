#pragma once
#include "Packet.h"
#include <stdio.h>
#include<iostream>
#include <string>
#include<vector>
const int SIZE = 3;
class NetworkObject {
public:
	//Set objectId to ID specified in function call
	NetworkObject(int objectID);

	// Returns objectId to user in function call
	int getObjectID();

	
private:
	int objectID;
	int front;
	int back; 
	void push(Packet obj);
	Packet pop();

	vector<Packet> packets[SIZE];
};