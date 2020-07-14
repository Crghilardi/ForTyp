#include <array>
#include <algorithm>
#include <cmath>
#include <map>
#include <string>
#include <vector>
#include "tree.hpp"
#include "forest_type.hpp"
#include "stocking_values.hpp"

int forest_type(std::vector<Tree> treeList, bool sn_var = false){

std::array<double, 211> s = stocking_values(treeList);

    double inscdr = 0.0;
    double intmaplw = 0.0;
    double jackpin = 0.0;
    double japblkp = 0.0;
    double jfbcdgfr = 0.0;
    double juniprw = 0.0;
    double knbpin = 0.0;
    double lmbrpin = 0.0;
    double lnglfp = 0.0;
    double lnglfslh = 0.0;
    double lobp = 0.0;
    double lobshrtp = 0.0;
    double lodgpole = 0.0;
    double lrchpin = 0.0;
    double lsprfir = 0.0;
    double lwelascw = 0.0;
    double lwokgmcy = 0.0;
    double mangrv = 0.0;
    double mbb = 0.0;
    double meluca = 0.0;
    double mesquitw = 0.0;
    double miscwhwd = 0.0;
    double miscwsfw = 0.0;
    double mntrypin = 0.0;
    double mplbaswd = 0.0;
    double mplbchyb = 0.0;
    double mtnbrshw = 0.0;
    double mtnhmlk = 0.0;
    double mxdhwd = 0.0;
    double noblfir = 0.0;
    double nroak = 0.0;
    double nwhcdr = 0.0;
    double qoak2 = 0.0;
    int upland = 0;
    double upoakhic = 0.0;
    double upmpbcbr = 0.0;
    double totstk = 0.0;
    double othspc = 0.0;
    double othhrd = 0.0;
    double othsft = 0.0;
    //double othall = 0.0;
    double pinoak = 0.0;
    double sweetgum = 0.0;
    double holly = 0.0;
    double beech = 0.0;
    double blkgum = 0.0;
    double ectnwd = 0.0;
    double whash = 0.0;
    double slvrmpl = 0.0;
    double wcelm = 0.0;
    double aelm = 0.0;
    double sroak = 0.0;
    double uplohwd = 0.0;
    double uplooak = 0.0;
    double othexhwd = 0.0;
    double euclpt = 0.0;
    double palonia = 0.0;
    double exhwds = 0.0;
    double palm = 0.0;
    double pacmdrn = 0.0;
    double othwhwd = 0.0;
    double gntchnk = 0.0;
    double trophwds = 0.0;
    double clflrel = 0.0;
    double tanoak = 0.0;
    double tanoklrl = 0.0;
    double eoakwdld = 0.0;
    double doakwdld = 0.0;
    double canylo = 0.0;
    double costlo = 0.0;
    double graypine = 0.0;
    double blueoak = 0.0;
    double orgwho = 0.0;
    double clfbo = 0.0;
    double wstoak = 0.0;
    double bglfmpl = 0.0;
    double redaldr = 0.0;
    double aldrmapl = 0.0;
    double paprbrch = 0.0;
    double blsmpop = 0.0;
    double aspen = 0.0;
    double aspbrch = 0.0;
    double elmashlo = 0.0;
    double bcwayp = 0.0;
    double blch = 0.0;
    double orgnash = 0.0;
    double ctnwwilo = 0.0;
    double slvmaelm = 0.0;
    double sgbelmga = 0.0;
    double baelmmap = 0.0;
    double hrdwds = 0.0;
    double oakpin = 0.0;
    double oakhck = 0.0;
    double whoak = 0.0;
    double buroak = 0.0;
    double chstoak = 0.0;
    double scrltoak = 0.0;
    double yp = 0.0;
    double bwalnut = 0.0;
    double blcst = 0.0;
    double redmapl = 0.0;
    double pstbljko = 0.0;
    double chblsc = 0.0;
    double worohk = 0.0;
    double ypworo = 0.0;
    double scruboak = 0.0;
    double swgyp = 0.0;
    double sasfprsm = 0.0;
    double okgmcyp = 0.0;
    double atlwcdr = 0.0;
    double sbstrm = 0.0;
    double schchbo = 0.0;
    double swgwilo = 0.0;
    double cypwtup = 0.0;
    double ovrcupwh = 0.0;
    double elmashcw = 0.0;
    double ctnwd = 0.0;
    double willow = 0.0;
    double rbrchsyc = 0.0;
    double sycpcelm = 0.0;
    double othexswd = 0.0;
    double scotchp = 0.0;
    double exsftwd = 0.0;
    double tamrck = 0.0;
    double blkspr = 0.0;
    double whspr = 0.0;
    double redspr = 0.0;
    double blsmfir = 0.0;
    double bfirspr = 0.0;
    double usprfir = 0.0;
    double esprfir = 0.0;
    double pinjunw = 0.0;
    double wjunipr = 0.0;
    double rmjunipr = 0.0;
    double ercedar = 0.0;
    double pnynjn = 0.0;
    double sprucep = 0.0;
    double pitchp = 0.0;
    double pondp = 0.0;
    double tblmtnp = 0.0;
    double sandp = 0.0;
    double virgp = 0.0;
    double shrtlfp = 0.0;
    double slashp = 0.0;
    double redpin = 0.0;
    double ehmlck = 0.0;
    double ewhpin = 0.0;
    double whphem = 0.0;
    double rwjpin = 0.0;
    double epine = 0.0;
    double gntseq = 0.0;
    double redwood = 0.0;
    double redwds = 0.0;
    double whbrkpin = 0.0;
    double fxtlpin = 0.0;
    double bshppin = 0.0;
    double swhtpin = 0.0;
    double othwpin = 0.0;
    double stkaspr = 0.0;
    double stksphm = 0.0;
    double sugrpin = 0.0;
    double porfcdr = 0.0;
    double pndrosa = 0.0;
    double dgfrpin = 0.0;
    double wrcedar = 0.0;
    double wlrch = 0.0;
    double dgfir = 0.0;
    double dgfrlr = 0.0;
    double wwhpin = 0.0;
    double akylcdr = 0.0;
    double redfir = 0.0;
    double grndfir = 0.0;
    double whtfir = 0.0;
    double pslvrfir = 0.0;
    double trufir = 0.0;
    double whmlck = 0.0;
    double whmlcks = 0.0;
    double bluspr = 0.0;
    double engspr = 0.0;
    double salpfir = 0.0;
    double engsafir = 0.0;
    double spsafir = 0.0;
    double trfirspr = 0.0;
    double dflrwp = 0.0;
    double sftwds = 0.0;
    //double fiatyp = 0.0;
    int south = 0;
    //double sdifia = 0.0;
    int ift = 0;
    double p1 = 0.0;
    double p2 = 0.0;
    double p3 = 0.0;

    // BEGIN -- ASSIGNMENT OF INITIAL TYPES TO COMBINED TYPE GROUPS; (ARNER 2/13/2002 - TABLE 5)
    //SOFTWOODS
    // A. SOFTWOODS (1-58,60,62-79,161,162)
    std::array<int,80> sftwds_idxs = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,60,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,161,162,170};

    for(auto i : sftwds_idxs) {
        sftwds += s[i];
    }

    //! A.B. TRUE FIRS AND SPRUCE (1-5,7,9,14,15,28,34,35)
    std::array<int, 12> trfirspr_idxs = {1,2,3,4,5,7,9,14,15,28,34,35};

    for(auto i : trfirspr_idxs) {
        trfirspr += s[i];
    }

    //! A.B.C. SPRUCE-SUBALPINE FIR (4,14,15)
    spsafir = s[4] + s[14] + s[15];
    //! A.B.C.D. ENGELMANN SPRUCE-SUBALPINE FIR (4,14)
    engsafir = s[4] + s[14];
    //! A.B.C.D.E. SUBALPINE FIR (4)
    salpfir = s[4];
    //! A.B.C.D.E. ENGLEMAN SPRUCE (14)
    engspr = s[14];
    //! A.B.C.D. BLUE SPRUCE (15)
    bluspr = s[15];
    //! A.B.C. WESTERN HEMLOCKS (34,35)
    whmlcks = s[34] + s[35];
    //! A.B.C.D. WESTERN HEMLOCK (34)
    whmlck = s[34];
    //! A.B.C.D. MOUNTAIN HEMLOCK (35)
    mtnhmlk = s[35];
    //! A.B.C. TRUE FIRS (1-5,7)
    trufir = s[1] + s[2] + s[3] + s[4] + s[5] + s[7];
    //! A.B.C.D. PACIFIC SILVER FIR (1)
    pslvrfir = s[1];
    //! A.B.C.D. WHITE FIR (2)
    whtfir = s[2];
    //! A.B.C.D. GRAND FIR (3)
    grndfir = s[3];
    //! A.B.C.D. RED FIR (5)
    redfir = s[5];
    //! A.B.C.D. NOBLE FIR (7)
    noblfir = s[7];
    //! A.B.C. ALASKA YELLOW CEDAR (9)
    akylcdr = s[9];
    //! A.B.C. WESTERN WHITE PINE (28)
    wwhpin = s[28];
    //! A.B. DF-LARCH-W.WHITE PINES (8,10,11,13,23,24,26,27,30,31,36)
    std::array<int, 11> dflrwp_idxs = {8,10,11,13,23,24,26,27,30,31,36};

    for(auto i : dflrwp_idxs) {
        dflrwp += s[i];
    };

    //! A.B.C. DF-WESTERN LARCH (11,13,31)
    dgfrlr = s[11] + s[13] + s[31];
    //! A.B.C.D. DOUG FIR (31)
    dgfir = s[31];
    //! A.B.C.D. WESTERN LARCH (13)
    wlrch = s[13];
    //! A.B.C.D. WESTERN REDCEDAR (11)
    wrcedar = s[11];
    //! A.B.C. DF-WESTERN PINES (8,10,23,24,26,27,30,31,36)
    std::array<int, 9> dgfrpin_idxs = {8,10,23,24,26,27,30,31,36};

    for(auto i : dgfrpin_idxs) {
        dgfrpin += s[i];
    };

    //! A.B.C.D. PONDEROSA PINE (26,36)
    pndrosa = s[26] + s[36];
    //! A.B.C.D. LODGEPOLE PINE (23)
    lodgpole = s[23];
    //! A.B.C.D. PORT ORFORD CEDAR (8)
    porfcdr = s[8];
    //! A.B.C.D. SUGAR PINE (27)
    sugrpin = s[27];
    //! A.B.C.D. INCENSE CEDAR (10)
    inscdr = s[10];
    //! A.B.C.D. JEFFREY-COULTER PINE-BIGCONE DF (24,30,36)
    jfbcdgfr = s[24] + s[30] + s[36];
    //! A.B.C. WESTERN LARCH-PINE (13,23,26,36)
    lrchpin = s[13] + s[23] + s[26] + s[36];
    //! A.B. SITKA SPRUCE-HEMLOCK (11,18,34)
    stksphm = s[11] + s[18] + s[34];
    //! A.B.C. SITKA SPRUCE (18)
    stkaspr = s[18];
    //! A.B. OTHER WESTERN PINES (6,12,19,20,21,22,25,29,40)
    std::array<int, 9> othwpin_idxs = {6,12,19,20,21,22,25,29,40};

    for(auto i : othwpin_idxs) {
        othwpin += s[i];
    };

    //! A.B.C. KNOBCONE PINE (21)
    knbpin = s[21];
    //! A.B.C. SOUTHWEST WHITE PINE (22)
    swhtpin = s[22];
    //! A.B.C. BISHOP PINE (6)
    bshppin = s[6];
    //! A.B.C. MONTEREY PINE (29)
    mntrypin = s[29];
    //! A.B.C. FOXTAIL-BRISTLECONE PINE (20)
    fxtlpin = s[20];
    //! A.B.C. LIMBER PINE (25)
    lmbrpin = s[25];
    //! A.B.C. WHITEBARK PINE (19)
    whbrkpin = s[19];
    //! A.B.C. MISC. W. SOFTWOODS (12,40)
    miscwsfw = s[12] + s[40];
    //! A.B. REDWOODS (31,32,33)
    redwds = s[31] + s[32] + s[33];
    //! A.B.C. REDWOOD (32)
    redwood = s[32];
    //! A.B.C. GIANT SEQUOIA (33)
    gntseq = s[33];
    //! A.B. EASTERN PINES (41-54,66)
    std::array<int, 15> epine_idxs = {41,42,43,44,45,46,47,48,49,50,51,52,53,54,66};

    for(auto i : epine_idxs) {
        epine += s[i];
    }
    //! A.B.C. RED-WHITE-JACK PINE (41,42,53,66)
    rwjpin = s[41] + s[42] + s[53] + s[66];
    //! A.B.C.D. WHITE PINE-HEMLOCK (53,66)
    whphem = s[53] + s[66];
    //! A.B.C.D.E. EASTERN WHITE PINE (53)
    ewhpin = s[53];
    //! A.B.C.D.E. EASTERN HEMLOCK (66)
    ehmlck = s[66];
    //! A.B.C.D. RED PINE (42)
    redpin = s[42];
    //! A.B.C.D. JACK PINE (41)
    jackpin = s[41];
    //! A.B.C. LONGLEAF - SLASH PINE (46,48)
    lnglfslh = s[46] + s[48];
    //! A.B.C.D. LONGLEAF PINE (48)
    lnglfp = s[48];
    //! A.B.C.D. SLASH PINE (46)
    slashp = s[46];

    //! A.B.C. LOBLOLLY-SHORTLEAF PINE (44,45,47,49-52,54)
    std::array<int, 8> lobshrtp_idxs = {44,45,47,49,50,51,52,54};

    for(auto i : lobshrtp_idxs) {
        lobshrtp += s[i];
    }

    //! A.B.C.D. LOBLOLLY PINE (52)
    lobp = s[52];
    //! A.B.C.D. SHORTLEAF PINE (45)
    shrtlfp = s[45];
    //! A.B.C.D. VIRGINIA PINE (54)
    virgp = s[54];
    //! A.B.C.D. SAND PINE (44)
    sandp = s[44];
    //! A.B.C.D. TABLE MOUNTAIN PINE (49)
    tblmtnp = s[49];
    //! A.B.C.D. POND PINE (51)
    pondp = s[51];
    //! A.B.C.D. PITCH PINE (50)
    pitchp = s[50];
    //! A.B.C.D. SPRUCE PINE (47)
    sprucep = s[47];
    //! A.B. PINYON-JUNIPER (38,63,64,161,162)
    pnynjn = s[38] + s[63] + s[64] + s[161] + s[162];
    //! A.B.C. EASTERN REDCEDAR (64)
    ercedar = s[64];
    //! A.B.C. ROCKY MOUNTAIN JUNIPER (63)
    rmjunipr = s[63];
    //! A.B.C. WESTERN JUNIPER (38)
    wjunipr = s[38];
    //! A.B.C. JUNIPER WOODLAND (161)
    juniprw = s[161];
    //! A.B.C. PINYON-JUNIPER WOODLAND (161,162)
    pinjunw = s[161] + s[162];
    //! A.B. EASTERN SPRUCE-FIR (16,17,55,58,60,65)
    esprfir = s[16] + s[17] + s[55] + s[58] + s[60] + s[65];
    //! A.B.C. UPLAND SPRUCE-FIR (16,55,58)
    usprfir = s[16] + s[55] + s[58];
    //! A.B.C.D. BALSAM FIR - RED SPRUCE (55,58)
    bfirspr = s[55] + s[58];
    //! A.B.C.D.E. BALSAM FIR (55)
    blsmfir = s[55];
    //! A.B.C.D.E. RED SPRUCE (58)
    redspr = s[58];
    //! A.B.C.D. WHITE SPRUCE (16)
    whspr = s[16];
    //! A.B.C. LOWLAND SPRUCE-FIR (17,60,65)
    lsprfir = s[17] + s[60] + s[65];
    //! A.B.C.D. BLACK SPRUCE (17)
    blkspr = s[17];
    //! A.B.C.D. TAMARACK (65)
    tamrck = s[65];
    //! A.B.C.D. NORTHERN WHITE CEDAR (60)
    nwhcdr = s[60];
    //! A.B. EXOTIC SOFTWOODS (70,71,72)
    exsftwd = s[70] + s[71] + s[72];
    //! A.B.C. SCOTCH PINE (71)
    scotchp = s[71];
    //! A.B.C. JAPANESE BLACK PINE (72)
    japblkp = s[72];
    //! A.B.C. OTHER EXOTIC SOFTWOODS (70)
    othexswd = s[70];

    //HARDWOODS
    //! A. HARDWOODS (59,61,81-153,156-160,163,201-210)
    std::array<int, 91> hrdwds_idxs = {59,61,81,82,83,84,85,86,87,88,
    89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,
    105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,
    121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,
    137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,
    153,156,157,158,159,160,163,201,202,203,204,205,206,207,208,209,210};

    for(auto i : hrdwds_idxs) {
        hrdwds += s[i];
    }

    //! A.B. OAK-PINE (41,42,44-54,64)
    std::array<int, 14> oakpin_idxs = {41,42,44,45,46,47,48,49,50,51,52,53,54,64};

    for(auto i : oakpin_idxs) {
        oakpin += s[i];
    }
    //! A.B. OAK-HICKORY (81-86,88,89,92,93,101,108,110,120,122,202,206,207)
    std::array<int, 18> oakhck_idxs = {81,82,83,84,85,86,88,89,92,93,101,108,110,120,122,202,206,207};

    for(auto i : oakhck_idxs) {
        oakhck += s[i];
    }
    //! A.B.C. WHITE OAK (81)
    whoak = s[81];
    //! A.B.C. BUR OAK (83)
    buroak = s[83];
    //! A.B.C. CHESTNUT OAK (84)
    chstoak = s[84];
    //! A.B.C. NORTHERN RED OAK (85)
    nroak = s[85];
    //! A.B.C. SCARLET OAK (82)
    scrltoak = s[82];
    //! A.B.C. YELLOW POPLAR (110)
    yp = s[110];
    //! A.B.C. BLACK WALNUT (108)
    bwalnut = s[108];
    //! A.B.C. BLACK LOCUST (122)
    blcst = s[122];
    //! A.B.C. RED MAPLE (95)
    redmapl = s[95];
    //! A.B.C. POST-BLACKJACK OAK (86,206)
    pstbljko = s[86] + s[206];
    //! A.B.C. CHESTNUT-BLACK/SCARLET OAK (82,84,120)
    chblsc = s[82] + s[84] + s[120];
    //! A.B.C. WHITE OAK-RED OAK-HICKORY (81,85,92,94,120,207)
    worohk = s[81] + s[85] + s[92] + s[94] + s[120] + s[207];
    //! A.B.C. YELLOW POPLAR-WH.OAK-RED OAK (81,85,110)
    ypworo = s[81] + s[85] + s[110];
    //! A.B.C. SOUTHERN SCRUB OAK (89,203,206)
    scruboak = s[89] + s[203] + s[206];
    //! A.B.C. SWTGUM-YELLOW POPLAR (109,110)
    swgyp = s[109] + s[110];
    //! A.B.C. SASSAFRAS-PERSIMMON (93)
    sasfprsm = s[93];
    //! A.B.C. MIXED UPL. HRDWDS (83,88,94,101,106,108,113,122,125,201-204)
    std::array<int, 13> mxdhwd_idxs = {83,88,94,101,106,108,113,122,125,201,202,203,204};

    for(auto i : mxdhwd_idxs) {
        mxdhwd += s[i];
    }
    //! A.B. OAK-GUM-CYPRESS (59,61,87,90,111,112,114,127,128,143)
    std::array<int, 10> okgmcyp_idxs = {59,61,87,90,111,112,114,127,128,143};

    for(auto i : okgmcyp_idxs) {
        okgmcyp += s[i];
    }
    //! A.B.C. ATLANTIC WHITE CEDAR (59)
    atlwcdr = s[59];
    //! A.B.C. SWEETBAY-SWAMP TUPELO-RED MAPLE (95,111,113,114,127)
    sbstrm = s[95] + s[111] + s[113] + s[114] + s[127];
    //! A.B.C. SWAMP CHESTNUT-CHERRYBARK OAK (87)
    schchbo = s[87];
    //! A.B.C. SWTGUM-NUTTALL-WILLOW OAK (109,125,143,201,203,204)
    swgwilo = s[109] + s[125] + s[143] + s[201] + s[203] + s[204];
    //! A.B.C. CYPRESS-WATER TUPELO (61,112)
    cypwtup = s[61] + s[112];
    //! A.B.C. OVERCUP OAK-WATER HICKORY (90,128)
    ovrcupwh = s[90] + s[128];
    //! A.B. ELM-ASH-COTTONWOOD (91,97,100,104,115,116,118,123,129,135,137,208)
    std::array<int, 12> elmashcw_idxs = {91,97,100,104,115,116,118,123,129,135,137,208};

    for(auto i : elmashcw_idxs) {
        elmashcw += s[i];
    }

    //! A.B.C. COTTONWOOD (118,137)
    ctnwd = s[118] + s[137];
    //! A.B.C. WILLOW (123)
    willow = s[123];
    //! A.B.C. RIVER BIRCH-SYCAMORE (108,116,123,129)
    rbrchsyc = s[108] + s[116] + s[123] + s[129];
    //! A.B.C. SYCAMORE-PECAN-ELM (91,94,109,116)
    sycpcelm = s[91] + s[94] + s[109] + s[116];
    //! A.B.C. BLACK ASH-ELM-RED MAPLE (104)
    baelmmap = s[104];
    //! A.B.C. SUGARBERRY-HACKBERRY-ELM-GREEN ASH (94,100,105,115,208,209)
    sgbelmga = s[94] + s[100] + s[105] + s[115] + s[208] + s[209];
    //! A.B.C. SILVER MAPLE-AMERICAN ELM (94,97)
    slvmaelm = s[94] + s[97];
    //! A.B.C. COTTONWOOD-WILLOW (118,123,130,131,137)
    ctnwwilo = s[118] + s[123] + s[130] + s[131] + s[137];
    //! A.B.C. OREGON ASH (135)
    orgnash = s[135];
    //! A.B. MAPLE-BEECH-BIRCH (66,96,98,107,110,122,124)
    mbb = s[66] + s[96] + s[98] + s[107] + s[110] + s[122] + s[124];
    //! A.B.C. BLACK CHERRY (121)
    blch = s[121];
    //! A.B.C. BLACK CHERRY-WHITE ASH-YELLOW POPLAR (103,110,121)
    bcwayp = s[103] + s[110] + s[121];
    //! A.B.C. MAPLE-BASSWOOD (96,124)
    mplbaswd = s[96] + s[124];
    //! A.B.C. ELM-ASH-LOCUST (94,105,122)
    elmashlo = s[94] + s[105] + s[122];
    //! A.B.C. MAPLE-BEECH-BIRCH (66,94,95,96,98,102,105,107,108)
    std::array<int, 9> mplbchyb_idxs = {66,94,95,96,98,102,105,107,108};

    for(auto i : mplbchyb_idxs) {
        mplbchyb += s[i];
    }

    //! A.B. ASPEN-BIRCH (99,117,119)
    aspbrch = s[99] + s[117] + s[119];
    //! A.B.C. ASPEN (119)
    aspen = s[119];
    //! A.B.C. BALSAM POPLAR (117)
    blsmpop = s[117];
    //! A.B.C. PAPER BIRCH (99)
    paprbrch = s[99];
    //! A.B. RED ALDER-MAPLE (130,131)
    aldrmapl = s[130] + s[131];
    //! A.B.C. RED ALDER (131)
    redaldr = s[131];
    //! A.B.C. BIGLEAF MAPLE (130)
    bglfmpl = s[130];
    //! A.B. WESTERN OAKS (134,138,139,140,142,158,163,210)
    std::array<int, 8> wstoak_idxs = {134,138,139,140,142,158,163,210};

    for(auto i : wstoak_idxs) {
    wstoak += s[i];
    }

    //! A.B.C. CALIFORNIA BLACK OAK (139)
    clfbo = s[139];
    //! A.B.C. OREGON WHITE OAK (140)
    orgwho = s[140];
    //! A.B.C. BLUE OAK (134)
    blueoak = s[134];
    //! A.B.C. GRAY PINE (163)
    graypine = s[163];
    //! A.B.C. COAST LIVE OAK (138)
    costlo = s[138];
    //! A.B.C. CANYON_INTERIOR LIVE OAK (142)
    canylo = s[142];
    //! A.B.C. DECIDUOUS OAK-WOODLAND (158)
    doakwdld = s[158];
    //! A.B.C. EVERGREEN OAK-WOODLAND (210)
    eoakwdld = s[210];
    //! A.B. TAN OAK-LAUREL (133,136,141)
    tanoklrl = s[133] + s[136] + s[141];
    //! A.B.C. TAN OAK (136)
    tanoak = s[136];
    //! A.B.C. CALIFORNIA LAUREL (141)
    clflrel = s[141];
    //! A.B.C. GIANT CHINKAPIN (133)
    gntchnk = s[133];
    //! A.B. OTHER WESTERN HARDWOODS (132,156,157,159,160)
    othwhwd = s[132] + s[156] + s[157] + s[159] + s[160];
    //! A.B.C. PACIFIC MADRONE (132)
    pacmdrn = s[132];
    //! A.B.C. MESQUITE WOODLAND (157)
    mesquitw = s[157];
    //! A.B.C. MOUNTAIN BRUSH WOODLAND (156)
    mtnbrshw = s[156];
    //! A.B.C. INTERMOUNTAIN MAPLE WOODLAND (159)
    intmaplw = s[159];
    //! A.B.C. MISC. WESTERN HARDWOODS (160)
    miscwhwd = s[160];
    //! A.B. TROPICAL HARDWOODS (147,149)
    trophwds = s[147] + s[149];
    //! A.B.C. SABAL PALM (147)
    palm = s[147];
    //! A.B.C. MANGROVE (149)
    mangrv = s[149];
    //! A.B. EXOTIC HARDWOODS (144,145,146,148)
    exhwds = s[144] + s[145] + s[146] + s[148];
    //! A.B.C. ROYAL PAULOWNIA (144)
    palonia = s[144];
    //! A.B.C. MELALUCA (145)
    meluca = s[145];
    //! A.B.C. EUCALYPTUS (148)
    euclpt = s[148];
    //! A.B.C. OTHER EXOTIC HARDWOODS (146)
    othexhwd = s[146];
    //Special Groups
    //! A. UPLAND-LOWLAND OAKS (125,201,203,204)
    uplooak = s[125] + s[201] + s[203] + s[204];
    //! A. UPLAND-LOWLAND HARDWOODS (95,103,105)
    uplohwd = s[95] + s[103] + s[105];
    //! A. SOUTHERN RED OAK (88)
    sroak = s[88];
    //! A. AMERICAN/SLIPPERY/ROCK ELM (94)
    aelm = s[94];
    //! A. WINGED/CEDAR ELM (209)
    wcelm = s[209];
    //! A. SILVER MAPLE (97)
    slvrmpl = s[97];
    //! A. WHITE ASH (103)
    whash = s[103];
    //! A. EASTERN COTTONWOOD (118)
    ectnwd = s[118];
    //! A. BLACK GUM (113)
    blkgum = s[113];
    //! A. AMERICAN BEECH (102)
    beech = s[102];
    //! A. AMERICAN HOLLY (106)
    holly = s[106];
    //! A. SWEETGUM (109)
    sweetgum = s[109];
    //! A. PIN OAK (205)
    pinoak = s[205];
    //special FVS groups
    //! A. ALL OTHER SPECIES
    //othall = s[170] + s[180] + s[190];
    //! A. OTHER SOFTWOODS
    othsft = s[170];
    //! A. OTHER HARDWOODS
    othhrd = s[180];
    //! A. OTHER SPECIES
    othspc = s[190];
    //! TOTAL FOREST STOCKING (1-210)
    for (auto i : s) {
        totstk += s[i];
    };
    //END -- ASSIGNMENT OF INITIAL TYPES TO COMBINED TYPE GROUPS;

    //  DEFINE SPECIAL CATEGORIES FOR LATER USE IN TYPING
    //----------
    //    FIA DETERMINES 'UPLAND' OR 'LOWLAND' SITE FROM PHYSIOGRAPHIC
    //    CODES.  IN FVS THAT INFO. IS NOT AVAILABLE.  FOR FVS USE,
    //    DETERMINE UPLAND/LOWLAND BY SUMMING THE ELIGIBLE STOCKING
    //    OF SPECIES THAT NORMALLY OCCUR IN THOSE SETTINGS.  THE TOTALS
    //    COMPUTED HERE ARE USED FOR E. HARDWOOD FOR. TYPE DETERMINATION.

    //! UPLAND - MAPLE-BEECH-BIRCH
    upmpbcbr = s[66]+s[85]+s[94]+s[95]+s[96]+s[98]+s[102]+s[103]+
    s[105]+s[107]+s[108]+s[110]+s[121]+s[122]+s[124]; 
    //! UPLAND - OAK-HICKORY
    upoakhic = s[81]+s[82]+s[83]+s[84]+s[85]+s[86]+s[88]+s[89]+s[92]+
    s[93]+s[94]+s[95]+s[101]+s[102]+s[103]+s[105]+s[106]+
    s[108]+s[109]+s[110]+s[113]+s[120]+s[121]+s[122]+s[125]+
    s[201]+s[202]+s[203]+s[204]+s[206]+s[207]+s[209];
    //! LOWLAND - ELM-ASH-COTTONWOOD
    lwelascw=s[91]+s[94]+s[95]+s[97]+s[100]+s[103]+s[104]+s[105]+
    s[108]+s[109]+s[115]+s[116]+s[118]+s[123]+s[129]+
    s[130]+s[131]+s[135]+s[137]+s[208]+s[209];
    //! LOWLAND - OAK-GUM-CYPRESS
    lwokgmcy=s[59]+s[61]+s[87]+s[90]+s[94]+s[95]+s[102]+s[103]+
    s[105]+s[106]+s[109]+s[111]+s[112]+s[113]+s[114]+
    s[125]+s[127]+s[128]+s[143]+s[201]+s[203]+s[204]+s[205];


    //DEFINE PROPORTION-OF-TOTAL-STOCKING VARIABLES
      double pcond    = 1.00;
      double half     = 0.50 * totstk;
      double quartr   = 0.25 * totstk;
      double five     = 0.05 * totstk;
      //double ten      = 0.10 * totstk;
      //double fiftn    = 0.15 * totstk;
      //double twenty   = 0.20 * totstk;
      //double eighty   = 0.80 * totstk;
      //double ninety   = std::floor(0.90 * totstk);
      //double ninty5   = std::floor(0.95 * totstk);

