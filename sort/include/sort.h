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
template<class ForwardIt, class Comparison>
void sort(ForwardIt first, ForwardIt last, Comparison cmp)
{
  for(ForwardIt i=first; i<=last-1; i++){
    for(ForwardIt b=i+1; b<=last-1; b++){
      if(cmp(*i,*b)==false){
        // A[]={1,2,3,5,6,10,30}
          //std::swap(*i,*(i+1));
          //std::swap(*(i+1),*b);
          std::swap(*i,*b);
        }
      }   
    }
  }
}
#endif
