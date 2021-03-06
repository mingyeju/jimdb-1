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
package io.jimdb.common.utils.lang;

import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

/**
 * JimUncaughtExceptionHandler for handlers invoked when a Thread abruptly terminates due to an uncaught exception.
 *
 * @version V1.0
 */
public final class JimUncaughtExceptionHandler implements Thread.UncaughtExceptionHandler {
  private static final Logger LOG = LoggerFactory.getLogger(JimUncaughtExceptionHandler.class);
  private static final JimUncaughtExceptionHandler INSTANCE = new JimUncaughtExceptionHandler();

  private JimUncaughtExceptionHandler() {
  }

  public static JimUncaughtExceptionHandler getInstance() {
    return INSTANCE;
  }

  @Override
  public void uncaughtException(Thread t, Throwable e) {
    if (isFatalUncaught(e)) {
      LOG.error(String.format("fatal error in thread[%s], exiting.", t.getName()), e);
    } else {
      LOG.error(String.format("uncaught exception in thread[%s].", t.getName()), e);
    }
  }

  private boolean isFatalUncaught(Throwable e) {
    return e instanceof Error;
  }
}
