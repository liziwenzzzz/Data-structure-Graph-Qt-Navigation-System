#ifndef APPSTANDARD_GLOBAL_H
#define APPSTANDARD_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(APPSTANDARD_LIBRARY)
#  define APPSTANDARDSHARED_EXPORT Q_DECL_EXPORT
#else
#  define APPSTANDARDSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // APPSTANDARD_GLOBAL_H
