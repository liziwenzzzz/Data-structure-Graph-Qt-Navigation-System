#ifndef FINDROADDISPLAY_GLOBAL_H
#define FINDROADDISPLAY_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(FINDROADDISPLAY_LIBRARY)
#  define FINDROADDISPLAYSHARED_EXPORT Q_DECL_EXPORT
#else
#  define FINDROADDISPLAYSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // FINDROADDISPLAY_GLOBAL_H