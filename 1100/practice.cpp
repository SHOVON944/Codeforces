import java.util.*

fun main() {
    val scanner = Scanner(System.`in`)
    val t = scanner.nextInt()
    repeat(t) {
        val n = scanner.nextInt()
        val a = IntArray(n) { scanner.nextInt() }

        val c = if (a[0] == a[1] || a[0] == a[2]) a[0] else a[1]

        for (i in a.indices) {
            if (a[i] != c) {
                println(i + 1)
                break
            }
        }
    }
}
