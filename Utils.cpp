#include "Utils.h"

namespace FRAMEWORK {
	namespace utils {
		float timePerUpdate(int noOfUpdatesPerSecond) {
			return 1000 / noOfUpdatesPerSecond;
		}
	}
}