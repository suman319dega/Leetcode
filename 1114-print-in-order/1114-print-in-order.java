import java.util.concurrent.CountDownLatch;

class Foo {
    private final CountDownLatch latch1;
    private final CountDownLatch latch2;

    public Foo() {
        latch1 = new CountDownLatch(1);
        latch2 = new CountDownLatch(1);
    }

    public void first(Runnable printFirst) throws InterruptedException {
        // printFirst.run() outputs "first". Do not change or remove this line.
        printFirst.run();
        latch1.countDown(); // Releases thread waiting on latch1
    }

    public void second(Runnable printSecond) throws InterruptedException {
        latch1.await(); // Waits for latch1 to hit 0
        // printSecond.run() outputs "second". Do not change or remove this line.
        printSecond.run();
        latch2.countDown(); // Releases thread waiting on latch2
    }

    public void third(Runnable printThird) throws InterruptedException {
        latch2.await(); // Waits for latch2 to hit 0
        // printThird.run() outputs "third". Do not change or remove this line.
        printThird.run();
    }
}