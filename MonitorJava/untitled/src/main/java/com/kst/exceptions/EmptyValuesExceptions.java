package com.kst.exceptions;

public class EmptyValuesExceptions extends Exception {
    public EmptyValuesExceptions(String message) {
        super(message);
    }

    public EmptyValuesExceptions(String message, Throwable t) {
        super(message, t);
    }

    public EmptyValuesExceptions(Throwable t) {
        super(t);
    }
}
