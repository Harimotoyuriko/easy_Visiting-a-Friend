Since the upper bound of the positions is small, we can simply use an array to simulate the axis. For each teleport, we label the range that the teleport can cover in that array. Then what we need to do is just enumerate every element in the array from 1 to m to find out whether it is labeled.

由于这些点的上界很小，我们可以使用数组来模拟数轴。对于每一个传送点，我们在数组中标记出它所能覆盖的范围。继而我们只需从1到m遍历数组检测是否对应位置被标记过即可。 