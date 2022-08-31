
int64_t __gmon_start__ = 0;

void fun_400a70();

void _init() {
    int64_t rax1;

    rax1 = __gmon_start__;
    if (rax1) {
        fun_400a70();
    }
    return;
}

void fun_400a70() {
    goto __gmon_start__;
}

int64_t __libc_start_main = 0x4009a6;

void fun_4009a0(int64_t rdi, int64_t rsi, void* rdx, int64_t rcx, int64_t r8, int64_t r9, void** a7, int64_t a8) {
    goto __libc_start_main;
}

int64_t deregister_tm_clones() {
    int64_t rax1;

    rax1 = 7;
    if (1 || (*reinterpret_cast<int32_t*>(&rax1) = 0, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0, 1)) {
        return rax1;
    } else {
        goto 0;
    }
}

int64_t freopen = 0x400986;

void fun_400980(int64_t rdi, int64_t rsi, int64_t* rdx) {
    goto freopen;
}

struct s0 {
    int32_t f0;
    int32_t f4;
    signed char[124] pad132;
    int32_t f132;
    int32_t f136;
    int32_t f140;
    int32_t f144;
    signed char f148;
    signed char[3] pad152;
    int32_t f152;
    int32_t f156; // mutex
    int32_t f160;
    int32_t f164;
    signed char[4] pad172;
    int32_t f172;
    int32_t f176;
    int32_t f180;
};

int64_t fwrite = 0x400a66;

void fun_400a60(struct s0* rdi, int64_t* rsi, uint64_t rdx, int64_t* rcx) {
    goto fwrite;
}

int64_t perror = 0x400a06;

void fun_400a00(struct s0* rdi, int64_t* rsi, ...) {
    goto perror;
}

struct s0* sh = reinterpret_cast<struct s0*>(0);

int32_t semgid = 0;

int32_t semDown(int32_t edi, int32_t esi);

void fun_400a50(int64_t rdi, int64_t* rsi);

void saveState(unsigned char* rdi, struct s0* rsi);

void saveFlightDeparted(unsigned char* rdi, struct s0* rsi);

int32_t semUp(int32_t edi, int32_t esi);

int32_t signalReadyToFlight(int64_t rdi, int64_t* rsi, uint64_t rdx) {
    struct s0* rax4;
    int32_t eax5;
    int64_t* rsi6;
    int32_t eax7;
    struct s0* rax8;
    struct s0* rax9;
    int32_t v10;
    uint32_t v11;
    struct s0* rax12;
    int64_t rax13;
    struct s0* rax14;
    struct s0* rax15;
    struct s0* rdx16;
    int64_t rdx17;
    struct s0* rdx18;
    int64_t rdx19;
    struct s0* rax20;
    struct s0* rax21;
    struct s0* rax22;
    struct s0* rax23;
    int32_t eax24;
    int64_t* rsi25;
    int32_t eax26;
    struct s0* rax27;
    int32_t eax28;
    int32_t esi29;
    int32_t eax30;

    rax4 = sh;
    eax5 = semgid;
    *reinterpret_cast<int32_t*>(&rsi6) = rax4->f156;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi6) + 4) = 0;
    eax7 = semDown(eax5, *reinterpret_cast<int32_t*>(&rsi6));
    if (eax7 == -1) {
        fun_400a00("error on the up operation for semaphore access (HT)", rsi6);
        fun_400a50(1, rsi6);
    }
    rax8 = sh;
    rax8->f4 = 3;
    rax9 = sh;
    saveState(0x603120, rax9);
    v10 = 0;
    v11 = 0;
    while (rax12 = sh, *reinterpret_cast<int32_t*>(&rax13) = rax12->f132, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax13) + 4) = 0, static_cast<uint32_t>(rax13 - 1) > v11) {
        rax14 = sh;
        v10 = v10 + *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax14) + (v11 + 20) * 4 + 12);
        ++v11;
    }
    rax15 = sh;
    rdx16 = sh;
    *reinterpret_cast<int32_t*>(&rdx17) = rdx16->f132;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx17) + 4) = 0;
    rdx18 = sh;
    *reinterpret_cast<int32_t*>(&rdx19) = static_cast<int32_t>(rdx17 - 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx19) + 4) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax15) + (rdx19 + 20) * 4 + 12) = rdx18->f144 - v10;
    rax20 = sh;
    saveFlightDeparted(0x603120, rax20);
    rax21 = sh;
    if (rax21->f144 == 21) {
        rax22 = sh;
        rax22->f148 = 1;
    }
    rax23 = sh;
    eax24 = semgid;
    *reinterpret_cast<int32_t*>(&rsi25) = rax23->f156;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi25) + 4) = 0;
    eax26 = semUp(eax24, *reinterpret_cast<int32_t*>(&rsi25));
    if (eax26 == -1) {
        fun_400a00("error on the up operation for semaphore access (HT)", rsi25);
        fun_400a50(1, rsi25);
    }
    rax27 = sh;
    eax28 = semgid;
    esi29 = rax27->f176;
    eax30 = semUp(eax28, esi29);
    return eax30;
}

int32_t fun_400940(struct s0* rdi);

int32_t shmemDettach(struct s0* rdi, int64_t* rsi, uint64_t rdx) {
    int32_t eax4;

    eax4 = fun_400940(rdi);
    return eax4;
}

int64_t __stack_chk_fail = 0x400976;

