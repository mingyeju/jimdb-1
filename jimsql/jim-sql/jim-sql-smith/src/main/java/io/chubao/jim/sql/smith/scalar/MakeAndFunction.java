/*
 * Copyright 2019 The Chubao Authors.
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
package io.jimdb.sql.smith.scalar;

import io.jimdb.model.Column;
import io.jimdb.pb.Basepb;
import io.jimdb.sql.smith.cxt.Scope;

import com.alibaba.druid.sql.ast.SQLExpr;
import com.alibaba.druid.sql.ast.expr.SQLBinaryOpExpr;
import com.alibaba.druid.sql.ast.expr.SQLBinaryOperator;

/**
 * @version V1.0
 */
public class MakeAndFunction extends MakeScalarFunction {

  public MakeAndFunction(Scalar scalar, int weight) {
    this.scalar = scalar;
    this.weight = weight;
  }

  @Override
  public SQLExpr makeSQLExpr(Scope scope, Basepb.DataType dataType, Column[] columns) {
    SQLExpr left = this.scalar.makeBoolExpr(scope, columns);
    SQLExpr right = scalar.makeBoolExpr(scope, columns);
    SQLBinaryOpExpr sqlBinaryOpExpr = new SQLBinaryOpExpr();
    sqlBinaryOpExpr.setLeft(left);
    sqlBinaryOpExpr.setRight(right);
    sqlBinaryOpExpr.setOperator(SQLBinaryOperator.BooleanAnd);
    return sqlBinaryOpExpr;
  }
}
