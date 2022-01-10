//Valeurs des tables d'onde de En Echo de Manoury
//transformées en fonctions externes pour Faust
//
//Fichier vib1.aif utilisé pour l'harmoniseur
//
//Alain Bonardi
//mai 2011


float get_vib1_Value(float index);

//***************************************************//
//Table d'onde sin utilisée dans les PAFs
//***************************************************//
//
//
double vib1Value[512] = {
0.655090332,
0.632873535,
0.601196289,
0.56060791,
0.511779785,
0.455444336,
0.392547607,
0.324005127,
0.250915527,
0.174316406,
0.095428467,
0.015411377,
-0.06463623,
-0.1434021,
-0.219848633,
-0.292785645,
-0.361206055,
-0.424102783,
-0.48046875,
-0.529693604,
-0.570922852,
-0.603637695,
-0.627319336,
-0.641601563,
-0.646392822,
-0.641540527,
-0.62713623,
-0.603363037,
-0.570617676,
-0.529296875,
-0.480041504,
-0.423583984,
-0.360687256,
-0.292266846,
-0.219329834,
-0.142883301,
-0.064086914,
0.015899658,
0.096038818,
0.174987793,
0.251708984,
0.325042725,
0.393859863,
0.457183838,
0.514068604,
0.563568115,
0.605010986,
0.63772583,
0.66116333,
0.674987793,
0.678863525,
0.672790527,
0.656707764,
0.630859375,
0.59552002,
0.551239014,
0.498596191,
0.438201904,
0.371124268,
0.298126221,
0.220367432,
0.138946533,
0.055023193,
-0.03012085,
-0.115325928,
-0.199157715,
-0.280578613,
-0.35824585,
-0.431030273,
-0.497772217,
-0.557495117,
-0.609283447,
-0.652252197,
-0.685913086,
-0.709472656,
-0.722747803,
-0.725372314,
-0.717346191,
-0.698608398,
-0.669616699,
-0.630615234,
-0.582122803,
-0.524932861,
-0.45980835,
-0.387695313,
-0.309661865,
-0.226867676,
-0.14050293,
-0.051818848,
0.037780762,
0.127044678,
0.214660645,
0.299255371,
0.379669189,
0.454528809,
0.522857666,
0.583618164,
0.635864258,
0.678833008,
0.711853027,
0.734466553,
0.746307373,
0.7472229,
0.7371521,
0.716278076,
0.684844971,
0.643463135,
0.592529297,
0.53302002,
0.465667725,
0.391479492,
0.31161499,
0.227142334,
0.13949585,
0.049713135,
-0.040679932,
-0.130462646,
-0.218322754,
-0.302947998,
-0.383117676,
-0.457672119,
-0.525543213,
-0.585693359,
-0.637298584,
-0.679626465,
-0.712036133,
-0.734069824,
-0.745422363,
-0.746002197,
-0.735748291,
-0.714752197,
-0.683380127,
-0.642181396,
-0.59161377,
-0.532470703,
-0.465576172,
-0.391937256,
-0.31262207,
-0.228668213,
-0.141387939,
-0.051971436,
0.038299561,
0.128082275,
0.216125488,
0.301300049,
0.382141113,
0.457611084,
0.526641846,
0.588195801,
0.641418457,
0.685455322,
0.71975708,
0.743743896,
0.756988525,
0.759399414,
0.750823975,
0.731323242,
0.701171875,
0.660766602,
0.610595703,
0.551330566,
0.483825684,
0.408966064,
0.327728271,
0.241424561,
0.151031494,
0.057952881,
-0.036499023,
-0.13104248,
-0.224273682,
-0.314880371,
-0.401428223,
-0.482818604,
-0.557647705,
-0.624969482,
-0.683624268,
-0.732727051,
-0.771514893,
-0.799285889,
-0.815612793,
-0.820098877,
-0.812591553,
-0.793121338,
-0.761810303,
-0.719055176,
-0.665344238,
-0.601379395,
-0.528015137,
-0.44619751,
-0.357055664,
-0.261901855,
-0.161956787,
-0.058746338,
0.046234131,
0.151519775,
0.255493164,
0.356628418,
0.453399658,
0.544311523,
0.627960205,
0.703033447,
0.768341064,
0.822753906,
0.86541748,
0.895568848,
0.912628174,
0.916229248,
0.906219482,
0.882568359,
0.845550537,
0.795623779,
0.733398438,
0.659729004,
0.575622559,
0.48223877,
0.380981445,
0.273254395,
0.160675049,
0.044921875,
-0.072235107,
-0.189147949,
-0.303955078,
-0.414886475,
-0.520294189,
-0.618499756,
-0.707946777,
-0.78729248,
-0.855194092,
-0.910583496,
-0.952575684,
-0.98046875,
-0.993713379,
-0.992126465,
-0.975616455,
-0.944396973,
-0.898895264,
-0.839813232,
-0.767852783,
-0.684265137,
-0.590209961,
-0.487060547,
-0.376525879,
-0.260131836,
-0.139709473,
-0.017120361,
0.105804443,
0.227111816,
0.345092773,
0.457794189,
0.563568115,
0.660797119,
0.74798584,
0.823822021,
0.887207031,
0.937072754,
0.972808838,
0.993865967,
0.999938965,
0.991027832,
0.967315674,
0.929077148,
0.877166748,
0.812316895,
0.735595703,
0.648193359,
0.551544189,
0.447143555,
0.336639404,
0.221740723,
0.104187012,
-0.014129639,
-0.131469727,
-0.246063232,
-0.356170654,
-0.460144043,
-0.556488037,
-0.643737793,
-0.720703125,
-0.786254883,
-0.839569092,
-0.879821777,
-0.906555176,
-0.919616699,
-0.918792725,
-0.904296875,
-0.876373291,
-0.835693359,
-0.782928467,
-0.718994141,
-0.644989014,
-0.562103271,
-0.471740723,
-0.375183105,
-0.274108887,
-0.169952393,
-0.06439209,
0.040985107,
0.14465332,
0.245056152,
0.34072876,
0.430328369,
0.512512207,
0.586242676,
0.650360107,
0.704193115,
0.746948242,
0.778106689,
0.797393799,
0.804534912,
0.799621582,
0.782867432,
0.754608154,
0.715332031,
0.665863037,
0.606903076,
0.539398193,
0.464538574,
0.383422852,
0.297302246,
0.207458496,
0.115325928,
0.022186279,
-0.070495605,
-0.161437988,
-0.249298096,
-0.332794189,
-0.410705566,
-0.481964111,
-0.545593262,
-0.600585938,
-0.646270752,
-0.682006836,
-0.707275391,
-0.72177124,
-0.72543335,
-0.718048096,
-0.699829102,
-0.671173096,
-0.632385254,
-0.584136963,
-0.527160645,
-0.462280273,
-0.390350342,
-0.312652588,
-0.230194092,
-0.144256592,
-0.056060791,
0.033050537,
0.121765137,
0.208740234,
0.292724609,
0.372406006,
0.446563721,
0.514160156,
0.574066162,
0.625366211,
0.667236328,
0.699035645,
0.720214844,
0.730377197,
0.729309082,
0.71697998,
0.693481445,
0.659118652,
0.614318848,
0.559692383,
0.496002197,
0.424163818,
0.345184326,
0.260253906,
0.170654297,
0.077636719,
-0.017303467,
-0.112731934,
-0.207244873,
-0.299316406,
-0.387481689,
-0.470397949,
-0.546661377,
-0.615081787,
-0.674468994,
-0.723876953,
-0.762359619,
-0.789276123,
-0.804107666,
-0.80645752,
-0.796203613,
-0.773406982,
-0.738311768,
-0.69128418,
-0.632995605,
-0.56439209,
-0.486236572,
-0.399902344,
-0.306518555,
-0.207580566,
-0.104522705,
0.00088501,
0.107269287,
0.212646484,
0.315582275,
0.414337158,
0.507293701,
0.592956543,
0.669921875,
0.736968994,
0.792785645,
0.836669922,
0.867614746,
0.885223389,
0.889007568,
0.87902832,
0.855072021,
0.817749023,
0.767425537,
0.70489502,
0.631072998,
0.547088623,
0.454284668,
0.354003906,
0.248016357,
0.137756348,
0.025115967,
-0.088134766,
-0.200256348,
-0.309417725,
-0.413879395,
-0.512023926,
-0.602203369,
-0.683044434,
-0.753204346,
-0.811645508,
-0.857391357,
-0.889709473,
-0.908111572,
-0.912353516,
-0.902374268,
-0.878265381,
-0.840545654,
-0.789886475,
-0.726959229,
-0.652923584,
-0.569000244,
-0.476501465,
-0.376983643,
-0.271911621,
-0.163116455,
-0.052368164,
0.05871582,
0.168243408,
0.27456665,
0.37600708,
0.470947266,
0.557952881,
0.63571167,
0.703033447,
0.758972168,
0.802612305,
0.833496094,
0.851135254,
0.855407715,
0.846313477,
0.824127197,
0.789337158,
0.742553711,
0.68460083,
0.616577148,
0.539581299,
0.454925537,
0.364013672,
0.268371582,
0.169403076,
0.068847656,
-0.031707764,
-0.13079834,
-0.226837158,
-0.318328857,
-0.403930664,
-0.48236084,
-0.552459717,
-0.613250732,
-0.663848877,
-0.703674316,
-0.732147217,
-0.748931885,
-0.75402832,
-0.747314453,
-0.729125977,
-0.699890137,
-0.660125732,
-0.610595703,
-0.552185059,
-0.485839844,
-0.412689209,
-0.333984375,
-0.250915527,
-0.164825439,
-0.077026367,
0.011016846,
0.098083496,
0.182800293,
0.263916016,
0.340240479,
0.410675049,
0.474212646,
0.529937744,
0.577087402,
0.61505127,
0.643310547,
0.661590576,
0.669616699,
0.667419434
};


float get_vib1_Value(float index){
	return vib1Value[(int)index];
}