int64_t fun_400970(struct s0* rdi, int64_t* rsi, uint64_t rdx) {
    goto __stack_chk_fail;
}

void waitForNextFlight(int64_t rdi, int64_t* rsi, uint64_t rdx) {
    struct s0* rax4;
    int32_t eax5;
    int64_t* rsi6;
    int32_t eax7;
    struct s0* rax8;
    struct s0* rax9;
    struct s0* rax10;
    int32_t eax11;
    int64_t* rsi12;
    int32_t eax13;
    struct s0* rax14;
    int32_t eax15;
    int64_t* rsi16;
    int32_t eax17;

    rax4 = sh;
    eax5 = semgid;
    *reinterpret_cast<int32_t*>(&rsi6) = rax4->f156;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi6) + 4) = 0;
    eax7 = semDown(eax5, *reinterpret_cast<int32_t*>(&rsi6));
    if (eax7 == -1) {
        fun_400a00("error on the up operation for semaphore access (HT)", rsi6);
        fun_400a50(1, rsi6);
    }
    rax8 = sh;
    rax8->f4 = 0;
    rax9 = sh;
    saveState(0x603120, rax9);
    rax10 = sh;
    eax11 = semgid;
    *reinterpret_cast<int32_t*>(&rsi12) = rax10->f156;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi12) + 4) = 0;
    eax13 = semUp(eax11, *reinterpret_cast<int32_t*>(&rsi12));
    if (eax13 == -1) {
        fun_400a00("error on the down operation for semaphore access (HT)", rsi12);
        fun_400a50(1, rsi12);
    }
    rax14 = sh;
    eax15 = semgid;
    *reinterpret_cast<int32_t*>(&rsi16) = rax14->f172;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi16) + 4) = 0;
    eax17 = semDown(eax15, *reinterpret_cast<int32_t*>(&rsi16));
    if (eax17 == -1) {
        fun_400a00("error on the down operation for semaphore access (HT)", rsi16);
        fun_400a50(1, rsi16);
    }
    return;
}

int64_t exit = 0x400a56;

void fun_400a50(int64_t rdi, int64_t* rsi) {
    goto exit;
}

int64_t* openLog(unsigned char* rdi, int64_t* rsi);

void fun_4009b0(int64_t* rdi, int64_t* rsi, int64_t rdx, int64_t* rcx);

void fun_400990(int64_t rdi, int64_t* rsi, int64_t rdx, int64_t* rcx);

void closeLog(int64_t* rdi, int64_t* rsi, ...);

void saveState(unsigned char* rdi, struct s0* rsi) {
    struct s0* v3;
    int64_t* rax4;
    int64_t* v5;
    int64_t rdx6;
    int64_t* rcx7;
    int64_t rdx8;
    int64_t* rcx9;
    int64_t* rcx10;
    int32_t v11;
    int64_t* rcx12;
    int64_t* rcx13;
    int64_t rdx14;
    int64_t* rcx15;
    int64_t rdx16;
    int64_t* rcx17;
    int64_t rdx18;
    int64_t* rcx19;
    int64_t* rcx20;

    v3 = rsi;
    rax4 = openLog(rdi, "a");
    v5 = rax4;
    *reinterpret_cast<int32_t*>(&rdx6) = v3->f0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx6) + 4) = 0;
    fun_4009b0(v5, "%3d", rdx6, rcx7);
    *reinterpret_cast<int32_t*>(&rdx8) = v3->f4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx8) + 4) = 0;
    fun_4009b0(v5, "%3d", rdx8, rcx9);
    fun_400990(32, v5, rdx8, rcx10);
    v11 = 0;
    while (v11 <= 20) {
        *reinterpret_cast<int32_t*>(&rdx8) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(v3) + v11 * 4 + 8);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx8) + 4) = 0;
        fun_4009b0(v5, "%4d", rdx8, rcx12);
        ++v11;
    }
    fun_400990(32, v5, rdx8, rcx13);
    *reinterpret_cast<int32_t*>(&rdx14) = v3->f136;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx14) + 4) = 0;
    fun_4009b0(v5, "%4d", rdx14, rcx15);
    *reinterpret_cast<int32_t*>(&rdx16) = v3->f140;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = 0;
    fun_4009b0(v5, "%4d", rdx16, rcx17);
    *reinterpret_cast<int32_t*>(&rdx18) = v3->f144;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx18) + 4) = 0;
    fun_4009b0(v5, "%4d", rdx18, rcx19);
    fun_400990(10, v5, rdx18, rcx20);
    closeLog(v5, v5, v5, v5);
    return;
}

uint64_t g28;

int64_t fun_400a40(struct s0* rdi, int64_t* rsi, int64_t rdx);

int32_t semUp(int32_t edi, int32_t esi) {
    uint64_t rax3;
    int64_t* rsi4;
    struct s0* rdi5;
    int64_t rax6;
    uint64_t rdx7;

    rax3 = g28;
    rsi4 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 16);
    *reinterpret_cast<int32_t*>(&rdi5) = edi;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = 0;
    rax6 = fun_400a40(rdi5, rsi4, 1);
    rdx7 = rax3 ^ g28;
    if (rdx7) {
        rax6 = fun_400970(rdi5, rsi4, rdx7);
    }
    return *reinterpret_cast<int32_t*>(&rax6);
}

