//
//  BuzzTools.cpp
//  RDGitRepoProjecct
//
//  Created by Kim SAVAROCHE on 23/07/2020.
//  Copyright © 2020 Kim SAVAROCHE. All rights reserved.
//

#include "BuzzTools.hpp"

bool BuzzTools::shouldBuzz(const int number) {
    return number % 5 == 0;
}
