/*
 * Copyright 2019 The JIMDB Authors.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
 * implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */
package io.jimdb.core.expression.functions.builtin.compare;

import java.util.EnumMap;

import io.jimdb.core.expression.functions.Func;
import io.jimdb.core.Session;
import io.jimdb.common.exception.DBException;
import io.jimdb.common.exception.ErrorCode;
import io.jimdb.common.exception.ErrorModule;
import io.jimdb.common.exception.JimException;
import io.jimdb.core.expression.Expression;
import io.jimdb.core.expression.ValueAccessor;
import io.jimdb.core.expression.functions.builtin.compare.comparators.ComparatorFacade;
import io.jimdb.core.expression.functions.builtin.compare.comparators.ExprComparator;
import io.jimdb.pb.Exprpb;
import io.jimdb.core.types.ValueType;
import io.jimdb.core.values.LongValue;

import edu.umd.cs.findbugs.annotations.SuppressFBWarnings;

/**
 *
 */
@SuppressFBWarnings("CLI_CONSTANT_LIST_INDEX")
public final class LessThanFunc extends Func {
  protected static final EnumMap<ValueType, Exprpb.ExprType> EXPRTYPE_MAP;

  static {
    EXPRTYPE_MAP = new EnumMap<>(ValueType.class);
    EXPRTYPE_MAP.put(ValueType.LONG, Exprpb.ExprType.LessInt);
    EXPRTYPE_MAP.put(ValueType.UNSIGNEDLONG, Exprpb.ExprType.LessInt);
    EXPRTYPE_MAP.put(ValueType.STRING, Exprpb.ExprType.LessString);
    EXPRTYPE_MAP.put(ValueType.DOUBLE, Exprpb.ExprType.LessReal);
    EXPRTYPE_MAP.put(ValueType.DECIMAL, Exprpb.ExprType.LessDecimal);
    EXPRTYPE_MAP.put(ValueType.DATE, Exprpb.ExprType.LessDate);
    EXPRTYPE_MAP.put(ValueType.TIME, Exprpb.ExprType.LessTime);
    EXPRTYPE_MAP.put(ValueType.YEAR, Exprpb.ExprType.LessInt);
  }
  private ExprComparator comparator;

  private LessThanFunc() {

  }

  public LessThanFunc(Session session, Expression[] args, ValueType retTp, ValueType cmpTp) {
    super(session, args, retTp, cmpTp, cmpTp);
    final Exprpb.ExprType exprCode = EXPRTYPE_MAP.get(cmpTp);
    if (exprCode == null) {
      throw DBException.get(ErrorModule.EXPR, ErrorCode.ER_NOT_SUPPORTED_YET, "ValueType(" + cmpTp.name() + ")");
    }
    this.code = exprCode;
    this.name = exprCode.name();
    this.comparator = ComparatorFacade.getComparator(cmpTp);
  }

  @Override
  public LessThanFunc clone() {
    LessThanFunc result = new LessThanFunc();
    clone(result);
    result.comparator = comparator;
    return result;
  }

  @Override
  public LongValue execLong(ValueAccessor accessor) throws JimException {
    LongValue cmp = comparator.compare(session, args[0], accessor, args[1], accessor, false);
    if (cmp == null) {
      return null;
    }

    return cmp.getValue() == -1 ? LongValue.getInstance(1) : LongValue.getInstance(0);
  }
}
