#include <cassert>
#include "pq.h"
#include <iostream>



template < typename ValueType, typename Compare>
void PQ<ValueType,Compare>::push( const_reference  x ){
    std::cout<<x<<std::endl;
  //  m_data[0]=2;
    m_length++;
}
