# Dice Simulation

一个S面骰子，每一个面投出的可能为1/S；如一个硬币，每一面投出的可能为0.5.

投掷一个S面骰子：
（1）如果投掷的结果为1，则停止；否则投掷一个S1面的骰子（S1=random(1,S)）
（2）如果投掷的结果为1，则停止；否则投掷一个S2面的骰子（S2=random(1,S1)）
重复步骤二，如果投掷的结果为1或者与投掷面相同，则停止。

记录投掷次数，取10000次的Average，四舍五入取整。并重复执行9次，输出10次模拟中的Minimum。

## Timeout
  3

## Example
    input 2
    output 2
    
    input 3
    output 2
