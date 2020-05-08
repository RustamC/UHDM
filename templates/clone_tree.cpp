/*
 Do not modify, auto-generated by model_gen.tcl

 Copyright 2019-2020 Alain Dargelas

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

/*
 * File:   clone_tree.cpp
 * Author:
 *
 * Created on December 14, 2019, 10:03 PM
 */

#include "uhdm.h"
#include "clone_tree.h"
#include "ElaboratorListener.h"

using namespace UHDM;

namespace UHDM {

BaseClass* clone_tree (const BaseClass* root, Serializer& s, ElaboratorListener* elaborator) {
  if (root == nullptr)
    return nullptr;
  BaseClass* clone = nullptr;
  switch (root->VpiType()) {  
<CLONE_CASES>
  default:
    break;
  }
  return clone;
}

};
