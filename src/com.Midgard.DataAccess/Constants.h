/*
 * Constants.h
 *
 *  Created on: Mar 17, 2015
 *      Author: fabian
 */

/*
 * Constants.h
 *
 *  Created on: Mar 17, 2015
 *      Author: fabian
 */

#ifndef SRC_CONSTANTS_H_
#define SRC_CONSTANTS_H_

#include <string>
#include <stdlib.h>

using namespace std;

class Constants{
public:
	static Constants* _Constants;
	static float PROBABILIDAD_DE_MUTACION;
	static int CANTIDAD_DE_GENES;

	Constants* getInstance();

private:
	Constants();
};

#endif /* SRC_CONSTANTS_H_ */
