import java.io.BufferedReader
import java.io.BufferedWriter

import java.io.InputStreamReader
import java.io.OutputStreamWriter


fun main() : Unit {
    var br = BufferedReader(InputStreamReader(System.`in`))
    var bw = BufferedWriter(OutputStreamWriter(System.out))

	var t = br.readLine()!!.toInt()

    for (i: Int in 1..t) {
        var x = br.readLine()!!.split(" ").map { it.toInt() }
        bw.write((x[0] + x[1]).toString() + "\n")
    }

    bw.flush()
    bw.close()
}