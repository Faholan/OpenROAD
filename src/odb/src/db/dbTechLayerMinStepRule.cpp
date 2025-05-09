// SPDX-License-Identifier: BSD-3-Clause
// Copyright (c) 2020-2025, The OpenROAD Authors

// Generator Code Begin Cpp
#include "dbTechLayerMinStepRule.h"

#include <cstdint>
#include <cstring>

#include "dbDatabase.h"
#include "dbTable.h"
#include "dbTable.hpp"
#include "dbTechLayer.h"
#include "odb/db.h"
namespace odb {
template class dbTable<_dbTechLayerMinStepRule>;

bool _dbTechLayerMinStepRule::operator==(
    const _dbTechLayerMinStepRule& rhs) const
{
  if (flags_.max_edges_valid_ != rhs.flags_.max_edges_valid_) {
    return false;
  }
  if (flags_.min_adj_length1_valid_ != rhs.flags_.min_adj_length1_valid_) {
    return false;
  }
  if (flags_.no_between_eol_ != rhs.flags_.no_between_eol_) {
    return false;
  }
  if (flags_.min_adj_length2_valid_ != rhs.flags_.min_adj_length2_valid_) {
    return false;
  }
  if (flags_.convex_corner_ != rhs.flags_.convex_corner_) {
    return false;
  }
  if (flags_.min_between_length_valid_
      != rhs.flags_.min_between_length_valid_) {
    return false;
  }
  if (flags_.except_same_corners_ != rhs.flags_.except_same_corners_) {
    return false;
  }
  if (flags_.concave_corner_ != rhs.flags_.concave_corner_) {
    return false;
  }
  if (flags_.except_rectangle_ != rhs.flags_.except_rectangle_) {
    return false;
  }
  if (flags_.no_adjacent_eol_ != rhs.flags_.no_adjacent_eol_) {
    return false;
  }
  if (min_step_length_ != rhs.min_step_length_) {
    return false;
  }
  if (max_edges_ != rhs.max_edges_) {
    return false;
  }
  if (min_adj_length1_ != rhs.min_adj_length1_) {
    return false;
  }
  if (min_adj_length2_ != rhs.min_adj_length2_) {
    return false;
  }
  if (eol_width_ != rhs.eol_width_) {
    return false;
  }
  if (min_between_length_ != rhs.min_between_length_) {
    return false;
  }

  return true;
}

bool _dbTechLayerMinStepRule::operator<(
    const _dbTechLayerMinStepRule& rhs) const
{
  return true;
}

_dbTechLayerMinStepRule::_dbTechLayerMinStepRule(_dbDatabase* db)
{
  flags_ = {};
  min_step_length_ = 0;
  max_edges_ = 0;
  min_adj_length1_ = 0;
  min_adj_length2_ = 0;
  eol_width_ = 0;
  min_between_length_ = 0;
}

dbIStream& operator>>(dbIStream& stream, _dbTechLayerMinStepRule& obj)
{
  uint32_t flags_bit_field;
  stream >> flags_bit_field;
  static_assert(sizeof(obj.flags_) == sizeof(flags_bit_field));
  std::memcpy(&obj.flags_, &flags_bit_field, sizeof(flags_bit_field));
  stream >> obj.min_step_length_;
  stream >> obj.max_edges_;
  stream >> obj.min_adj_length1_;
  stream >> obj.min_adj_length2_;
  stream >> obj.eol_width_;
  stream >> obj.min_between_length_;
  return stream;
}

dbOStream& operator<<(dbOStream& stream, const _dbTechLayerMinStepRule& obj)
{
  uint32_t flags_bit_field;
  static_assert(sizeof(obj.flags_) == sizeof(flags_bit_field));
  std::memcpy(&flags_bit_field, &obj.flags_, sizeof(obj.flags_));
  stream << flags_bit_field;
  stream << obj.min_step_length_;
  stream << obj.max_edges_;
  stream << obj.min_adj_length1_;
  stream << obj.min_adj_length2_;
  stream << obj.eol_width_;
  stream << obj.min_between_length_;
  return stream;
}

void _dbTechLayerMinStepRule::collectMemInfo(MemInfo& info)
{
  info.cnt++;
  info.size += sizeof(*this);
}

////////////////////////////////////////////////////////////////////
//
// dbTechLayerMinStepRule - Methods
//
////////////////////////////////////////////////////////////////////

void dbTechLayerMinStepRule::setMinStepLength(int min_step_length)
{
  _dbTechLayerMinStepRule* obj = (_dbTechLayerMinStepRule*) this;

  obj->min_step_length_ = min_step_length;
}

int dbTechLayerMinStepRule::getMinStepLength() const
{
  _dbTechLayerMinStepRule* obj = (_dbTechLayerMinStepRule*) this;
  return obj->min_step_length_;
}

void dbTechLayerMinStepRule::setMaxEdges(uint max_edges)
{
  _dbTechLayerMinStepRule* obj = (_dbTechLayerMinStepRule*) this;

  obj->max_edges_ = max_edges;
}

uint dbTechLayerMinStepRule::getMaxEdges() const
{
  _dbTechLayerMinStepRule* obj = (_dbTechLayerMinStepRule*) this;
  return obj->max_edges_;
}

void dbTechLayerMinStepRule::setMinAdjLength1(int min_adj_length1)
{
  _dbTechLayerMinStepRule* obj = (_dbTechLayerMinStepRule*) this;

  obj->min_adj_length1_ = min_adj_length1;
}

int dbTechLayerMinStepRule::getMinAdjLength1() const
{
  _dbTechLayerMinStepRule* obj = (_dbTechLayerMinStepRule*) this;
  return obj->min_adj_length1_;
}

void dbTechLayerMinStepRule::setMinAdjLength2(int min_adj_length2)
{
  _dbTechLayerMinStepRule* obj = (_dbTechLayerMinStepRule*) this;

  obj->min_adj_length2_ = min_adj_length2;
}

int dbTechLayerMinStepRule::getMinAdjLength2() const
{
  _dbTechLayerMinStepRule* obj = (_dbTechLayerMinStepRule*) this;
  return obj->min_adj_length2_;
}

void dbTechLayerMinStepRule::setEolWidth(int eol_width)
{
  _dbTechLayerMinStepRule* obj = (_dbTechLayerMinStepRule*) this;

  obj->eol_width_ = eol_width;
}

int dbTechLayerMinStepRule::getEolWidth() const
{
  _dbTechLayerMinStepRule* obj = (_dbTechLayerMinStepRule*) this;
  return obj->eol_width_;
}

void dbTechLayerMinStepRule::setMinBetweenLength(int min_between_length)
{
  _dbTechLayerMinStepRule* obj = (_dbTechLayerMinStepRule*) this;

  obj->min_between_length_ = min_between_length;
}

int dbTechLayerMinStepRule::getMinBetweenLength() const
{
  _dbTechLayerMinStepRule* obj = (_dbTechLayerMinStepRule*) this;
  return obj->min_between_length_;
}

void dbTechLayerMinStepRule::setMaxEdgesValid(bool max_edges_valid)
{
  _dbTechLayerMinStepRule* obj = (_dbTechLayerMinStepRule*) this;

  obj->flags_.max_edges_valid_ = max_edges_valid;
}

bool dbTechLayerMinStepRule::isMaxEdgesValid() const
{
  _dbTechLayerMinStepRule* obj = (_dbTechLayerMinStepRule*) this;

  return obj->flags_.max_edges_valid_;
}

void dbTechLayerMinStepRule::setMinAdjLength1Valid(bool min_adj_length1_valid)
{
  _dbTechLayerMinStepRule* obj = (_dbTechLayerMinStepRule*) this;

  obj->flags_.min_adj_length1_valid_ = min_adj_length1_valid;
}

bool dbTechLayerMinStepRule::isMinAdjLength1Valid() const
{
  _dbTechLayerMinStepRule* obj = (_dbTechLayerMinStepRule*) this;

  return obj->flags_.min_adj_length1_valid_;
}

void dbTechLayerMinStepRule::setNoBetweenEol(bool no_between_eol)
{
  _dbTechLayerMinStepRule* obj = (_dbTechLayerMinStepRule*) this;

  obj->flags_.no_between_eol_ = no_between_eol;
}

bool dbTechLayerMinStepRule::isNoBetweenEol() const
{
  _dbTechLayerMinStepRule* obj = (_dbTechLayerMinStepRule*) this;

  return obj->flags_.no_between_eol_;
}

void dbTechLayerMinStepRule::setMinAdjLength2Valid(bool min_adj_length2_valid)
{
  _dbTechLayerMinStepRule* obj = (_dbTechLayerMinStepRule*) this;

  obj->flags_.min_adj_length2_valid_ = min_adj_length2_valid;
}

bool dbTechLayerMinStepRule::isMinAdjLength2Valid() const
{
  _dbTechLayerMinStepRule* obj = (_dbTechLayerMinStepRule*) this;

  return obj->flags_.min_adj_length2_valid_;
}

void dbTechLayerMinStepRule::setConvexCorner(bool convex_corner)
{
  _dbTechLayerMinStepRule* obj = (_dbTechLayerMinStepRule*) this;

  obj->flags_.convex_corner_ = convex_corner;
}

bool dbTechLayerMinStepRule::isConvexCorner() const
{
  _dbTechLayerMinStepRule* obj = (_dbTechLayerMinStepRule*) this;

  return obj->flags_.convex_corner_;
}

void dbTechLayerMinStepRule::setMinBetweenLengthValid(
    bool min_between_length_valid)
{
  _dbTechLayerMinStepRule* obj = (_dbTechLayerMinStepRule*) this;

  obj->flags_.min_between_length_valid_ = min_between_length_valid;
}

bool dbTechLayerMinStepRule::isMinBetweenLengthValid() const
{
  _dbTechLayerMinStepRule* obj = (_dbTechLayerMinStepRule*) this;

  return obj->flags_.min_between_length_valid_;
}

void dbTechLayerMinStepRule::setExceptSameCorners(bool except_same_corners)
{
  _dbTechLayerMinStepRule* obj = (_dbTechLayerMinStepRule*) this;

  obj->flags_.except_same_corners_ = except_same_corners;
}

bool dbTechLayerMinStepRule::isExceptSameCorners() const
{
  _dbTechLayerMinStepRule* obj = (_dbTechLayerMinStepRule*) this;

  return obj->flags_.except_same_corners_;
}

void dbTechLayerMinStepRule::setConcaveCorner(bool concave_corner)
{
  _dbTechLayerMinStepRule* obj = (_dbTechLayerMinStepRule*) this;

  obj->flags_.concave_corner_ = concave_corner;
}

bool dbTechLayerMinStepRule::isConcaveCorner() const
{
  _dbTechLayerMinStepRule* obj = (_dbTechLayerMinStepRule*) this;

  return obj->flags_.concave_corner_;
}

void dbTechLayerMinStepRule::setExceptRectangle(bool except_rectangle)
{
  _dbTechLayerMinStepRule* obj = (_dbTechLayerMinStepRule*) this;

  obj->flags_.except_rectangle_ = except_rectangle;
}

bool dbTechLayerMinStepRule::isExceptRectangle() const
{
  _dbTechLayerMinStepRule* obj = (_dbTechLayerMinStepRule*) this;

  return obj->flags_.except_rectangle_;
}

void dbTechLayerMinStepRule::setNoAdjacentEol(bool no_adjacent_eol)
{
  _dbTechLayerMinStepRule* obj = (_dbTechLayerMinStepRule*) this;

  obj->flags_.no_adjacent_eol_ = no_adjacent_eol;
}

bool dbTechLayerMinStepRule::isNoAdjacentEol() const
{
  _dbTechLayerMinStepRule* obj = (_dbTechLayerMinStepRule*) this;

  return obj->flags_.no_adjacent_eol_;
}

// User Code Begin dbTechLayerMinStepRulePublicMethods
dbTechLayerMinStepRule* dbTechLayerMinStepRule::create(dbTechLayer* _layer)
{
  _dbTechLayer* layer = (_dbTechLayer*) _layer;
  _dbTechLayerMinStepRule* newrule = layer->minstep_rules_tbl_->create();
  return ((dbTechLayerMinStepRule*) newrule);
}

dbTechLayerMinStepRule* dbTechLayerMinStepRule::getTechLayerMinStepRule(
    dbTechLayer* inly,
    uint dbid)
{
  _dbTechLayer* layer = (_dbTechLayer*) inly;
  return (dbTechLayerMinStepRule*) layer->minstep_rules_tbl_->getPtr(dbid);
}
void dbTechLayerMinStepRule::destroy(dbTechLayerMinStepRule* rule)
{
  _dbTechLayer* layer = (_dbTechLayer*) rule->getImpl()->getOwner();
  dbProperty::destroyProperties(rule);
  layer->minstep_rules_tbl_->destroy((_dbTechLayerMinStepRule*) rule);
}
// User Code End dbTechLayerMinStepRulePublicMethods
}  // namespace odb
// Generator Code End Cpp
