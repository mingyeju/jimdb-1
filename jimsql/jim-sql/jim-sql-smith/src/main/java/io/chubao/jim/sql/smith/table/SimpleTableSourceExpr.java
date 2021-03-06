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
package io.jimdb.sql.smith.table;

import io.jimdb.model.Table;

import com.alibaba.druid.sql.ast.SQLObject;
import com.alibaba.druid.sql.ast.statement.SQLExprTableSource;

/**
 * @version V1.0
 */
public class SimpleTableSourceExpr extends TableExprWeights {

  public SimpleTableSourceExpr(int weight) {
    this.weight = weight;
  }

  @Override
  public SQLObject makeTableExpr(Table table) {
    SQLExprTableSource tableSource = new SQLExprTableSource();
    tableSource.setExpr(table.getName());
    return tableSource;
  }
}
