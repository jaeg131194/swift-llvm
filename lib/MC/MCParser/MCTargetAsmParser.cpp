//===-- MCTargetAsmParser.cpp - Target Assembly Parser ---------------------==//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#include "llvm/MC/MCContext.h"
#include "llvm/MC/MCTargetAsmParser.h"
using namespace llvm;

MCTargetAsmParser::MCTargetAsmParser(MCTargetOptions const &MCOptions,
                                     MCSubtargetInfo &STI)
  : AvailableFeatures(0), ParsingInlineAsm(false), MCOptions(MCOptions),
    STI(STI)
{
}

MCTargetAsmParser::~MCTargetAsmParser() {
}

const MCSubtargetInfo &MCTargetAsmParser::getSTI() const {
  return STI;
}