//  BEGIN FOREST TYPE ALGORITHM
    //! 999 = NONSTOCKED
    if((totstk/pcond) < 10.0){
        ift = 999;
    }
//  START SECTION TO DETERMINE FOREST TYPE BASED ON COMPUTED AND TOTAL STOCKING VALUES FROM ABOVE.

//! A. SOFTWOODS
if (sftwds >= hrdwds){
    //! FVS OTHER SOFTWOODS(996)
    ift = 996;

    std::array<double, 10> arr = {trfirspr, stksphm, redwds, dflrwp, othwpin, epine, esprfir, pnynjn, exsftwd, othsft};
    double *max = std::max_element(std::begin(arr), std::end(arr));
    p1 = *max - 0.001;

    if(p1 > 0.0){
        if(p1 < trfirspr){
        //! A.B. TRUE FIRS AND SPRUCE

        std::array<double, 5> arr = {spsafir, whmlcks, trufir, akylcdr, wwhpin};
        double *max = std::max_element(std::begin(arr), std::end(arr));
        p2 = *max - 0.001;

            if(p2 > 0.0){
                if(p2 < spsafir){
                    if(engsafir >= bluspr){
                        if((salpfir >= five && salpfir < half) && (engspr >= five && engspr < half)){
                            //! ENGELMANN SPRUCE-SUBALPINE(266)
                            ift = 266;
                        } else if (engspr >= salpfir){
                            //! ENGELMANN SPRUCE(265)
                            ift = 265;
                        } else if (salpfir >= 0.0){
                            //! SUBALPINE FIR(268)
                            ift = 268;
                        }
                    } else if (bluspr > 0.0){
                        //! BLUE SPRUCE(269)
                        ift = 269;
                    }
                } else if(p2 < whmlcks){
                    if (whmlck >= mtnhmlk){
                        //! WESTERN HEMLOCK(301)
                        ift = 301;
                    } else if(mtnhmlk > 0.0){
                        //! MOUNTAIN HEMLOCK(270)
                        ift = 270;
                    }
                } else if(p2 < trufir) {

                    std::array<double, 6> arr = {pslvrfir, whtfir, grndfir, salpfir, redfir, noblfir};
                    double *max = std::max_element(std::begin(arr), std::end(arr));
                    p3 = *max - 0.001;

                    if(p3 > 0.0){
                        if(p3 < pslvrfir){
                            //! PACIFIC SILVER FIR(264)
                            ift = 264;
                        } else if (p3 < whtfir){
                            //! WHITE FIR(261)
                            ift = 261;
                        } else if(p3 < grndfir){
                            //! GRAND FIR(267)
                            ift = 267;
                        } else if (p3 < salpfir) {
                            //! SUBALPINE FIR(268)
                            ift = 268;
                        } else if (p3 < redfir) {
                            //! RED FIR(262)
                            ift = 262;
                        } else if (noblfir > 0.0) {
                            //! NOBLE FIR(263)
                            ift = 263;
                        }
                    }
                } else if (p2 < akylcdr){
                    //! ALASKA YELLOW CEDAR(271)
                    ift = 271;
                } else if (wwhpin > 0.0){
                    //! WESTERN WHITE PINE(241)
                    ift = 241;
                }
            }
        } else if (p1 < stksphm){
            //! A.B. SITKA SPRUCE-HEMLOCK
            std::array<double, 3> arr = {whmlck, stkaspr, wrcedar};
            double *max = std::max_element(std::begin(arr), std::end(arr));
            p2 = *max - 0.001;

            if (p2 > 0.0){
                if (p2 < whmlck){
                    //! WESTERN HEMLOCK(301)
                    ift = 301;
                } else if (p2 < stkaspr){
                    //! SITKA SPRUCE(305)
                    ift = 305;
                } else if (wrcedar > 0.0){
                    //! WESTERN REDCEDAR(304)
                    ift = 304;
                }
            }
        } else if (p1 < redwds){
            //! A.B. REDWOODS

            std::array<double, 3> arr = {redwood, gntseq, dgfir};
            double *max = std::max_element(std::begin(arr), std::end(arr));
            p2 = *max - 0.001;

            if(p2 > 0.0){
                if(p2 < redwood){
                    //! REDWOOD(341)
                    ift = 341;
                } else if (p2 < gntseq){
                    //! GIANT SEQUOIA(342)
                    ift = 342;
                } else if (dgfir > 0.0){
                    //! DOUGLAS-FIR(201)
                    ift = 201;
                }
            }
        } else if(p1 < dflrwp){
            //! A.B. DF-LARCH-W.WHITE PINES
            std::array<double, 3> arr = {dgfrlr, dgfrpin, lrchpin};
            double *max = std::max_element(std::begin(arr), std::end(arr));
            p2 = *max - 0.001;

            if(p2 > 0.0){
                if(p2 < dgfir){

                    std::array<double, 3> arr = {dgfir, wlrch, wrcedar};
                    double *max = std::max_element(std::begin(arr), std::end(arr));
                    p3 = *max - 0.001;

                    if(p3 > 0.0){
                        if(p3 < dgfir){
                            //! DOUGLAS-FIR(201)
                            ift = 201;
                        } else if (p3 < wlrch){
                            //! WESTERN LARCH(321)
                            ift = 321;
                        } else if (wrcedar > 0.0){
                            //! WESTERN REDCEDAR(304)
                            ift = 304;
                        }
                    }
                } else if(p2 < dgfrpin){

                    std::array<double, 7> arr = {dgfir, pndrosa, lodgpole, porfcdr, sugrpin, inscdr, jfbcdgfr};
                    double *max = std::max_element(std::begin(arr), std::end(arr));
                    p3 = *max - 0.001;

                    if(p3 > 0.0){
                        if(p3 < dgfir){
                            //! DOUGLAS-FIR(201)
                            ift = 201;
                        } else if(p3 < pndrosa){
                            //! PONDEROSA PINE(221)
                            ift = 221;
                        } else if(p3 < lodgpole){
                            //! LODGEPOLE PINE (281)
                            ift = 281;
                        } else if (p3 < porfcdr){
                            //! PORT ORFORD CEDAR(202)
                            ift = 202;
                        } else if(p3 < sugrpin) {
                            //! SUGAR PINE(224)
                            ift = 224;
                        } else if(p3 < inscdr){
                            //! INCENSE CEDAR(222)
                            ift = 222;
                        } else if(jfbcdgfr > 0.0){
                            //! JEFREY-COULTER PINE-BIGCONE DF(223)
                            ift = 223;
                        }
                    }
                } else if (p2 < lrchpin){

                    std::array<double, 3> arr = {wlrch, pndrosa, lodgpole};
                    double *max = std::max_element(std::begin(arr), std::end(arr));
                    p3 = *max - 0.001;

                    if(p3 > 0.0){
                        if(p3 < wlrch){
                            //! WESTERN LARCH(321)
                            ift = 321;
                        } else if(p3 < pndrosa){
                            //! PONDEROSA PINE(221)
                            ift = 221;
                        } else if(lodgpole > 0.0){
                            //! LODGEPOLE PINE(281)
                            ift = 281;
                        }
                    }
                }
            }
        } else if(p1 < othwpin){
            //! A.B. OTHER WESTERN PINES

            std::array<double, 8> arr = {knbpin, swhtpin, bshppin, mntrypin, fxtlpin, lmbrpin, whbrkpin, miscwsfw};
            double *max = std::max_element(std::begin(arr), std::end(arr));
            p2 = *max - 0.001;

            if(p2 > 0.0){
                if(p2 < knbpin){
                    //! KNOBCONE PINE(361)
                    ift = 361;
                } else if(p2 < swhtpin){
                    //! SW WHITE PINE(362)
                    ift = 362;
                } else if(p2 < bshppin){
                    //! BISHOP PINE(363)
                    ift = 363;
                } else if(p2 < mntrypin){
                    //! MONTEREY PINE(364)
                    ift = 364;
                } else if(p2 < fxtlpin){
                    //! FOXTAIL-BRISTLECONE PINE(365)
                    ift = 365;
                } else if(p2 < lmbrpin){
                    //! LIMBER PINE(366)
                    ift = 366;
                } else if (p2 < whbrkpin){
                    //! WHITEBARK PINE(367)
                    ift = 367;
                } else if(miscwsfw > 0.0){
                    //! MISC. WESTERN SOFTWOODS(368)
                    ift = 368;
                }
            }
        } else if(p1 < epine){
            //! A.B. EASTERN PINES

            std::array<double, 3> arr = {rwjpin, lnglfslh, lobshrtp};
            double *max = std::max_element(std::begin(arr), std::end(arr));
            p2 = *max - 0.001;

            if(p2 > 0.0){
                if(p2 < rwjpin){
                    if(whphem >= half && (ewhpin >= five &&ewhpin < half) && (ehmlck >= five && ehmlck < half)){
                        //! E.WHITE PINE-HEMLOCK(104)
                        ift = 104;
                    } else {

                        std::array<double, 4> arr = {ewhpin, redpin, jackpin, ehmlck};
                        double *max = std::max_element(std::begin(arr), std::end(arr));
                        p3 = *max - 0.001;

                    }

                    if(p3 > 0.0){
                        if(p3 < ewhpin){
                            //! E.WHITE PINE(103)
                            ift = 103;
                        } else if(p3 < redpin){
                            //! RED PINE(102)
                            ift = 102;
                        } else if(p3 < jackpin){
                            //! JACK PINE(101)
                            ift = 101;
                        } else if(ehmlck > 0.0){
                            //! EASTERN HEMLOCK(105)
                            ift = 105;
                        }
                    }
                } else if (p2 < lnglfslh){
                    if(lnglfp >= slashp){
                        //! LONGLEAF PINE(141)
                        ift = 141;
                    } else if(slashp > 0.0){
                        //! SLASH PINE(142)
                        ift = 142;
                    }
                } else if(lobshrtp > 0.0){

                    std::array<double, 8> arr = {lobp, shrtlfp, virgp, sandp, tblmtnp, pondp, pitchp, sprucep};
                    double *max = std::max_element(std::begin(arr), std::end(arr));
                    p3 = *max - 0.001;

                    if(p3 > 0.0){
                        if(p3 < lobp){
                            //! LOBLOLLY PINE(161)
                            ift = 161;
                        } else if(p3 < shrtlfp){
                            //! SHORTLEAF PINE(162)
                            ift = 162;
                        } else if(p3 < virgp){
                            //! VIRGINIA PINE(163)
                            ift = 163;
                        } else if(p3 < sandp){
                            //! SAND PINE(164)
                            ift = 164;
                        } else if(p3 < tblmtnp){
                            //! TABLE MOUNTAIN PINE(165)
                            ift = 165;
                        } else if(p3 < pondp){
                            //! POND PINE(166)
                            ift = 166;
                        } else if(p3 < pitchp){
                            //! PITCH PINE(167)
                            ift = 167;
                        } else if(sprucep > 0.0){
                            //! SPRUCE PINE(168)
                            ift = 168;
                        }
                    }
                }
            }
        } else if(p1 < esprfir){
            //! A.B. EASTERN SPRUCE-FIR
            if(usprfir >= lsprfir){
                //! A.B.C. UPLAND E. SPRUCE-FIR
                if((bfirspr >= half) && (blsmfir >= five && blsmfir < half) && (redspr >= five && redspr < half)){
                    //! RED SPRUCE-BALSAM FIR(124)
                    ift = 124;
                } else {

                    std::array<double, 3> arr = {blsmfir, whspr, redspr};
                    double *max = std::max_element(std::begin(arr), std::end(arr));
                    p2 = *max - 0.001;

                    if(p2 > 0.0){
                        if(p2 < blsmfir){
                            //! BALSAM FIR(121)
                            ift = 121;
                        } else if(p2 < whspr){
                            //! WHITE SPRUCE(122)
                            ift = 122;
                        } else if(redspr > 0.0){
                            //! RED SPRUCE(123)
                            ift = 123;
                        }
                    }
                }
            } else {
                //! A.B.C. LOWLAND E. SPRUCE-FIR
                std::array<double, 3> arr = {blkspr, tamrck, nwhcdr};
                double *max = std::max_element(std::begin(arr), std::end(arr));
                p2 = *max - 0.001;

                if(p2 > 0.0){
                    if(p2 < blkspr){
                        //! BLACK SPRUCE(125)
                        ift = 125;
                    } else if(p2 < tamrck){
                        //! TAMARACK(126)
                        ift = 126;
                    } else if(nwhcdr > 0.0){
                        //! NORTHERN WHITE-CEDAR(127)
                        ift = 127;
                    }
                }
            }
        } else if(p1 < pnynjn){
            //! A.B. PINYON-JUNIPER

            std::array<double, 5> arr = {ercedar, rmjunipr, wjunipr, juniprw, pinjunw};
            double *max = std::max_element(std::begin(arr), std::end(arr));
            p2 = *max - 0.001;

            if(p2 > 0.0){
                if (p2 < ercedar){
                    //! EASTERN REDCEDAR(181)
                    ift = 181;
                } else if( p2 < rmjunipr){
                    //! ROCKY MTN. JUNIPER(182)
                    ift = 182;
                } else if(p2 < wjunipr){
                    //! WESTERN JUNIPER(183)
                    ift = 183;
                } else if(p2 < juniprw){
                    //! JUNIPER WOODLAND(184)
                    ift = 184;
                } else if(pinjunw > 0.0){
                    //! PINYON-JUNIPER WOODLAND(185)
                    ift = 185;
                }
            }
        } else if(p1 < exsftwd){
            //! A.B. EXOTIC SOFTWOODS

            std::array<double, 3> arr = {scotchp, japblkp, othexswd};
            double *max = std::max_element(std::begin(arr), std::end(arr));
            p2 = *max - 0.001;

            if(p2 > 0.0){
                if(p2 < scotchp){
                    //! SCOTCH PINE(381)
                    ift = 381;
                } else if(p2 < japblkp){
                    //! JAPANESE BLACK PINE(382)/(383)
                    ift = 383;
                } else if(othexswd > 0.0){
                    //! OTHER EXOTIC SOFTWOODS(383)
                    ift = 383;
                }
            }
        } else if(p1 < othsft){
            //! A.B. FVS - OTHER SOFTWOODS

            std::array<double, 2> arr = {othsft, 0.0};
            double *max = std::max_element(std::begin(arr), std::end(arr));
            p2 = *max - 0.001;

            if(p2 > 0.0){
                if(othsft > 0.0){
                    //! FVS - OTHER SOFTWOODS(996)
                    ift = 996;
                }
            }
        }
    }

} else {
    //! HARDWOODS
    //! FVS OTHER HARDWOODS(997)
    ift = 997;
    if(oakpin >= quartr){
        //! A.B. OAK-PINE

        std::array<double, 14> arr = {ercedar, shrtlfp, ewhpin, lnglfp, virgp, lobp, slashp, jackpin, redpin, sandp, tblmtnp, pitchp, pondp, sprucep};
        double *max = std::max_element(std::begin(arr), std::end(arr));
        p1 = *max - 0.001;

        if(p1 > 0.0){
            if(p1 < ercedar){
                //! E. REDCEDAR-HARDWOOD(402)
                ift = 402;
            } else if( p1 < shrtlfp){
                //! SHORTLEAF PINE-OAK(404)
                ift = 404;
            } else if(p1 < ewhpin){
                //! E. WHITE PINE-RED OAK-WHITE ASH(401)
                ift = 401;
            } else if(p1 < lnglfp){
                //! LONGLEAF PINE-OAK(403)
                ift = 403;
            } else if(p1 < virgp){
                //! VIRGINIA PINE-S. RED OAK(405)
                ift = 405;
            } else if(p1 < lobp){
                //! LOBLOLLY PINE-HARDWOOD((406)
                ift = 406;
            } else if(p1 < slashp){
                //! SLASH PINE-HARDWOOD(407)
                ift = 407;
            } else if(jackpin + redpin + sandp + tblmtnp + pitchp + pondp + sprucep > 0.0){
                //! OTHER PINE-HARDWOOD(409)
                ift = 409;
            }
        }
    } else {
        if(pstbljko > 0.01){
            pstbljko = pstbljko + sroak;
        }
        if(chstoak > 0.01){
            chstoak = chstoak + sroak;
        }
        if(baelmmap > 0.01){
            baelmmap = baelmmap + aelm + redmapl + slvrmpl + whash + ectnwd;
        }
        //! SET FLAG FOR UPLAND SITE
        std::array<double, 4> arr = {lwelascw, lwokgmcy, upmpbcbr, upoakhic};
        double *max = std::max_element(std::begin(arr), std::end(arr));
        p1 = *max - 0.001;

        if(p1 > 0.0){
            if(p1 < lwelascw){
                upland = 0;
            } else if(p1 < lwokgmcy){
                upland = 0;
            } else if(p1 < upmpbcbr){
                upland = 1;
            } else if(upoakhic > 0.0){
                upland = 1;
            }
        }
        if((upland == 1)){
            oakhck = oakhck + sweetgum + uplooak + aelm + wcelm + holly + blkgum;

            if(sn_var){
                south = 1;
            }

            if((south == 1)){
                oakhck = oakhck + uplohwd + beech + blch;
            } else {
                if(redmapl >= half){
                    oakhck = oakhck + uplohwd + beech + blch;
                } else if((uplohwd + beech + blch) < half){
                    if(oakhck > five){
                        oakhck = oakhck + uplohwd + beech + blch;
                    }
                }

                mbb = mbb + uplohwd + beech + blch + aelm;

                if(mbb > five){
                    if((nroak + yp + bwalnut) < half){
                        mbb = mbb + nroak + yp + bwalnut;
                    }
                }
            }
        } else {
            //! SET FLAG FOR LOWLAND SITE
            upland = 0;
            okgmcyp = okgmcyp + uplooak;

            if(okgmcyp > 0.01){
                okgmcyp = okgmcyp + uplohwd + sweetgum + aelm + beech + holly + blkgum + pinoak;
            }

            elmashcw = elmashcw + aelm + wcelm;
            if(elmashcw > 0.01){
                elmashcw = elmashcw + uplohwd + sweetgum + bwalnut;
            } else if(okgmcyp < 0.01){
                if(oakhck > mbb){
                    oakhck = oakhck + uplohwd + blch + beech;
                } else {
                    mbb = mbb + uplohwd + blch + beech;
                }
            }
        }
    }

    std::array<double, 13> arr = {mbb, elmashcw, oakhck, okgmcyp, aspbrch, aldrmapl, wstoak,tanoklrl, othwhwd, trophwds, exhwds, othhrd, othspc};
    double *max = std::max_element(std::begin(arr), std::end(arr));
    p1 = *max - 0.001;

    if(p1 > 0.0){
        //! A.B. MAPLE-BEECH-BIRCH
        if(p1 < mbb){
            if(blch >= half){
                //! BLACK CHERRY(802)
                ift = 802;
            } else if(redmapl >= half){
                //! RED MAPLE-UPLAND(809)
                ift = 809;
            } else {

                std::array<double, 4> arr = {bcwayp, mplbaswd, elmashlo, mplbchyb};
                double *max = std::max_element(std::begin(arr), std::end(arr));
                p2 = *max - 0.001;

                if(p2 > 0.0){
                    if(p2 < bcwayp){
                        //! B.CHERRY-W.ASH-Y.POPLAR(803)
                        ift = 803;
                    } else if(p2 < mplbaswd){
                        //! HARD MAPLE-BASSWOOD(805)
                        ift = 805;
                    } else if(p2 < elmashlo){
                        //! ELM-ASH-LOCUST(807)
                        ift = 807;
                    } else if(mplbchyb > 0.0){
                        //! MAPLE-BEECH-YELLOW BIRCH(801)
                        ift = 801;
                    }
                }
            }
        } else if(p1 < elmashcw){
            //! A.B. ELM-ASH-COTTONWOOD
            if(ctnwd >= half){
                //! COTTONWOOD(703)
                ift = 703;
            } else if(willow >= half){
                //! WILLOW(704)
                ift = 704;
            } else if(redmapl >= half){
                //! RED MAPLE-LOWLAND(708)
                ift = 708;
            } else {

                std::array<double, 7> arr = {rbrchsyc, sycpcelm, baelmmap, sgbelmga, slvmaelm, ctnwwilo, orgnash};
                double *max = std::max_element(std::begin(arr), std::end(arr));
                p2 = *max - 0.001;

                if(p2 > 0.0){
                    if(p2 < rbrchsyc){
                        //! RIVER BIRCH-SYCAMORE(702)
                        ift = 702;
                    } else if(p2 < sycpcelm){
                        //! SYCAMORE-PECAN-ELM(705)
                        ift = 705;
                    } else if(p2 < baelmmap){
                        //! B.ASH-ELM-MAPLE(701)
                        ift = 701;
                    } else if(p2 < sgbelmga){
                        //! SUGARBERRY-HACKBERRY-ELM-GREEN ASH(706)
                        ift = 706;
                    } else if(p2 < slvmaelm){
                        //! SILVER MAPLE-ELM(707)
                        ift = 707;
                    } else if(p2 < ctnwwilo){
                        //! COTTONWOOD-WILLOW(709)
                        ift = 709;
                    } else if(orgnash > 0.0){
                        //! OREGON ASH(722)
                        ift = 722;
                    }
                }
            }
        } else if(p1 < oakhck){
            //! A.B. OAK-HICKORY
            if(whoak >= half){
                //! WHITE OAK(504)
                ift = 504;
            } else if(buroak >= half){
                //! BUR OAK(509)
                ift = 509;
            } else if(chstoak >= half){
                //! CHESTNUT OAK(502)
                ift = 502;
            } else if(nroak >= half){
                //! N.RED OAK(505)
                ift = 505;
            } else if(scrltoak >= half){
                //! SCARLET OAK(510)
                ift = 510;
            } else if(yp >= half){
                //! YELLOW POPLAR(511)
                ift = 511;
            } else if(bwalnut >= half){
                //! BLACK WALNUT(512)
                ift = 512;
            } else if(blcst >= half){
                //! BLACK LOCUST(513)
                ift = 513;
            } else if(redmapl >= half){
                //! RED MAPLE-OAK(519)
                ift = 519;
            } else {
                qoak2 = 0.25 * oakhck;

                std::array<double, 8> arr = {pstbljko, chblsc, worohk, ypworo, scruboak,swgyp, sasfprsm, mxdhwd};
                double *max = std::max_element(std::begin(arr), std::end(arr));
                p2 = *max;

                if(p2 > qoak2){
                    p2 = p2 - 0.001;
                    if(p2 < pstbljko){
                        //! POST-BLACKJACK OAK(501)
                        ift = 501;
                    } else if(p2 < chblsc){
                        //! CHSTNUT-BLCK-SCRLET OAK(515)
                        ift = 515;
                    } else if(p2 < worohk){
                        //! W.OAK-R.OAK-HICKORY(503)
                        ift = 503;
                    } else if(p2 < ypworo){
                        //! Y.POPLAR-W.OAK-RED OAK(506)
                        ift = 506;
                    } else if(p2 < scruboak){
                        //! SOUTHERN SCRUB-OAK(514)
                        ift = 514;
                    } else if(p2 < swgyp){
                        //! SWEETGUM-Y.POP(508)
                        ift = 508;
                    } else if(p2 < sasfprsm){
                        //! SASAFRAS-PERSIMMON(507)
                        ift = 507;
                    } else if(mxdhwd > 0.0){
                        
                        ift = 520;
                    }
                } else {
                    if(mxdhwd > 0.0){
                        //! MIXED UPLAND HARDWOODS(520)
                        ift = 520;
                    }
                }
            }
        } else if(p1 < okgmcyp){
            //! A.B. OAK-GUM-CYPRESS
            if(atlwcdr >= half){
                //! ATLANTIC WHITE CEDAR(606)
                ift = 606;
            } else {

                std::array<double, 5> arr = {sbstrm, schchbo, swgwilo, cypwtup, ovrcupwh};
                double *max = std::max_element(std::begin(arr), std::end(arr));
                p2 = *max - 0.001;

                if(p2 > 0.0){
                    if(p2 < sbstrm){
                        //! SWEETBAY,SWAMP TPLO,RED MPL(608)
                        ift = 608;
                    } else if(p2 < schchbo){
                        //! SWAMP CHESTNUT-CHERRY.BRK OAK(601)
                        ift = 601;
                    } else if(swgwilo){
                        //! SWEETGUM, NUTTALL-WILLOW-OAK(602)
                        ift = 602;
                    } else if(p2 < cypwtup){
                        //! CYPRESS-WATER TUPELO(607)
                        ift = 607;
                    } else if(ovrcupwh){
                        //! OVRCUP,WATER OAK HICKORY(605)
                        ift = 605;
                    }
                }
            }
        } else if(p1 < aspbrch){
            //! A.B. ASPEN-BIRCH

            std::array<double, 3> arr = {aspen, blsmpop, paprbrch};
            double *max = std::max_element(std::begin(arr), std::end(arr));
            p2 = *max - 0.001;

            if(p2 > 0.0){
                if(p2 < aspen){
                    //! ASPEN(901)
                    ift = 901;
                } else if(p2 < blsmpop){
                    //! BALSAM POPLAR(904)
                    ift = 904;
                } else if(paprbrch > 0.0){
                    //! PAPER BIRCH(902)
                    ift = 902;
                }
            }
        } else if(p1 < aldrmapl){
            //! A.B. RED ALDER-MAPLE

            std::array<double, 2> arr = {redaldr, bglfmpl};
            double *max = std::max_element(std::begin(arr), std::end(arr));
            p2 = *max - 0.001;

            if(p2 < redaldr){
                //! RED ALDER(911)
                ift = 911;
            } else if(bglfmpl > 0.0){
                //! BIGLEAF MAPLE(912)
                ift = 912;
            }
        } else if(p1 < wstoak){
            //! A.B. WESTERN OAKS

            std::array<double, 8> arr = {clfbo, orgwho, blueoak, graypine, costlo,canylo, doakwdld, eoakwdld};
            double *max = std::max_element(std::begin(arr), std::end(arr));
            p2 = *max - 0.001;

            if(p2 > 0.0){
                if(p2 < clfbo){
                    //! CALIFORNIA BLACK OAK(922)
                    ift = 922;
                } else if(p2 < orgwho){
                    //! OREGON WHITE OAK(923)
                    ift = 923;
                } else if(p2 < blueoak){
                    //! BLUE OAK(924)
                    ift = 924;
                } else if(p2 < graypine){
                    //! GRAY PINE(921)
                    ift = 921;
                } else if(p2 < costlo){
                    //! COAST LIVE OAK(931)
                    ift = 931;
                } else if(canylo){
                    //! CANYON-INTERIOR LIVE OAK(932)
                    ift = 932;
                } else if(p2 < doakwdld){
                    //! DECIDUOUS OAK WOODLAND(925)
                    ift = 925;
                } else if(eoakwdld > 0.0){
                    //! EVERGREEN OAK WOODLAND(926)
                    ift = 906;
                }
            }
        } else if(p1 < tanoklrl){
            //! A.B. TAN OAK-LAUREL

            std::array<double, 3> arr = {tanoak, clflrel, gntchnk};
            double *max = std::max_element(std::begin(arr), std::end(arr));
            p2 = *max - 0.001;

            if(p2 > 0.0){
                if(p2 < tanoak){
                    //! TAN OAK(941)
                    ift = 941;
                } else if(p2 < clflrel){
                    //! CALIFORNIA LAUREL(942)
                    ift = 942;
                } else if(gntchnk > 0.0){
                    //! GIANT CHINKAPIN(943)
                    ift = 943;
                }
            }
        } else if(p1 < othwhwd){
            //! A.B. OTHER WESTERN HARDWOODS

            std::array<double, 5> arr = {pacmdrn, mesquitw, mtnbrshw, intmaplw, miscwhwd};
            double *max = std::max_element(std::begin(arr), std::end(arr));
            p2 = *max - 0.001;

            if(p2 > 0.0){
                if(p2 < pacmdrn){
                    //! PACIFIC MADRONE(951)
                    ift = 951;
                } else if(p2 < mesquitw){
                    //! MESQUITE-WOODLAND(952)
                    ift = 952;
                }else if(p2 < mtnbrshw){
                    //! MTN. BRUSH WOODLAND(953)
                    ift = 953;
                } else if(p2 < intmaplw){
                    //! INT. MTN. MAPLE WOODLAND(954)
                    ift = 954;
                } else if(miscwhwd > 0.0){
                    //! MISC. W. HARDWOODS(955)
                    ift = 955;
                }
            }
        } else if(p1 < trophwds){
            //! A.B. TROPICAL HARDWOODS

            std::array<double, 2> arr = {palm, mangrv};
            double *max = std::max_element(std::begin(arr), std::end(arr));
            p2 = *max - 0.001;

            if(p2 > 0.0){
                if(p2 < palm){
                    //! SABAL PALM(981)
                    ift = 981;
                } else if(mangrv > 0.0){
                    //! MANGROVE(982)
                    ift = 982;
                }
            }
        } else if(p1 < exhwds){
            //! A.B. EXOTIC HARDWOODS

            std::array<double, 4> arr = {palonia, meluca, euclpt, othexhwd};
            double *max = std::max_element(std::begin(arr), std::end(arr));
            p2 = *max - 0.001;

            if(p2 > 0.0){
                if(p2 < palonia){
                    //! ROYAL PAULOWNIA(991)
                    ift = 991;
                } else if(p2 < meluca){
                    //! MELALUCA(992)
                    ift = 992;
                } else if(p2 < euclpt){
                    //! EUCALYPTUS(993)
                    ift = 993;
                } else if(othexhwd > 0.0){
                    //! OTHER EXOTIC HARDWOODS(995)
                    ift = 995;
                }
            }
        } else if(p1 < othhrd){
            //! A.B. FVS - OTHER HARDWOODS
            std::array<double, 2> arr = {othhrd, 0.0};
            double *max = std::max_element(std::begin(arr), std::end(arr));
            p2 = *max - 0.001;

            if(p2 > 0.0){
                if(othhrd > 0.0){
                    //! FVS - OTHER HARDWOODS(997)
                    ift = 997;
                }
            }
        } else if(p1 < othspc){
            //! A.B. FVS - ALL OTHER SPECIES

            std::array<double, 2> arr = {othspc, 0.0};
            double *max = std::max_element(std::begin(arr), std::end(arr));
            p2 = *max - 0.001;

            if(p2 > 0.0){
                if(othspc > 0.0){
                    //! FVS - ALL OTHER SPECIES(998)
                    ift = 998;
                }
            }
        }
    }
}

