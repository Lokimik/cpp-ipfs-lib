#include <sstream>
#include <iostream>
#include "client.h"

void main() {
	ipfs::Client client("127.0.0.1", 5001);
	std::stringstream file;
	client.FilesCat("/ipfs/QmYwAPJzv5CZsnA625s3Xf2nemtYgPpHdWEz79ojWnPbdG/readme", &file);
	std::cout << file.str() << std::endl;
}