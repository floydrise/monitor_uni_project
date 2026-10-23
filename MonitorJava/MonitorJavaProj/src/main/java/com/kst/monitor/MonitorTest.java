package com.kst.monitor;

import com.kst.exceptions.EmptyValuesExceptions;
import com.kst.exceptions.NegativeValuesException;

public class MonitorTest {
    static void main() throws Exception {
        Monitor m1 = new Monitor("Lenovo", 200, 300, 140);
        Monitor m2 = new Monitor("Dell", 150, 200, 235);

        // test toString()
        System.out.println(m1);
        System.out.println(m2);

        // test get() methods
        System.out.println("m1 values:");
        System.out.println("Model: " + m1.getModel());
        System.out.println("Width: " + m1.getWidth());
        System.out.println("Height: " + m1.getHeight());
        System.out.println("Price: " + m1.getPrice());

        // test add() method
        m1.add(45);
        System.out.println("m1 new price: " + m1.getPrice());

        // test negative width exception
        try {
            Monitor m4 = new Monitor("Test", -100, 100, 100);
        } catch (Exception e) {
            // throw new NegativeValuesException(e);
            System.out.println(new NegativeValuesException(e).toString());
        }

        // test empty model exception
        try {
            Monitor m3 = new Monitor("", 100, 100, 100);
        } catch (EmptyValuesExceptions e) {
            // throw new EmptyValuesExceptions(e);
            System.out.println(new EmptyValuesExceptions(e).toString());
        }

        // test negative height exception
        try {
            Monitor m5 = new Monitor("Test", 100, -100, 100);
        } catch (NegativeValuesException e) {
            // throw new NegativeValuesException(e);
            System.out.println(new NegativeValuesException(e).toString());
        }
    }
}
