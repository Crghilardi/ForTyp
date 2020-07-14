#include "../src/tree.hpp"
#include "read_txt.hpp"


Tree parse_trees(std::ifstream &source) {
    int species;
    double dbh;
    double tpa;
    Tree tempTree;

	//Scanning a line from the file
	source >> species >> dbh >> tpa;

	//Assigning the data to the tempCost variable
	tempTree.species = species;
	tempTree.dbh = dbh;
	tempTree.tpa = tpa;
    tempTree.stocking = 0.0;
	return tempTree;
}
