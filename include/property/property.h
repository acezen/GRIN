/** Copyright 2020 Alibaba Group Holding Limited.
Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    http://www.apache.org/licenses/LICENSE-2.0
Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

/**
 @file property.h
 @brief Define the property related APIs
*/

#ifndef GRIN_INCLUDE_PROPERTY_PROPERTY_H_
#define GRIN_INCLUDE_PROPERTY_PROPERTY_H_


void grin_destroy_string_value(GRIN_GRAPH, const char*);

#ifdef GRIN_WITH_VERTEX_PROPERTY_NAME
/**
 * @brief get the vertex property name
 * @param GRIN_GRAPH the graph
 * @param GRIN_VERTEX_PROPERTY the vertex property
 */
const char* grin_get_vertex_property_name(GRIN_GRAPH, GRIN_VERTEX_TYPE, GRIN_VERTEX_PROPERTY);

/**
 * @brief get the vertex property with a given name under a specific vertex type
 * @param GRIN_GRAPH the graph
 * @param GRIN_VERTEX_TYPE the specific vertex type
 * @param name the name
 */
GRIN_VERTEX_PROPERTY grin_get_vertex_property_by_name(GRIN_GRAPH, GRIN_VERTEX_TYPE, const char* name);

/**
 * @brief get all the vertex properties with a given name
 * @param GRIN_GRAPH the graph
 * @param name the name
 */
GRIN_VERTEX_PROPERTY_LIST grin_get_vertex_properties_by_name(GRIN_GRAPH, const char* name);
#endif

#ifdef GRIN_WITH_EDGE_PROPERTY_NAME
/**
 * @brief get the edge property name
 * @param GRIN_GRAPH the graph
 * @param GRIN_EDGE_PROPERTY the edge property
 */
const char* grin_get_edge_property_name(GRIN_GRAPH, GRIN_EDGE_TYPE, GRIN_EDGE_PROPERTY);

/**
 * @brief get the edge property with a given name under a specific edge type
 * @param GRIN_GRAPH the graph
 * @param GRIN_EDGE_TYPE the specific edge type
 * @param name the name
 */
GRIN_EDGE_PROPERTY grin_get_edge_property_by_name(GRIN_GRAPH, GRIN_EDGE_TYPE, const char* name);

/**
 * @brief get all the edge properties with a given name
 * @param GRIN_GRAPH the graph
 * @param name the name
 */
GRIN_EDGE_PROPERTY_LIST grin_get_edge_properties_by_name(GRIN_GRAPH, const char* name);
#endif


#ifdef GRIN_WITH_VERTEX_PROPERTY
bool grin_equal_vertex_property(GRIN_GRAPH, GRIN_VERTEX_PROPERTY, GRIN_VERTEX_PROPERTY);

/**
 * @brief destroy vertex property
 * @param GRIN_VERTEX_PROPERTY vertex property
 */
void grin_destroy_vertex_property(GRIN_GRAPH, GRIN_VERTEX_PROPERTY);

/**
 * @brief get property data type
 * @param GRIN_VERTEX_PROPERTY vertex property
 */
GRIN_DATATYPE grin_get_vertex_property_datatype(GRIN_GRAPH, GRIN_VERTEX_PROPERTY);

int grin_get_vertex_property_value_of_int32(GRIN_GRAPH, GRIN_VERTEX, GRIN_VERTEX_PROPERTY);

unsigned int grin_get_vertex_property_value_of_uint32(GRIN_GRAPH, GRIN_VERTEX, GRIN_VERTEX_PROPERTY);

long long int grin_get_vertex_property_value_of_int64(GRIN_GRAPH, GRIN_VERTEX, GRIN_VERTEX_PROPERTY);

unsigned long long int grin_get_vertex_property_value_of_uint64(GRIN_GRAPH, GRIN_VERTEX, GRIN_VERTEX_PROPERTY);

float grin_get_vertex_property_value_of_float(GRIN_GRAPH, GRIN_VERTEX, GRIN_VERTEX_PROPERTY);

