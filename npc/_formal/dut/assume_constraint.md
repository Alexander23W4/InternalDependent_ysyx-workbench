
assume  assert

## 对于clock的assume:

## 对于reset的assume:
    第一周期拉高, 后续拉低

## 对于imem的assume: 
    对于跳转指令的所有情况, 只能跳转到前8个word, 只有前8个word是指令 (0x80000000 - 0x8000001f)
    只能生成下表这些现在npc支持的指令, 不能够生成 ebreak ecall mret fence.i
    访存指令要对齐, 访存地址的目标只能是后8个word(0x80000020 - 0x8000003f), 只有这些是可以访问的数据
    csr-instr只能生成地址 mstatus mepc mcause mtvec mcycle mcycleh 这些csr的地址

// === Arithmetic & Logical (Integer Register-Immediate Instructions) ===
    output reg addi,
    output reg slti,
    output reg sltiu,
    output reg xori,
    output reg ori,
    output reg andi,
    output reg slli,
    output reg srli,
    output reg srai,

    // === Arithmetic & Logical (Integer Register-Register Instructions) ===
    output reg add,
    output reg sub,
    output reg sll,
    output reg slt,
    output reg sltu,
    output reg xor_inst, 
    output reg srl,
    output reg sra,
    output reg or_inst,  
    output reg and_inst, 

    // === Load & Store Instructions ===
    output reg lb,
    output reg lh,
    output reg lw,
    output reg lbu,
    output reg lhu,
    output reg sb,
    output reg sh,
    output reg sw,

    // === Conditional Branch Instructions ===
    output reg beq,
    output reg bne,
    output reg blt,
    output reg bge,
    output reg bltu,
    output reg bgeu,

    // === Jump Instructions ===
    output reg jal,
    output reg jalr,

    // === Upper Immediate Instructions ===
    output reg lui,
    output reg auipc,

    // === System & Environment Instructions ===
    output reg ebreak,
    output reg ecall,

    // === Previledged Instructions ===
    output reg csrrw,
    output reg csrrs,
    output reg csrrc,
    output reg mret,

    output reg fence_i,
*/