//! STATE IS CALIFORNIAT
//! N. CA. COUNTIES
//! DOUGLAS-FIR NOT ALONG N. CA COAST
//! APPROXIMATION FOR N. CA. COUNTIES
//! DOUGLAS-FIR NOT ALONG N. CA COAST
//! SUGAR PINE/INCENSE CEDAR
//! PONDEROSA/JEFFREY PINE
//! WHITE FIR/RED FIR
//! OTHER OR UNKNOWN

return ift;
} //end function

//map between forest type number and name
std::map<int, std::string> type_name = {
{101, "Jack pine"},
{102, "Red pine"},
{103, "Eastern White pine"},
{104, "White pine-hemlock"},
{105, "Eastern Hemlock"},
{121, "Balsam fir"},
{122, "White spruce"},
{123, "Red spruce"},
{124, "Red spruce-balsam fir"},
{125, "Black spruce"},
{126, "Tamarack"},
{127, "Northern white cedar"},
{141, "Longleaf pine"},
{142, "Slash pine"},
{161, "Loblolly pine"},
{162, "Shortleaf pine"},
{163, "Virginia pine"},
{164, "Sand pine"},
{165, "Table-mountain pine"},
{166, "Pond pine"},
{167, "Pitch pine"},
{168, "Spruce pine"},
{181, "Eastern redcedar"},
{182, "Rocky mountain juniper"},
{183, "Western Juniper"},
{184, "Juniper-woodland"},
{185, "Pinyon-juniper woodland"},
{201, "Douglas-fir"},
{202, "Port orford cedar"},
{221, "Ponderosa pine"},
{222, "Incense cedar"},
{223, "Jeffry-Coulter-Bigcone Douglas-fir"},
{224, "Sugar pine"},
{241, "Western white pine"},
{261, "White fir"},
{262, "Red fir"},
{263, "Noble fir"},
{264, "Pacific silver fir"},
{265, "Engelmann spruce"},
{266, "Engelmann spruce-subalpine fir"},
{267, "Grand fir"},
{268, "Subalpine fir"},
{269, "Blue spruce"},
{270, "Mountain hemlock"},
{271, "Alaska-yellow cedar"},
{281, "Lodgepole pine"},
{301, "Western hemlock"},
{304, "Western redcedar"},
{305, "Sitka spruce"},
{321, "Western larch"},
{341, "Redwood"},
{342, "Giant Sequoia"},
{361, "Knobcone pine"},
{362, "Southwest white pine"},
{363, "Bishop pine"},
{364, "Monterey pine"},
{365, "Foxtail-Bristlecone pine"},
{366, "Limber pine"},
{367, "Whitebark pine"},
{368, " Misc. Western softwoods"},
{371, "California mixed conifer"},
{381, "Scotch pine"},
{383, "Other exotic softwoods"},
{401, "White pine-red oak-white ash"},
{402, "Eastern redcedar-hardwood"},
{403, "Longleaf pine-oak"},
{404, "Shortleaf pine-oak"},
{405, "Virginia pine-southern red oak"},
{406, "Loblolly pine-hardwood"},
{407, "Slash pine-hardwood"},
{409, "Other pine-hardwood"},
{501, "Post-blackjack oak"},
{502, "Chestnut oak"},
{503, "White oak-red oak-hickory"},
{504, "White oak"},
{505, "Northern red oak"},
{506, "Yellow poplar-white oak-red oak"},
{507, "Sassafras-persimmon"},
{508, "Sweetgum-Yellow poplar"},
{509, "Bur oak"},
{510, "Scarlet oak"},
{511, "Yellow poplar"},
{512, "Black walnut"},
{513, "Black locust"},
{514, "Southern scrub oak"},
{515, "Chestnut-black-scarlet oak"},
{519, "Red maple-oak"},
{520, "Mixed upland hardwoods"},
{601, "Swamp chestnut-cherrybark oak"},
{602, "Sweetgum-Nuttall-willow oak"},
{605, "Overcup oak-water hickory"},
{606, "Atlantic white-cedar"},
{607, "Bald cypress-water tupelo"},
{608, "Sweetbay-swamp tupelo-red maple"},
{701, "Black ash-American elm-red maple"},
{702, "River birch-sycamore"},
{703, "Cottonwood"},
{704, "Willow"},
{705, "Sycamore-pecan-American elm"},
{706, "Sugarberry-hackberry-elm-green ash"},
{707, "Silver maple-American elm"},
{708, "Red maple-lowland"},
{709, "Cottonwood-willow"},
{722, "Oregon ash"},
{801, "Sugar maple-beech-Yellow birch"},
{802, "Black cherry"},
{803, "Cherry-ash-yellow poplar"},
{805, "Hard maple-basswood"},
{807, "Elm-ash-locust"},
{809, "Red maple-upland"},
{901, "Aspen"},
{902, "Paper birch"},
{904, "Balsam poplar"},
{911, "Red alder"},
{912, "Bigleaf maple"},
{921, "Gray pine "},
{922, "California black oak"},
{923, "Oregon white oak"},
{924, "Blue oak"},
{925, "Deciduous oak woodland"},
{926, "Evergreen oak woodland"},
{931, "Coast live oak"},
{932, "Canyon-interior live oak"},
{941, "Tan oak"},
{942, "California laurel"},
{943, "Giant chinkapin"},
{951, "Pacific madrone"},
{952, "Mesquite woodland"},
{953, "Mountain brush woodland"},
{954, "Intermountain maple woodland"},
{955, "Misc. Western hardwoods"},
{981, "Sable Palm"},
{982, "Mangrove"},
{991, "Paulownia"},
{992, "Melaluca"},
{993, "Eucalyptus"},
{995, "Other exotic hardwoods"},
{996, "FVS other softwoods"},
{997, "FVS other hardwoods"},
{998, "FVS other species"},
{999, "Nonstocked"}
};