void waitForPassenger(int64_t rdi, int64_t* rsi, uint64_t rdx) {
    struct s0* rax4;
    int32_t eax5;
    int64_t* rsi6;
    int32_t eax7;
    struct s0* rax8;
    struct s0* rax9;
    struct s0* rax10;
    int32_t eax11;
    int64_t* rsi12;
    int32_t eax13;
    struct s0* rax14;
    int32_t eax15;
    int64_t* rsi16;
    int32_t eax17;

    rax4 = sh;
    eax5 = semgid;
    *reinterpret_cast<int32_t*>(&rsi6) = rax4->f156;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi6) + 4) = 0;
    eax7 = semDown(eax5, *reinterpret_cast<int32_t*>(&rsi6));
    if (eax7 == -1) {
        fun_400a00("error on the up operation for semaphore access (HT)", rsi6);
        fun_400a50(1, rsi6);
    }
    rax8 = sh;
    rax8->f4 = 1;
    rax9 = sh;
    saveState(0x603120, rax9);
    rax10 = sh;
    eax11 = semgid;
    *reinterpret_cast<int32_t*>(&rsi12) = rax10->f156;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi12) + 4) = 0;
    eax13 = semUp(eax11, *reinterpret_cast<int32_t*>(&rsi12));
    if (eax13 == -1) {
        fun_400a00("error on the down operation for semaphore access (HT)", rsi12);
        fun_400a50(1, rsi12);
    }
    rax14 = sh;
    eax15 = semgid;
    *reinterpret_cast<int32_t*>(&rsi16) = rax14->f160;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi16) + 4) = 0;
    eax17 = semDown(eax15, *reinterpret_cast<int32_t*>(&rsi16));
    if (eax17 == -1) {
        fun_400a00("error on the down operation for semaphore access (HT)", rsi16);
        fun_400a50(1, rsi16);
    }
    return;
}

void savePassengerChecked(unsigned char* rdi, struct s0* rsi);

int32_t nPassengersInFlight(unsigned char* rdi, struct s0* rsi);

int32_t nPassengersInQueue(unsigned char* rdi, struct s0* rsi);

unsigned char checkPassport(int64_t rdi, int64_t* rsi, uint64_t rdx) {
    struct s0* rax4;
    int32_t eax5;
    int64_t* rsi6;
    int32_t eax7;
    struct s0* rax8;
    int32_t eax9;
    int64_t* rsi10;
    int32_t eax11;
    struct s0* rax12;
    struct s0* rax13;
    struct s0* rax14;
    int32_t eax15;
    int64_t* rsi16;
    int32_t eax17;
    struct s0* rax18;
    int32_t eax19;
    int64_t* rsi20;
    int32_t eax21;
    struct s0* rax22;
    int32_t eax23;
    int64_t* rsi24;
    int32_t eax25;
    struct s0* rax26;
    struct s0* rax27;
    struct s0* rax28;
    struct s0* rax29;
    struct s0* rax30;
    int32_t eax31;
    int32_t eax32;
    int32_t eax33;
    struct s0* rax34;
    int32_t eax35;
    struct s0* rax36;
    int32_t eax37;
    int64_t* rsi38;
    int32_t eax39;
    uint32_t eax40;

    rax4 = sh;
    eax5 = semgid;
    *reinterpret_cast<int32_t*>(&rsi6) = rax4->f164;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi6) + 4) = 0;
    eax7 = semUp(eax5, *reinterpret_cast<int32_t*>(&rsi6));
    if (eax7 == -1) {
        fun_400a00("error on the up operation for semaphore access (HT)", rsi6);
        fun_400a50(1, rsi6);
    }
    rax8 = sh;
    eax9 = semgid;
    *reinterpret_cast<int32_t*>(&rsi10) = rax8->f156;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = 0;
    eax11 = semDown(eax9, *reinterpret_cast<int32_t*>(&rsi10));
    if (eax11 == -1) {
        fun_400a00("error on the up operation for semaphore access (HT)", rsi10);
        fun_400a50(1, rsi10);
    }
    rax12 = sh;
    rax12->f4 = 2;
    rax13 = sh;
    saveState(0x603120, rax13);
    rax14 = sh;
    eax15 = semgid;
    *reinterpret_cast<int32_t*>(&rsi16) = rax14->f156;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi16) + 4) = 0;
    eax17 = semUp(eax15, *reinterpret_cast<int32_t*>(&rsi16));
    if (eax17 == -1) {
        fun_400a00("error on the up operation for semaphore access (HT)", rsi16);
        fun_400a50(1, rsi16);
    }
    rax18 = sh;
    eax19 = semgid;
    *reinterpret_cast<int32_t*>(&rsi20) = rax18->f180;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi20) + 4) = 0;
    eax21 = semDown(eax19, *reinterpret_cast<int32_t*>(&rsi20));
    if (eax21 == -1) {
        fun_400a00("error on the down operation for semaphore access (HT)", rsi20);
        fun_400a50(1, rsi20);
    }
    rax22 = sh;
    eax23 = semgid;
    *reinterpret_cast<int32_t*>(&rsi24) = rax22->f156;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi24) + 4) = 0;
    eax25 = semDown(eax23, *reinterpret_cast<int32_t*>(&rsi24));
    if (eax25 == -1) {
        fun_400a00("error on the up operation for semaphore access (HT)", rsi24);
        fun_400a50(1, rsi24);
    }
    rax26 = sh;
    rax26->f136 = rax26->f136 - 1;
    rax27 = sh;
    rax27->f140 = rax27->f140 + 1;
    rax28 = sh;
    rax28->f144 = rax28->f144 + 1;
    rax29 = sh;
    savePassengerChecked(0x603120, rax29);
    rax30 = sh;
    saveState(0x603120, rax30);
    eax31 = nPassengersInFlight(0x603120, rax30);
    if (eax31 > 9 || ((eax32 = nPassengersInFlight(0x603120, rax30), eax32 > 4) && (eax33 = nPassengersInQueue(0x603120, rax30), eax33 == 0) || (rax34 = sh, rax34->f144 == 21))) {
        eax35 = 1;
    } else {
        eax35 = 0;
    }
    rax36 = sh;
    eax37 = semgid;
    *reinterpret_cast<int32_t*>(&rsi38) = rax36->f156;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi38) + 4) = 0;
    eax39 = semUp(eax37, *reinterpret_cast<int32_t*>(&rsi38));
    if (eax39 == -1) {
        fun_400a00("error on the up operation for semaphore access (HT)", rsi38);
        fun_400a50(1, rsi38);
    }
    eax40 = *reinterpret_cast<unsigned char*>(&eax35) & 1;
    return *reinterpret_cast<unsigned char*>(&eax40);
}

