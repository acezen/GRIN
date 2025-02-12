API Naming Rules
----------------
Common Get
^^^^^^^^^^
=========================== ==============
Format                      Description
=========================== ==============
grin_get_A                  return handler A or the value of some statitic A
grin_get_A_of_T             return A of type T 
grin_get_A_from_B           A is an element of B and A must be a handler. In case B is A list, use grin_get_A_from_list for short
grin_get_A_by_B             use B to find A, B can be id or name
grin_get_A_B                B is an element of A, and B is NOT a handler or value. B can be name, datatype, id, or size
grin_get_As_with_B          get A list with B enabled, B can be primary_keys
=========================== ==============

List
^^^^
=========================== ==============
Format                      Description
=========================== ==============
grin_get_A_list_begin       return A list begin iterator
grin_get_next_A_list_iter   get next iterator
grin_is_A_list_end          check if end iterator
grin_get_A_from_iter        get A from A list iterator, note that we use **from** but not **by** since A list is not a parameter, meaning that we are NOT using the iterator to find A from A list but simply get A from the iterator
grin_get_A_from_B_iter      A != B, e.g., A and B can be neighbor(vertex) and adjacent list
grin_insert_A_to_list       insert A to A list
=========================== ==============

Ref & Serialization
^^^^^^^^^^^^^^^^^^^
=========================== ==============
Format                      Description
=========================== ==============
grin_serialize_A            serialize A into const char*, in fast ref, use grin_serialize_A_as_int64
grin_deserialize_to_A       deserialze const char* to A, in fast ref, use grin_deserialize_int64_to_A
=========================== ==============


Value
^^^^^
=========================== ==============
Format                      Description
=========================== ==============
grin_get_A_datatype         follow grin_get_A_B and return GRIN_DATATYPE
grin_get_value_from_A       follow grin_get_B_from_A and return const void*, A can be row
grin_get_T_from_A           follow grin_get_B_from_A and return T, A can be row
grin_insert_value_to_A      insert const void* value to A, A can be row
girn_insert_T_to_A          insert value of type T to A, A can be row
=========================== ==============


Others
^^^^^^
=========================== ==============
Format                      Description
=========================== ==============
grin_destroy_A              destroy handler of A
grin_is_X                   check whether condition X statisfied
grin_equal_A                check whether two A handles are equal
grin_select_A_for_B_list    select elements in B list based on A, A can be type or partition
=========================== ==============



Parameter Order
^^^^^^^^^^^^^^^
Rules to order parameters of APIs:

- From larger-range handler to smaller-range handler
- A is placed before B list for grin_select_A_for_B_list