std::string fortyp_name(int ftype){
    return type_name[ftype] ;     
}

std::map<int, std::string> typegroup_name = {
{100, "White-red-jack pine"},
{120, "Spruce-fir"},
{140, "Longleaf-slash pine"},
{160, "Loblolly-shortleaf pine"},
{180, "Pinyon-Juniper"},
{200, "Douglas-fir"},
{220, "Ponderosa pine"},
{240, "Western white pine"},
{260, "Fir-spruce-Mountain hemlock"},
{280, "Lodgepole pine"},
{300, "Hemlock-Sitka spruce"},
{320, "Western larch"},
{340, "Redwood"},
{360, "Other western softwoods"},
{370, "California mixed conifer"},
{380, "Exotic softwoods"},
{400, "Oak-pine"},
{500, "Oak-hickory"},
{600, "Oak-gum-cypress"},
{700, "Elm-ash-cottonwood"},
{800, "Maple-beech-birch"},
{900, "Aspen-birch"},
{910, "Alder-maple"},
{920, "Western oak"},
{940, "Tanoak-laurel"},
{950, "Other western hardwoods"},
{980, "Tropical hardwoods"},
{990, "Exotic hardwoods"},
{99, "FVS types"},
{999, "Nonstocked"}
};

std::string fortypgroup_name(int ftg){
    return typegroup_name[ftg];
}

