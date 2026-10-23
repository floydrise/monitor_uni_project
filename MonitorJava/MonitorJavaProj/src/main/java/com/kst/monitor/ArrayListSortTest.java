package com.kst.monitor;

import java.util.ArrayList;
import java.util.Collections;

public class ArrayListSortTest {
    static void main() throws Exception {
        ArrayList<Monitor> monitors = new ArrayList<>();
        monitors.add(new Monitor("Lenovo", 200, 100, 150));
        monitors.add(new Monitor("Dell", 220, 310, 300));
        monitors.add(new Monitor("HP", 150, 300, 200));

        System.out.println("Creation order:");
        for (Monitor monitor : monitors) {
            System.out.println(monitor);
        }

        System.out.println();

        Collections.sort(monitors);
        System.out.println("Default sort order:");
        for (Monitor monitor : monitors) {
            System.out.println(monitor);
        }

        System.out.println();

        monitors.sort(Collections.reverseOrder());
        System.out.println("Reverse sort order:");
        for (Monitor monitor : monitors) {
            System.out.println(monitor);
        }

        System.out.println();

        monitors.sort((m1, m2) -> {
            int m1Product = m1.getHeight() * m1.getWidth();
            int m2Product = m2.getHeight() * m1.getWidth();
            return Integer.compare(m1Product, m2Product);
        });
        System.out.println("Height * width sort:");
        for (Monitor monitor : monitors) {
            System.out.println(monitor + "product: " + monitor.getWidth() * monitor.getHeight());
        }
    }
}
