import ckotlinor.*

fun main(args: Array<String>) {
    printHello()
    (1..7).map(::factorial).forEach(::println)
    (1..7).map(::fib).forEach(::println)
}
