#ifndef CLIENTVERSION_H
#define CLIENTVERSION_H

//
// client versioning
//

// These need to be macros, as version.cpp's and truckcoin-qt.rc's voodoo requires it
#define CLIENT_VERSION_MAJOR       2
#define CLIENT_VERSION_MINOR       0
#define CLIENT_VERSION_REVISION    8
#define CLIENT_VERSION_BUILD       6

// Converts the parameter X to a string after macro replacement on X has been performed.
// Don't merge these into one macro!
#define STRINGIZE(X) DO_STRINGIZE(X)
#define DO_STRINGIZE(X) #X

// Copyright year
#define COPYRIGHT_YEAR  2020

#endif // CLIENTVERSION_H