int32_t semDown(int32_t edi, int32_t esi) {
    uint64_t rax3;
    int64_t* rsi4;
    struct s0* rdi5;
    int64_t rax6;
    uint64_t rdx7;

    rax3 = g28;
    rsi4 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 16);
    *reinterpret_cast<int32_t*>(&rdi5) = edi;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = 0;
    rax6 = fun_400a40(rdi5, rsi4, 1);
    rdx7 = rax3 ^ g28;
    if (rdx7) {
        rax6 = fun_400970(rdi5, rsi4, rdx7);
    }
    return *reinterpret_cast<int32_t*>(&rax6);
}

void savePassengerChecked(unsigned char* rdi, struct s0* rsi) {
    int64_t* rax3;
    int64_t* rcx4;
    int64_t rdx5;

    rax3 = openLog(rdi, "a");
    *reinterpret_cast<int32_t*>(&rcx4) = rsi->f152;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx4) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdx5) = rsi->f132;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = 0;
    fun_4009b0(rax3, "Flight %d : Passenger %d checked\n", rdx5, rcx4);
    closeLog(rax3, "Flight %d : Passenger %d checked\n", rax3, "Flight %d : Passenger %d checked\n");
    return;
}

int32_t nPassengersInFlight(unsigned char* rdi, struct s0* rsi) {
    struct s0* rax3;

    rax3 = sh;
    return rax3->f140;
}

int32_t nPassengersInQueue(unsigned char* rdi, struct s0* rsi) {
    struct s0* rax3;

    rax3 = sh;
    return rax3->f136;
}

void printHeader(int64_t* rdi, int64_t* rsi, int64_t rdx, int64_t* rcx);

void saveFlightDeparted(unsigned char* rdi, struct s0* rsi) {
    int64_t* rax3;
    int64_t rax4;
    int64_t rdx5;
    int64_t* rcx6;
    int64_t rdx7;

    rax3 = openLog(rdi, "a");
    *reinterpret_cast<int32_t*>(&rax4) = rsi->f132;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdx5) = static_cast<int32_t>(rax4 - 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rcx6) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsi) + (rdx5 + 20) * 4 + 12);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx6) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdx7) = rsi->f132;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx7) + 4) = 0;
    fun_4009b0(rax3, "Flight %d : Departed with %d passengers\n", rdx7, rcx6);
    printHeader(rax3, "Flight %d : Departed with %d passengers\n", rdx7, rcx6);
    closeLog(rax3, "Flight %d : Departed with %d passengers\n", rax3, "Flight %d : Departed with %d passengers\n");
    return;
}

int64_t* stdout = reinterpret_cast<int64_t*>(0);

int64_t* fun_4009f0(unsigned char* rdi, int64_t* rsi);

int64_t* openLog(unsigned char* rdi, int64_t* rsi) {
    uint32_t eax3;
    int64_t* rax4;
    int64_t* rax5;

    if (!rdi || (eax3 = *rdi, !*reinterpret_cast<signed char*>(&eax3))) {
        rax4 = stdout;
    } else {
        rax5 = fun_4009f0(rdi, rsi);
        if (!rax5) {
            fun_400a00("error on opening log file", rsi);
            fun_400a50(1, rsi);
        }
        rax4 = rax5;
    }
    return rax4;
}

int64_t fflush = 0x4009d6;

void fun_4009d0(int64_t* rdi) {
    goto fflush;
}

int64_t fputc = 0x400996;

void fun_400990(int64_t rdi, int64_t* rsi, int64_t rdx, int64_t* rcx) {
    goto fputc;
}

int64_t fprintf = 0x4009b6;

void fun_4009b0(int64_t* rdi, int64_t* rsi, int64_t rdx, int64_t* rcx) {
    goto fprintf;
}

int64_t* stderr = reinterpret_cast<int64_t*>(0);

int32_t fun_400960(int64_t* rdi);

