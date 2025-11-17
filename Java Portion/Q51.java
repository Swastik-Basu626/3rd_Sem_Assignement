class Data {
    private String value = "";
    private boolean isProduced = false;

    public synchronized void produce(String s) {
        try {
            while (isProduced) {
                wait();  // Wait until consumer consumes
            }
            value = s;
            System.out.println("Producer produced: " + value);
            isProduced = true;
            notify();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }

    public synchronized void consume() {
        try {
            while (!isProduced) {
                wait();  // Wait until producer produces
            }
            System.out.println("Consumer consumed: " + value);
            value = "";   // Make the string null-string
            System.out.println("String is now: \"" + value + "\"");
            isProduced = false;
            notify();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }
}

class Producer implements Runnable {
    private Data data;

    public Producer(Data data) {
        this.data = data;
    }

    @Override
    public void run() {
        String[] messages = {"Hello", "World", "Producer", "Consumer", "Java"};
        for (String msg : messages) {
            data.produce(msg);
            try { Thread.sleep(500); } catch (Exception e) {}
        }
    }
}

class Consumer implements Runnable {
    private Data data;

    public Consumer(Data data) {
        this.data = data;
    }

    @Override
    public void run() {
        for (int i = 0; i < 5; i++) {
            data.consume();
            try { Thread.sleep(500); } catch (Exception e) {}
        }
    }
}

public class Q51 {
    public static void main(String[] args) {
        Data data = new Data();

        Thread producerThread = new Thread(new Producer(data));
        Thread consumerThread = new Thread(new Consumer(data));

        producerThread.start();
        consumerThread.start();
    }
}
