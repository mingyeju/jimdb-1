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
import io.jimdb.sql.smith.Weight;
import io.jimdb.sql.smith.cxt.Scope;

import com.alibaba.druid.sql.ast.SQLExpr;

/**
 * @version V1.0
 */
public abstract class MakeScalarFunction extends Weight {

  protected Scalar scalar;

  public abstract SQLExpr makeSQLExpr(Scope scope, Basepb.DataType dataType, Column[] columns);
}
