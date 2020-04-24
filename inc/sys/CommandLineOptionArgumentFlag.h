////////////////////////////////////////////////////////////////////////////////
//
// File: CommandLineOptionArgumentFlag.h
//
// Author: Raynard Brown
//
// Copyright (c) 2020 Raynard Brown
//
// All rights reserved.
//
////////////////////////////////////////////////////////////////////////////////

#ifndef SYS_COMMANDLINEOPTIONARGUMENTFLAG_H_
#define SYS_COMMANDLINEOPTIONARGUMENTFLAG_H_

struct CommandLineOptionArgumentFlag
{
  public:

    enum Value
    {
      /**
       * Specifies that a command line option takes no argument.
       */
      NoArgument = 1,

      /**
       * Specifies that a command line option requires an argument.
       */
      RequiresArgument = 2,

      /**
       * Specifies that an argument for a command line option is optional.
       */
      OptionalArgument = 3
    };
};
#endif /* SYS_COMMANDLINEOPTIONARGUMENTFLAG_H_ */
