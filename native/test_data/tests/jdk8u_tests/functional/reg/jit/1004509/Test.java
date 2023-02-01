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
         System.exit(new Test().test());
    }
    
    public int test() {
        
        boolean [] toEncode = new boolean [] { true, false };
        
        int index = toEncode.length - 1;
        while (index > -1 && !toEncode[index]) {
            index--;
        }

        int unusedBits = 7 - index % 8;

        System.out.println("unusedBits: " + unusedBits);
        
        int ret = 0;
        for (int k = 0; k < (8 - unusedBits); k++) {
            System.out.println("k: " + k);
            ret = k;
        }
        
        return (ret == 0) ? (0) : (1);
    }
}
