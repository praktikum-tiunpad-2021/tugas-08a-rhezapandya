/*
 * Bebas disini bisa masukin apa aja.
 * Misal mau testing atau debugging sendiri.
 *
 */

#include <iostream>

#include "queue.hpp"

using namespace strukdat::priority_queue;

int main()
{
  Queue q;
  new_queue(q);
  enqueue(q, 11, 2);
  enqueue(q, 12, 4);
  enqueue(q, 13, 3);
  enqueue(q, 14, 1);
  dequeue(q);

  return 0;
}