void closeLog(int64_t* rdi, int64_t* rsi, ...) {
    int64_t* rax3;
    int64_t* rax4;
    int32_t eax5;

    rax3 = stderr;
    if (rdi == rax3 || (rax4 = stdout, rdi == rax4)) {
        fun_4009d0(rdi);
    } else {
        eax5 = fun_400960(rdi);
        if (eax5 == -1) {
            fun_400a00("error on closing of log file", rsi);
            fun_400a50(1, rsi);
        }
    }
    return;
}

int64_t strcpy = 0x400936;

void fun_400930(int64_t rdi, int64_t rsi, int64_t* rdx) {
    goto strcpy;
}

int64_t strtol = 0x4009c6;

int32_t fun_4009c0(int64_t rdi, int64_t* rsi, uint64_t rdx) {
    goto strtol;
}

int32_t fun_400910(struct s0* rdi, int64_t* rsi, int64_t rdx);

int32_t semConnect(int32_t edi, int64_t* rsi, uint64_t rdx) {
    uint64_t rax4;
    int64_t* rsi5;
    struct s0* rdi6;
    int32_t eax7;
    int64_t rax8;
    int64_t rax9;
    uint64_t rdx10;

    rax4 = g28;
    *reinterpret_cast<int32_t*>(&rsi5) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi5) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdi6) = edi;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = 0;
    eax7 = fun_400910(rdi6, 1, 0x180);
    if (eax7 != -1) {
        rsi5 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 32);
        *reinterpret_cast<int32_t*>(&rdi6) = eax7;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = 0;
        rax8 = fun_400a40(rdi6, rsi5, 2);
        if (*reinterpret_cast<int32_t*>(&rax8) != -1) {
            *reinterpret_cast<int32_t*>(&rax9) = eax7;
        } else {
            *reinterpret_cast<int32_t*>(&rax9) = -1;
        }
    } else {
        *reinterpret_cast<int32_t*>(&rax9) = -1;
    }
    rdx10 = rax4 ^ g28;
    if (rdx10) {
        rax9 = fun_400970(rdi6, rsi5, rdx10);
    }
    return *reinterpret_cast<int32_t*>(&rax9);
}

int32_t fun_400a30(int64_t rdi, int64_t rsi, int64_t rdx);

int32_t shmemConnect(int32_t edi, int64_t* rsi, uint64_t rdx) {
    int64_t rdi4;
    int32_t eax5;

    *reinterpret_cast<int32_t*>(&rdi4) = edi;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = 0;
    eax5 = fun_400a30(rdi4, 1, 0x180);
    return eax5;
}

int64_t fun_400a20(int64_t rdi, int64_t rsi, int64_t rdx);

int32_t shmemAttach(int32_t edi, int64_t* rsi, uint64_t rdx) {
    int64_t rdi4;
    int64_t rax5;
    int32_t eax6;

    *reinterpret_cast<int32_t*>(&rdi4) = edi;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = 0;
    rax5 = fun_400a20(rdi4, 0, 0);
    if (rax5 == -1) {
        eax6 = 1;
    } else {
        *rsi = rax5;
        eax6 = 0;
    }
    return eax6;
}

int64_t getpid = 0x400956;

int32_t fun_400950(int64_t rdi, int64_t* rsi, uint64_t rdx) {
    goto getpid;
}

int64_t srandom = 0x400926;

void fun_400920(int64_t rdi, int64_t* rsi, uint64_t rdx) {
    goto srandom;
}

int64_t shmdt = 0x400946;

int32_t fun_400940(struct s0* rdi) {
    goto shmdt;
}

int64_t semop = 0x400a46;

int64_t fun_400a40(struct s0* rdi, int64_t* rsi, int64_t rdx) {
    goto semop;
}

void printHeader(int64_t* rdi, int64_t* rsi, int64_t rdx, int64_t* rcx) {
    int64_t* v5;
    int64_t rdx6;
    int32_t v7;

    v5 = rdi;
    fun_4009b0(v5, "%3s", "PT", rcx);
    *reinterpret_cast<int32_t*>(&rdx6) = reinterpret_cast<int32_t>("HT");
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx6) + 4) = 0;
    fun_4009b0(v5, "%3s", "HT", rcx);
    fun_400990(32, v5, "HT", rcx);
    v7 = 0;
    while (v7 <= 20) {
        *reinterpret_cast<int32_t*>(&rcx) = v7;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rdx6) = reinterpret_cast<int32_t>("P");
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx6) + 4) = 0;
        fun_4009b0(v5, " %s%02d", "P", rcx);
        ++v7;
    }
    fun_400990(32, v5, rdx6, rcx);
    fun_4009b0(v5, "%4s", "InQ", rcx);
    fun_4009b0(v5, "%4s", "InF", rcx);
    fun_4009b0(v5, "%4s", "toB", rcx);
    fun_400990(10, v5, "toB", rcx);
    return;
}

int64_t shmget = 0x400a36;

int32_t fun_400a30(int64_t rdi, int64_t rsi, int64_t rdx) {
    goto shmget;
}

int64_t semctl = 0x400a16;

void fun_400a10(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    goto semctl;
}

int64_t fopen = 0x4009f6;

int64_t* fun_4009f0(unsigned char* rdi, int64_t* rsi) {
    goto fopen;
}

int64_t fclose = 0x400966;

int32_t fun_400960(int64_t* rdi) {
    goto fclose;
}

int64_t semget = 0x400916;

int32_t fun_400910(struct s0* rdi, int64_t* rsi, int64_t rdx) {
    goto semget;
}