double grin_get_vertex_property_value_of_double(GRIN_GRAPH, GRIN_VERTEX, GRIN_VERTEX_PROPERTY);

const char* grin_get_vertex_property_value_of_string(GRIN_GRAPH, GRIN_VERTEX, GRIN_VERTEX_PROPERTY);

int grin_get_vertex_property_value_of_date32(GRIN_GRAPH, GRIN_VERTEX, GRIN_VERTEX_PROPERTY);

int grin_get_vertex_property_value_of_time32(GRIN_GRAPH, GRIN_VERTEX, GRIN_VERTEX_PROPERTY);

long long int grin_get_vertex_property_value_of_timestamp64(GRIN_GRAPH, GRIN_VERTEX, GRIN_VERTEX_PROPERTY);

/**
 * @brief get the vertex type that the property is bound to
 * @param GRIN_VERTEX_PROPERTY vertex property
 */
GRIN_VERTEX_TYPE grin_get_vertex_type_from_property(GRIN_GRAPH, GRIN_VERTEX_PROPERTY);
#endif

#if defined(GRIN_WITH_VERTEX_PROPERTY) && defined(GRIN_TRAIT_CONST_VALUE_PTR)
const void* grin_get_vertex_property_value(GRIN_GRAPH, GRIN_VERTEX, GRIN_VERTEX_PROPERTY);
#endif


#ifdef GRIN_WITH_EDGE_PROPERTY
bool grin_equal_edge_property(GRIN_GRAPH, GRIN_EDGE_PROPERTY, GRIN_EDGE_PROPERTY);

/**
 * @brief destroy edge property
 * @param GRIN_EDGE_PROPERTY edge property
 */
void grin_destroy_edge_property(GRIN_GRAPH, GRIN_EDGE_PROPERTY);

/**
 * @brief get property data type
 * @param GRIN_EDGE_PROPERTY edge property
 */
GRIN_DATATYPE grin_get_edge_property_datatype(GRIN_GRAPH, GRIN_EDGE_PROPERTY);

int grin_get_edge_property_value_of_int32(GRIN_GRAPH, GRIN_EDGE, GRIN_EDGE_PROPERTY);

unsigned int grin_get_edge_property_value_of_uint32(GRIN_GRAPH, GRIN_EDGE, GRIN_EDGE_PROPERTY);

long long int grin_get_edge_property_value_of_int64(GRIN_GRAPH, GRIN_EDGE, GRIN_EDGE_PROPERTY);

unsigned long long int grin_get_edge_property_value_of_uint64(GRIN_GRAPH, GRIN_EDGE, GRIN_EDGE_PROPERTY);

float grin_get_edge_property_value_of_float(GRIN_GRAPH, GRIN_EDGE, GRIN_EDGE_PROPERTY);

double grin_get_edge_property_value_of_double(GRIN_GRAPH, GRIN_EDGE, GRIN_EDGE_PROPERTY);

const char* grin_get_edge_property_value_of_string(GRIN_GRAPH, GRIN_EDGE, GRIN_EDGE_PROPERTY);

int grin_get_edge_property_value_of_date32(GRIN_GRAPH, GRIN_EDGE, GRIN_EDGE_PROPERTY);

int grin_get_edge_property_value_of_time32(GRIN_GRAPH, GRIN_EDGE, GRIN_EDGE_PROPERTY);

long long int grin_get_edge_property_value_of_timestamp64(GRIN_GRAPH, GRIN_EDGE, GRIN_EDGE_PROPERTY);

/**
 * @brief get the edge type that the property is bound to
 * @param GRIN_EDGE_PROPERTY edge property
 */
GRIN_EDGE_TYPE grin_get_edge_type_from_property(GRIN_GRAPH, GRIN_EDGE_PROPERTY);
#endif

#if defined(GRIN_WITH_EDGE_PROPERTY) && defined(GRIN_TRAIT_CONST_VALUE_PTR)
const void* grin_get_edge_property_value(GRIN_GRAPH, GRIN_EDGE, GRIN_EDGE_PROPERTY);
#endif

#endif  // GRIN_INCLUDE_PROPERTY_PROPERTY_H_