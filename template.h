/// 
/// @file template.h
/// @author Chao Yan
/// @date Jan 20th, 2016
/// @brief Header File for template.h



#ifndef TEST_H
#define TEST_H


#include <string>

using std::string;

/// \class Test
///
/// \brief Test class 
///
/// Just a simple example

class Test {

public:

	/// \brief Constructor
	Test(): _testString(NULL), _testInt(0) { }

	/// \brief Some Function brief introduction
	///
	/// Function's detail info
	void Funciton();

	void Function2();

	/// \brief Destructor
	~Test(): { } 

	/// \brief public variable _testInt
	int    _testInt;

	/**
	*
	* Just a try for another way of documenting
	*/
	void try();

private:

	string _testString; ///< private vaiable _testString 

		

};

#endif