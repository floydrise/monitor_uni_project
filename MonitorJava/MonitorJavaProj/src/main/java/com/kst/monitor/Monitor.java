package com.kst.monitor;

import com.kst.exceptions.EmptyValuesExceptions;
import com.kst.exceptions.NegativeValuesException;

public class Monitor implements Comparable<Monitor> {
    private String model;
    private int width;
    private int height;
    private double price;

    public Monitor(String model, int width, int height, double price) throws Exception {
        if (model.isEmpty()) throw new EmptyValuesExceptions("Model cannot be empty");
        if (width < 0) throw new NegativeValuesException("Width cannot be less than 0");
        if (height < 0) throw new NegativeValuesException("Height cannot be less than 0");

        this.model = model;
        this.width = width;
        this.height = height;
        this.price = price;
    }

    public String getModel() {
        return model;
    }

    public int getWidth() {
        return width;
    }

    public int getHeight() {
        return height;
    }

    public double getPrice() {
        return price;
    }

    public void setModel(String model) {
        this.model = model;
    }

    public void setWidth(int width) {
        this.width = width;
    }

    public void setHeight(int height) {
        this.height = height;
    }

    public void setPrice(double price) {
        this.price = price;
    }

    void add(int extra) {
        price += extra;
    }

    @Override
    public String toString() {
        return "[model=" + model + ", width=" + width + ", height=" + height + ", price=" + price + "]";
    }

    @Override
    public int compareTo(Monitor o) {
        return Double.compare(price, o.price);
    }
}
