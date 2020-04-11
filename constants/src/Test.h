/*
 * Test.h
 *
 *  Created on: 11-Apr-2020
 *      Author: sunbeam
 */

#ifndef TEST_H_
#define TEST_H_

class Test {
	const int x;
	static int y;
	int z;
public:
	Test();
	void readOnly() const;
	void modify();

	virtual ~Test();
};

#endif /* TEST_H_ */
