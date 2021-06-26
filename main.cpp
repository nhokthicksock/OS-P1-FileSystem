#include "DiskInfo.h"
#include <iostream>

using namespace std;

int main() {
	DiskInfo d;
	ListHardiskInfo listHardDiskInfo = d.getHDisks();
	ListLogicalPartitionInfo listLogicalPartitionInfo = d.getPartitions();


	cout << "Number of disks: " << listHardDiskInfo.size() << endl;

	cout << "DISKS INFO" << endl;
	// Get disk Info
	for (int i = 0; i < listHardDiskInfo.size(); i++) {
		cout << endl << endl;
		cout << "// DISK " << i << " INFORS: " << endl;			
		cout << "// Volume name    : " << listLogicalPartitionInfo.at(i)->volumeName << endl;
		cout << "// Root Path      : " << listLogicalPartitionInfo.at(i)->rootPathName << endl;
		cout << "// Type           : " << listLogicalPartitionInfo.at(i)->fileSystemName << endl;
		cout << "// Serial         : " << listHardDiskInfo.at(i)->serialNumber << endl;
		cout << "// Vendor         : " << listHardDiskInfo.at(i)->vendorId << endl;
		cout << "// Product ID     : " << listHardDiskInfo.at(i)->productId << endl;
		cout << "// Size           : " << listHardDiskInfo.at(i)->diskSize << " BYTES" << endl;
		cout << "// Free cluster   : " << listLogicalPartitionInfo.at(i)->numberOfFreeClusters << endl;
		cout << "// Sec/Cluster    : " << listLogicalPartitionInfo.at(i)->sectorsPerCluster << endl;
		cout << "// Cylinder       : " << listHardDiskInfo.at(i)->cylinders << endl;
		cout << "// Byte/Sec       : " << listHardDiskInfo.at(i)->bytePerSector << endl;
		cout << "// Sec/Track      : " << listHardDiskInfo.at(i)->sectorsPerTrack << endl;
		cout << "// Track/Cylinder : " << listHardDiskInfo.at(i)->tracksPerCylinder << endl;
	}



	//for (int i = 0; i < listLogicalPartitionInfo.size(); i++) {
	//	cout << endl << endl;
	//	cout << listLogicalPartitionInfo.at(i)->fileSystemName << endl;
	//	cout << listLogicalPartitionInfo.at(i)->rootPathName << endl;
	//	cout << listLogicalPartitionInfo.at(i)->numberOfFreeClusters << endl;
	//	cout << listLogicalPartitionInfo.at(i)->sectorsPerCluster << endl;
	//	cout << listLogicalPartitionInfo.at(i)->size << endl;
	//	cout << listLogicalPartitionInfo.at(i)->type << endl;
	//	cout << listLogicalPartitionInfo.at(i)->volumeName << endl;
	//	cout << listLogicalPartitionInfo.at(i)->volumeSerialNumber << endl;
	//}
	
	return 0;
}