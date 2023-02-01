/*
 *  Licensed to the Apache Software Foundation (ASF) under one or more
 *  contributor license agreements.  See the NOTICE file distributed with
 *  this work for additional information regarding copyright ownership.
 *  The ASF licenses this file to You under the Apache License, Version 2.0
 *  (the "License"); you may not use this file except in compliance with
 *  the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */
/**
 */





public class Test {
    public static void main(String[] args) {
        String s = "-1.2E-368";
        Double d = Double.valueOf(s);
        System.out.println("valueOf(-1.2E-368) = " + d + " (-0.0 expected)");
        //compareTo() method isn't used in the test check because of FT_BUG_160
        System.exit(d.toString().equals("-0.0") ? (0) : (1));
    }
}
