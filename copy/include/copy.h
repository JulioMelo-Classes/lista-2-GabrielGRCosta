#ifndef GRAAL_H
#define GRAAL_H

#include <utility>
using std::pair;
#include <iterator>
using std::distance;
#include <algorithm>
using std::sort;

namespace graal {

/*! 
 * TODO: documentação no estilo doxygen
 */
 /*
 80% ok, faltou documentar
 */
template<class InputIt>
InputIt copy(InputIt first, InputIt last, InputIt d_first)
{
  for(InputIt i=first; i!=last; i++) {
    *d_first = *i;
    ++d_first;
  }
  return d_first; 
}

}
#endif
