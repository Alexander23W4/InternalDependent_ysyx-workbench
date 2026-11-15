/*
BTFN算法branchsim:
比较btrace.txt没一行中的pc和next, 如果next<pc, 则next在后方(backward), 预测跳转taken(1).  如果next>=pc, 则next在前方(forward), 预测不跳转not taken(0)
然后比较预测值0/1和btrace.txt中的实际0/1是否跳转, 输出 预测跳转数&不跳转数(分别的比例)  还有 实际跳转数&不跳转数(分别的比例) 预测正确率 到 result/bs.txt
*/