int64_t shmat = 0x400a26;

int64_t fun_400a20(int64_t rdi, int64_t rsi, int64_t rdx) {
    goto shmat;
}

int64_t shmctl = 0x4009e6;

void fun_4009e0(int64_t rdi, int64_t rsi, int64_t rdx) {
    goto shmctl;
}

struct s1 {
    signed char[8] pad8;
    int64_t f8;
    int64_t f16;
    int64_t f24;
};

int64_t main(int32_t edi, struct s1* rsi);

void __libc_csu_init(int32_t edi, int64_t rsi, int64_t rdx);

void __libc_csu_fini();

void _start() {
    void* rsp1;
    int64_t rdx2;
    int64_t rax3;

    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    fun_4009a0(main, __return_address(), rsp1, __libc_csu_init, __libc_csu_fini, rdx2, (reinterpret_cast<uint64_t>(rsp1) & 0xfffffffffffffff0) - 8 - 8, rax3);
    __asm__("hlt ");
}

void _fini() {
    return;
}

void fun_400b25() {
    int64_t v1;

    goto v1;
}

int64_t __JCR_END__ = 0;

void fwrite();

void frame_dummy() {
    int1_t zf1;

    zf1 = __JCR_END__ == 0;
    if (!(zf1 || 1)) {
        fwrite();
    }
    if (1) 
        goto 0x400b28;
    if (1) 
        goto 0x400b28;
    goto 0;
}

int32_t shmid = 0;

int64_t main(int32_t edi, struct s1* rsi) {
    uint64_t rax3;
    uint64_t v4;
    int64_t* rdx5;
    int64_t rdi6;
    int64_t rsi7;
    uint64_t rdx8;
    int64_t* rsi9;
    int64_t rdi10;
    int32_t eax11;
    uint32_t eax12;
    unsigned char* v13;
    int32_t eax14;
    int32_t eax15;
    int32_t eax16;
    int32_t eax17;
    int32_t eax18;
    int64_t rdi19;
    int32_t eax20;
    int32_t eax21;
    int64_t rdi22;
    int32_t v23;
    unsigned char al24;
    uint32_t eax25;
    struct s0* rax26;
    struct s0* rdi27;
    int32_t eax28;
    int64_t rax29;
    int64_t* rax30;
    int64_t* rax31;
    int64_t* rax32;
    uint64_t rcx33;

    rax3 = g28;
    v4 = rax3;
    if (edi == 4) {
        rdx5 = stderr;
        rdi6 = rsi->f24;
        fun_400980(rdi6, "w", rdx5);
        rsi7 = rsi->f8;
        fun_400930(0x603120, rsi7, rdx5);
        *reinterpret_cast<int32_t*>(&rdx8) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx8) + 4) = 0;
        rsi9 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 16);
        rdi10 = rsi->f16;
        eax11 = fun_4009c0(rdi10, rsi9, 0);
        eax12 = *v13;
        if (!*reinterpret_cast<signed char*>(&eax12)) {
            eax14 = semConnect(eax11, rsi9, 0);
            semgid = eax14;
            eax15 = semgid;
            if (eax15 != -1) {
                eax16 = shmemConnect(eax11, rsi9, 0);
                shmid = eax16;
                eax17 = shmid;
                if (eax17 != -1) {
                    eax18 = shmid;
                    *reinterpret_cast<int32_t*>(&rsi9) = 0x603160;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = 0;
                    *reinterpret_cast<int32_t*>(&rdi19) = eax18;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi19) + 4) = 0;
                    eax20 = shmemAttach(*reinterpret_cast<int32_t*>(&rdi19), 0x603160, 0);
                    if (eax20 != -1) {
                        eax21 = fun_400950(rdi19, 0x603160, 0);
                        *reinterpret_cast<int32_t*>(&rdi22) = eax21;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi22) + 4) = 0;
                        fun_400920(rdi22, 0x603160, 0);
                        v23 = 0;
                        while (v23 <= 20) {
                            waitForNextFlight(rdi22, 0x603160, 0);
                            do {
                                waitForPassenger(rdi22, 0x603160, 0);
                                al24 = checkPassport(rdi22, 0x603160, 0);
                                ++v23;
                                eax25 = static_cast<uint32_t>(al24) ^ 1;
                            } while (*reinterpret_cast<signed char*>(&eax25));
                            signalReadyToFlight(rdi22, 0x603160, 0);
                        }
                        rax26 = sh;
                        rdi27 = rax26;
                        eax28 = shmemDettach(rdi27, 0x603160, 0);
                        if (eax28 == -1) 
                            goto addr_400d56_12;
                    } else {
                        *reinterpret_cast<int32_t*>(&rdi27) = reinterpret_cast<int32_t>("error on mapping the shared region on the process address space");
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi27) + 4) = 0;
                        fun_400a00("error on mapping the shared region on the process address space", 0x603160, "error on mapping the shared region on the process address space", 0x603160);
                        *reinterpret_cast<int32_t*>(&rax29) = 1;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax29) + 4) = 0;
                        goto addr_400d6c_14;
                    }
                } else {
                    *reinterpret_cast<int32_t*>(&rdi27) = reinterpret_cast<int32_t>("error on connecting to the shared memory region");
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi27) + 4) = 0;
                    fun_400a00("error on connecting to the shared memory region", rsi9, "error on connecting to the shared memory region", rsi9);
                    *reinterpret_cast<int32_t*>(&rax29) = 1;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax29) + 4) = 0;
                    goto addr_400d6c_14;
                }
            } else {
                *reinterpret_cast<int32_t*>(&rdi27) = reinterpret_cast<int32_t>("error on connecting to the semaphore set");
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi27) + 4) = 0;
                fun_400a00("error on connecting to the semaphore set", rsi9, "error on connecting to the semaphore set", rsi9);
                *reinterpret_cast<int32_t*>(&rax29) = 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax29) + 4) = 0;
                goto addr_400d6c_14;
            }
        } else {
            rax30 = stderr;
            *reinterpret_cast<int32_t*>(&rdx8) = 39;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx8) + 4) = 0;
            *reinterpret_cast<int32_t*>(&rsi9) = 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = 0;
            *reinterpret_cast<int32_t*>(&rdi27) = reinterpret_cast<int32_t>("Error on the access key communication!\n");
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi27) + 4) = 0;
            fun_400a60("Error on the access key communication!\n", 1, 39, rax30);
            *reinterpret_cast<int32_t*>(&rax29) = 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax29) + 4) = 0;
            goto addr_400d6c_14;
        }
    } else {
        rax31 = stderr;
        fun_400980("error_HT", "a", rax31);
        rax32 = stderr;
        *reinterpret_cast<int32_t*>(&rdx8) = 35;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx8) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rsi9) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rdi27) = reinterpret_cast<int32_t>("Number of parameters is incorrect!\n");
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi27) + 4) = 0;
        fun_400a60("Number of parameters is incorrect!\n", 1, 35, rax32);
        *reinterpret_cast<int32_t*>(&rax29) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax29) + 4) = 0;
        goto addr_400d6c_14;
    }
    *reinterpret_cast<int32_t*>(&rax29) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax29) + 4) = 0;
    addr_400d6c_14:
    rcx33 = v4 ^ g28;
    if (rcx33) {
        rax29 = fun_400970(rdi27, rsi9, rdx8);
    }
    return rax29;
    addr_400d56_12:
    *reinterpret_cast<int32_t*>(&rdi27) = reinterpret_cast<int32_t>("error on unmapping the shared region off the process address space");
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi27) + 4) = 0;
    fun_400a00("error on unmapping the shared region off the process address space", 0x603160, "error on unmapping the shared region off the process address space", 0x603160);
    *reinterpret_cast<int32_t*>(&rax29) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax29) + 4) = 0;
    goto addr_400d6c_14;
}