//map forest type to forest type group
std::map<int, int> typegroup = {
{101,100},
{102,100},
{103,100},
{104,100},
{105,100},
{121,120},
{122,120},
{123,120},
{124,120},
{125,120},
{126,120},
{127,120},
{141,140},
{142,140},
{161,160},
{162,160},
{163,160},
{164,160},
{165,160},
{166,160},
{167,160},
{168,160},
{181,180},
{182,180},
{183,180},
{184,180},
{185,180},
{201,200},
{202,200},
{221,220},
{222,220},
{223,220},
{224,220},
{241,240},
{261,260},
{262,260},
{263,260},
{264,260},
{265,260},
{266,260},
{267,260},
{268,260},
{269,260},
{270,260},
{271,260},
{281,280},
{301,300},
{304,300},
{305,300},
{321,320},
{341,340},
{342,340},
{361,360},
{362,360},
{363,360},
{364,360},
{365,360},
{366,360},
{367,360},
{368,360},
{371,370},
{381,380},
{383,380},
{401,400},
{402,400},
{403,400},
{404,400},
{405,400},
{406,400},
{407,400},
{409,400},
{501,500},
{502,500},
{503,500},
{504,500},
{505,500},
{506,500},
{507,500},
{508,500},
{509,500},
{510,500},
{511,500},
{512,500},
{513,500},
{514,500},
{515,500},
{519,500},
{520,500},
{601,600},
{602,600},
{605,600},
{606,600},
{607,600},
{608,600},
{701,700},
{702,700},
{703,700},
{704,700},
{705,700},
{706,700},
{707,700},
{708,700},
{709,700},
{722,700},
{801,800},
{802,800},
{803,800},
{805,800},
{807,800},
{809,800},
{901,900},
{902,900},
{904,900},
{911,910},
{912,910},
{921,920},
{922,920},
{923,920},
{924,920},
{925,920},
{926,920},
{931,920},
{932,920},
{941,940},
{942,940},
{943,940},
{951,950},
{952,950},
{953,950},
{954,950},
{955,950},
{981,980},
{982,980},
{991,990},
{992,990},
{993,990},
{995,990},
{996,99},
{997,99},
{998,99},
{999,999}
};

int fortypgroup(int ft){
    return typegroup[ft];
}