/*
 * Copyright 2016 Google Inc.
 *
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */
 
#ifndef SKSL_EXTENSION
#define SKSL_EXTENSION

#include "SkSLProgramElement.h"

namespace SkSL {

/** 
 * An extension declaration. 
 */
struct Extension : public ProgramElement {
    Extension(Position position, SkString name)
    : INHERITED(position, kExtension_Kind) 
    , fName(std::move(name)) {}

    SkString description() const override {
        return "#extension " + fName + " : enable";
    }

    const SkString fName;

    typedef ProgramElement INHERITED;
};

} // namespace

#endif