int32_t shmemCreate(int32_t edi, int32_t esi) {
    int64_t rcx3;
    int64_t rdi4;
    int32_t eax5;

    *reinterpret_cast<int32_t*>(&rcx3) = esi;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdi4) = edi;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = 0;
    eax5 = fun_400a30(rdi4, rcx3, 0x780);
    return eax5;
}

void semDestroy(int32_t edi) {
    int64_t rdi2;

    *reinterpret_cast<int32_t*>(&rdi2) = edi;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = 0;
    fun_400a10(rdi2, 0, 0, 0);
    return;
}

void createLog(unsigned char* rdi) {
    int64_t* rax2;
    int64_t* rcx3;
    int64_t* rcx4;

    rax2 = openLog(rdi, "w");
    fun_4009b0(rax2, "%31cAir Lift - Description of the internal state\n\n", 32, rcx3);
    printHeader(rax2, "%31cAir Lift - Description of the internal state\n\n", 32, rcx4);
    closeLog(rax2, "%31cAir Lift - Description of the internal state\n\n", rax2, "%31cAir Lift - Description of the internal state\n\n");
    return;
}

struct s2 {
    signed char[132] pad132;
    int32_t f132;
};

void saveStartBoarding(unsigned char* rdi, struct s2* rsi) {
    int64_t* rax3;
    int64_t rdx4;
    int64_t* rcx5;
    int64_t* rcx6;

    rax3 = openLog(rdi, "a");
    *reinterpret_cast<int32_t*>(&rdx4) = rsi->f132;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx4) + 4) = 0;
    fun_4009b0(rax3, "Flight %d : Boarding Started\n", rdx4, rcx5);
    printHeader(rax3, "Flight %d : Boarding Started\n", rdx4, rcx6);
    closeLog(rax3, "Flight %d : Boarding Started\n", rax3, "Flight %d : Boarding Started\n");
    return;
}

void __libc_csu_init(int32_t edi, int64_t rsi, int64_t rdx) {
    int32_t r15d4;
    int64_t r14_5;
    int64_t r13_6;
    int64_t rbx7;
    int64_t rdi8;

    r15d4 = edi;
    r14_5 = rsi;
    r13_6 = rdx;
    _init();
    if (!0) {
        *reinterpret_cast<int32_t*>(&rbx7) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx7) + 4) = 0;
        do {
            *reinterpret_cast<int32_t*>(&rdi8) = r15d4;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = 0;
            *reinterpret_cast<int64_t*>(0x602e10 + rbx7 * 8)(rdi8, r14_5, r13_6);
            ++rbx7;
        } while (rbx7 != 1);
    }
    return;
}

void __libc_csu_fini() {
    return;
}

int64_t g603010 = 0;

void fun_400916() {
    goto g603010;
}

void fun_4009a6() {
    goto 0x400900;
}

/* completed.7594 */
signed char completed_7594 = 0;

