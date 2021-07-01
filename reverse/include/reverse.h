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
 80%
 */
template < typename Itr >
void reverse( Itr first, Itr last )
{ 
  while(first<last){ 
  //for(Banana i=first; i < last-1;i++)tips:banana==itr
    std::swap(*first,*(last-1));
    first++;
    last--;
  }
}

}
#endif
