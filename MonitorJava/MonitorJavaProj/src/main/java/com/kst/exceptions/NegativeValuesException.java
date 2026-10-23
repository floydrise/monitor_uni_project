package com.kst.exceptions;

public class NegativeValuesException extends Exception {

    public NegativeValuesException(String message, Throwable err) {
        super(message, err);
    }

    public NegativeValuesException(String message) {
        super(message);
    }

    public NegativeValuesException(Throwable e) {
        super(e);
    }

}