int64_t __do_global_dtors_aux() {
    int1_t zf1;
    int64_t rax2;

    zf1 = completed_7594 == 0;
    if (zf1) {
        rax2 = deregister_tm_clones();
        completed_7594 = 1;
    }
    return rax2;
}

void fun_400986() {
    goto 0x400900;
}

void fun_400a66() {
    goto 0x400900;
}

void fun_400a06() {
    goto 0x400900;
}

int32_t semCreate(int32_t edi, int32_t esi) {
    int64_t* rsi3;
    struct s0* rdi4;
    int32_t eax5;

    *reinterpret_cast<int32_t*>(&rsi3) = esi + 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi3) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdi4) = edi;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = 0;
    eax5 = fun_400910(rdi4, rsi3, 0x780);
    return eax5;
}

void fun_400976() {
    goto 0x400900;
}

void fun_400a56() {
    goto 0x400900;
}

struct s3 {
    signed char[132] pad132;
    int32_t f132;
};

void saveFlightArrived(unsigned char* rdi, struct s3* rsi) {
    int64_t* rax3;
    int64_t rdx4;
    int64_t* rcx5;
    int64_t* rcx6;

    rax3 = openLog(rdi, "a");
    *reinterpret_cast<int32_t*>(&rdx4) = rsi->f132;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx4) + 4) = 0;
    fun_4009b0(rax3, "Flight %d : Arrived \n", rdx4, rcx5);
    printHeader(rax3, "Flight %d : Arrived \n", rdx4, rcx6);
    closeLog(rax3, "Flight %d : Arrived \n", rax3, "Flight %d : Arrived \n");
    return;
}

int64_t semSignal(int32_t edi) {
    uint64_t rax2;
    int64_t* rsi3;
    struct s0* rdi4;
    int64_t rax5;
    uint64_t rdx6;

    rax2 = g28;
    rsi3 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 16);
    *reinterpret_cast<int32_t*>(&rdi4) = edi;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = 0;
    rax5 = fun_400a40(rdi4, rsi3, 1);
    rdx6 = rax2 ^ g28;
    if (rdx6) {
        rax5 = fun_400970(rdi4, rsi3, rdx6);
    }
    return rax5;
}

void fun_4009d6() {
    goto 0x400900;
}

void fun_400996() {
    goto 0x400900;
}

void fun_4009b6() {
    goto 0x400900;
}

void fun_400936() {
    goto 0x400900;
}

void fun_4009c6() {
    goto 0x400900;
}

void shmemDestroy(int32_t edi) {
    int64_t rdi2;

    *reinterpret_cast<int32_t*>(&rdi2) = edi;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = 0;
    fun_4009e0(rdi2, 0, 0);
    return;
}

void fun_400956() {
    goto 0x400900;
}

void fun_400926() {
    goto 0x400900;
}

void fun_400946() {
    goto 0x400900;
}

void fun_400a46() {
    goto 0x400900;
}

struct s4 {
    signed char[132] pad132;
    int32_t f132;
};

void saveFlightReturning(unsigned char* rdi, struct s4* rsi) {
    int64_t* rax3;
    int64_t rdx4;
    int64_t* rcx5;
    int64_t* rcx6;

    rax3 = openLog(rdi, "a");
    *reinterpret_cast<int32_t*>(&rdx4) = rsi->f132;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx4) + 4) = 0;
    fun_4009b0(rax3, "Flight %d : Returning \n", rdx4, rcx5);
    printHeader(rax3, "Flight %d : Returning \n", rdx4, rcx6);
    closeLog(rax3, "Flight %d : Returning \n", rax3, "Flight %d : Returning \n");
    return;
}

void fun_400a36() {
    goto 0x400900;
}

void fun_400a16() {
    goto 0x400900;
}

void fun_4009f6() {
    goto 0x400900;
}

void fun_400966() {
    goto 0x400900;
}

void fun_400a26() {
    goto 0x400900;
}

struct s5 {
    signed char[132] pad132;
    uint32_t f132;
};

void saveAirLiftResult(unsigned char* rdi, struct s5* rsi) {
    struct s5* v3;
    int64_t* rax4;
    int64_t* v5;
    int64_t rdx6;
    int64_t* rsi7;
    uint32_t v8;
    int64_t rax9;
    int64_t* rcx10;
    int64_t rdx11;

    v3 = rsi;
    rax4 = openLog(rdi, "a");
    v5 = rax4;
    fun_400a60("AirLift result\n", 1, 15, v5);
    *reinterpret_cast<uint32_t*>(&rdx6) = v3->f132;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx6) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rsi7) = reinterpret_cast<int32_t>("AirLift used %d Flights\n");
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = 0;
    fun_4009b0(v5, "AirLift used %d Flights\n", rdx6, v5);
    v8 = 0;
    while (v3->f132 > v8) {
        *reinterpret_cast<uint32_t*>(&rax9) = v8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rcx10) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(v3) + (v8 + 20) * 4 + 12);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx10) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rdx11) = static_cast<int32_t>(rax9 + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx11) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rsi7) = reinterpret_cast<int32_t>("Flight %d took %2d passengers\n");
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = 0;
        fun_4009b0(v5, "Flight %d took %2d passengers\n", rdx11, rcx10);
        ++v8;
    }
    closeLog(v5, rsi7);
    return;
}

void fun_4009e6() {
    goto 0x400900;
}
