#include  "../include/hash.hpp"
#include <gtest/gtest.h>
#include <iostream>
#include <fstream>
#include <string>

TEST(MD5Test, test0) {
    hash_md5* hash = new hash_md5("championship teardown vacuity peruse nonrandomnesses chinooks edentates narcissism bints unfree crustaceans maidish macrocytoses discordances bobtails snibbed intercrosses relocatable agribusinesses beavertitrantsgassinessesbuttonypampeangurnardspottiestpublicsunsociablyhangnailsimpregnationosmiumsmonacidsdeputingomittedcontinuumunconfusedalthorndockyardsessentializingoutheardcoalacrutchhawkiereinvigoratordetoursaureoleinterrogatorspeacocksstatecraftdrainage");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "f516f097d6e35a96928643d44e079ae8");
}
TEST(SHA256Test, test0) {
    hash_sha256* hash = new hash_sha256("championship teardown vacuity peruse nonrandomnesses chinooks edentates narcissism bints unfree crustaceans maidish macrocytoses discordances bobtails snibbed intercrosses relocatable agribusinesses beavertitrantsgassinessesbuttonypampeangurnardspottiestpublicsunsociablyhangnailsimpregnationosmiumsmonacidsdeputingomittedcontinuumunconfusedalthorndockyardsessentializingoutheardcoalacrutchhawkiereinvigoratordetoursaureoleinterrogatorspeacocksstatecraftdrainage");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "94e1f209ffbe94f7054e4e507b085d73334ee6212e3f932494a388dded2456cd");
}
TEST(SHA512Test, test0) {
    hash_sha512* hash = new hash_sha512("championship teardown vacuity peruse nonrandomnesses chinooks edentates narcissism bints unfree crustaceans maidish macrocytoses discordances bobtails snibbed intercrosses relocatable agribusinesses beavertitrantsgassinessesbuttonypampeangurnardspottiestpublicsunsociablyhangnailsimpregnationosmiumsmonacidsdeputingomittedcontinuumunconfusedalthorndockyardsessentializingoutheardcoalacrutchhawkiereinvigoratordetoursaureoleinterrogatorspeacocksstatecraftdrainage");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "b56c73bb8efecd5c3ec7b0c139021ff413bbc0ab967d723cdf0826ae8283d04a6fd71bcad8d3dabd8b4a89684c0f3c09f94eb53fa6cfc5089c0d219f272c264c");
}
TEST(MD5Test, test1) {
    hash_md5* hash = new hash_md5("epizoites vocalics prosed hireling toquet peeress affluences unmortise shadowed chevrets coulomb pictorializes sprigtail archerfish prespecifying waxinesses hissings oratorio oscillators basophilelaterbornsmicawberinsuperablebevellingphiltreawakeningpilferagegrievousnessvisedgratulationskremlinologistssmarmsascenderholystoningtactilewhinersaedilepoetisedburrstoneseternizationcranesbillsscrapingpiperidinesiodidehempshypoxemiasmarshmallowsfiddlebackscaravansaryreveller");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "ab114bb75171f7a91a7be9f178f23ecd");
}
TEST(SHA256Test, test1) {
    hash_sha256* hash = new hash_sha256("epizoites vocalics prosed hireling toquet peeress affluences unmortise shadowed chevrets coulomb pictorializes sprigtail archerfish prespecifying waxinesses hissings oratorio oscillators basophilelaterbornsmicawberinsuperablebevellingphiltreawakeningpilferagegrievousnessvisedgratulationskremlinologistssmarmsascenderholystoningtactilewhinersaedilepoetisedburrstoneseternizationcranesbillsscrapingpiperidinesiodidehempshypoxemiasmarshmallowsfiddlebackscaravansaryreveller");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "546e89dee13f40365a3d4cf44cfc19bfee0521ec6b0bf2530ad8927a9e8c2df1");
}
TEST(SHA512Test, test1) {
    hash_sha512* hash = new hash_sha512("epizoites vocalics prosed hireling toquet peeress affluences unmortise shadowed chevrets coulomb pictorializes sprigtail archerfish prespecifying waxinesses hissings oratorio oscillators basophilelaterbornsmicawberinsuperablebevellingphiltreawakeningpilferagegrievousnessvisedgratulationskremlinologistssmarmsascenderholystoningtactilewhinersaedilepoetisedburrstoneseternizationcranesbillsscrapingpiperidinesiodidehempshypoxemiasmarshmallowsfiddlebackscaravansaryreveller");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "8a68baa769ce5822fa72ad27dcd173b1e7708cda4236d7b4c179b7f7b0b610f5de0a3cab2d08bc652ebeebcd72b238df7f02e7d1adf551c02c25320ccf93c4c1");
}
TEST(MD5Test, test2) {
    hash_md5* hash = new hash_md5("gauffer isoenzymic departures peroxy vulcanisates encrypts ute engarlands jibboom qwerty reargument cambered fruitlessly tepidity sterilised biphenyls telemeter impersonalizes cryoprotectant vindicationskeratosiscandyflosstypographbromidesviremiclipolyticharpinhorsewhippersheteronymsoverboilingdemobbedenzymswimsuitrefuserspressworkhomepagespiritlessnesssederuntsagenedeactivatorsipsilateralfluorimetriesfirmanreworndifferencingpaunchinessespostganglionicreriggeddiplomatstours");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "9cc6d704b3271a89c8d32ec59e2a410e");
}
TEST(SHA256Test, test2) {
    hash_sha256* hash = new hash_sha256("gauffer isoenzymic departures peroxy vulcanisates encrypts ute engarlands jibboom qwerty reargument cambered fruitlessly tepidity sterilised biphenyls telemeter impersonalizes cryoprotectant vindicationskeratosiscandyflosstypographbromidesviremiclipolyticharpinhorsewhippersheteronymsoverboilingdemobbedenzymswimsuitrefuserspressworkhomepagespiritlessnesssederuntsagenedeactivatorsipsilateralfluorimetriesfirmanreworndifferencingpaunchinessespostganglionicreriggeddiplomatstours");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "8878739a296de31f2c138d9beb634587effc88bc36a3072f616f23130c646633");
}
TEST(SHA512Test, test2) {
    hash_sha512* hash = new hash_sha512("gauffer isoenzymic departures peroxy vulcanisates encrypts ute engarlands jibboom qwerty reargument cambered fruitlessly tepidity sterilised biphenyls telemeter impersonalizes cryoprotectant vindicationskeratosiscandyflosstypographbromidesviremiclipolyticharpinhorsewhippersheteronymsoverboilingdemobbedenzymswimsuitrefuserspressworkhomepagespiritlessnesssederuntsagenedeactivatorsipsilateralfluorimetriesfirmanreworndifferencingpaunchinessespostganglionicreriggeddiplomatstours");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "afabd452df887730195f1e9414f2c20d276f5dd643967174d52d3b9462c7746d19f007ec023b628fe6c330cc7f3468cae9324686ca05d9fc4249b03ea8027864");
}
TEST(MD5Test, test4) {
    hash_md5* hash = new hash_md5("fustian pinkening refilling restriving reinjures limousine semifinalists mastabah kentledges trock chloral monotypic goalless gorgonized deflections standpat octave reinfect brutalised feverishnessesclawedbirthratebulletinedcanthusspanglinghornetmoonerpaleographyhitmenfleawortintonedmesocraniestheisticalbodysuitemblematicallyoverallkyboshescyclostomesubnodalsaddhumatteredreacceleratessilveringsmonomerswooliesfrierscentesimalfreezescissionssomebody");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "2eb3f706026cf57afa2003a856aca5bf");
}
TEST(SHA256Test, test4) {
    hash_sha256* hash = new hash_sha256("fustian pinkening refilling restriving reinjures limousine semifinalists mastabah kentledges trock chloral monotypic goalless gorgonized deflections standpat octave reinfect brutalised feverishnessesclawedbirthratebulletinedcanthusspanglinghornetmoonerpaleographyhitmenfleawortintonedmesocraniestheisticalbodysuitemblematicallyoverallkyboshescyclostomesubnodalsaddhumatteredreacceleratessilveringsmonomerswooliesfrierscentesimalfreezescissionssomebody");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "dfd1e1a57ffbf6a1cab51d9611b9f76d3df38c9326e7275f58da98c51d3c6a6f");
}
TEST(SHA512Test, test4) {
    hash_sha512* hash = new hash_sha512("fustian pinkening refilling restriving reinjures limousine semifinalists mastabah kentledges trock chloral monotypic goalless gorgonized deflections standpat octave reinfect brutalised feverishnessesclawedbirthratebulletinedcanthusspanglinghornetmoonerpaleographyhitmenfleawortintonedmesocraniestheisticalbodysuitemblematicallyoverallkyboshescyclostomesubnodalsaddhumatteredreacceleratessilveringsmonomerswooliesfrierscentesimalfreezescissionssomebody");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "f33e149832af6eefe47150a5757e4775969865f2e291dbe4154d8562422bb65afaaec133fb972569835ffbe53c5952a82d53fa5d600c5bbf7dc1274cf4948314");
}
TEST(MD5Test, test5) {
    hash_md5* hash = new hash_md5("asthmatically verglas billiard glamourless agitating necrologists physicalism rewedding wolframites uncleanness subnuclei examiners foilable special telexing biogenesis adulteresses microcap weatherglass boilinglyenshrinedromanticizingconcertmasterclattersmallowsstockadeshellproofparleysuncompensatedgelationsdeployersstolportsmisestimatedscroochingfumitoriesintuitsindigenbailornewshoundvitrainsethicalnessesevacuantverbenaparturitionlazinessesballhawksattitudinallygangstersnegationspreselections");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "237c8ad715ef44493d06e5d270c6bc66");
}
TEST(SHA256Test, test5) {
    hash_sha256* hash = new hash_sha256("asthmatically verglas billiard glamourless agitating necrologists physicalism rewedding wolframites uncleanness subnuclei examiners foilable special telexing biogenesis adulteresses microcap weatherglass boilinglyenshrinedromanticizingconcertmasterclattersmallowsstockadeshellproofparleysuncompensatedgelationsdeployersstolportsmisestimatedscroochingfumitoriesintuitsindigenbailornewshoundvitrainsethicalnessesevacuantverbenaparturitionlazinessesballhawksattitudinallygangstersnegationspreselections");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "27d0974f8d9182b53c9924b4f0f87d46defdab37a4409e7171b2b0c9ddce367f");
}
TEST(SHA512Test, test5) {
    hash_sha512* hash = new hash_sha512("asthmatically verglas billiard glamourless agitating necrologists physicalism rewedding wolframites uncleanness subnuclei examiners foilable special telexing biogenesis adulteresses microcap weatherglass boilinglyenshrinedromanticizingconcertmasterclattersmallowsstockadeshellproofparleysuncompensatedgelationsdeployersstolportsmisestimatedscroochingfumitoriesintuitsindigenbailornewshoundvitrainsethicalnessesevacuantverbenaparturitionlazinessesballhawksattitudinallygangstersnegationspreselections");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "bd45da7401ec47e7aa4e7cb7b73c2ad047bfd7e4a8149448f5ec9e106a96d91d3b7fef47fb394a6c5ce3f228bc10ba74f59e477c58903d6886e3558486ad2ebf");
}
TEST(MD5Test, test6) {
    hash_md5* hash = new hash_md5("resumer journeyman upflung emotionalizes sandpipers arpent wombats untrims analyzations wildfowler capmaker placarded prostitutors rockabyes allophanes vavassor granted lacrimals egocentric gravidascalisayadilutingdewlappedimmunosuppressantidogmaticgrubbersideshowsgallicizinggaragedassertingmaystroanottomansbrushwoodglutscapaciouslyantifeministsidewallpockmarksalleviantsgorgonizephoenixesdermatologicprexyslaybrittlyhistoricismhepatomataanchoragenoosphere");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "88aa6c128f97a5e8bfddb21deb7acb8d");
}
TEST(SHA256Test, test6) {
    hash_sha256* hash = new hash_sha256("resumer journeyman upflung emotionalizes sandpipers arpent wombats untrims analyzations wildfowler capmaker placarded prostitutors rockabyes allophanes vavassor granted lacrimals egocentric gravidascalisayadilutingdewlappedimmunosuppressantidogmaticgrubbersideshowsgallicizinggaragedassertingmaystroanottomansbrushwoodglutscapaciouslyantifeministsidewallpockmarksalleviantsgorgonizephoenixesdermatologicprexyslaybrittlyhistoricismhepatomataanchoragenoosphere");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "d7eb349cf0a0be856f7c88fb99f9e946cec6b3afdc18c97ccbcb7604cbe095df");
}
TEST(SHA512Test, test6) {
    hash_sha512* hash = new hash_sha512("resumer journeyman upflung emotionalizes sandpipers arpent wombats untrims analyzations wildfowler capmaker placarded prostitutors rockabyes allophanes vavassor granted lacrimals egocentric gravidascalisayadilutingdewlappedimmunosuppressantidogmaticgrubbersideshowsgallicizinggaragedassertingmaystroanottomansbrushwoodglutscapaciouslyantifeministsidewallpockmarksalleviantsgorgonizephoenixesdermatologicprexyslaybrittlyhistoricismhepatomataanchoragenoosphere");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "e4af29c8d440cc30496a307314cbba6a2e2bd38b335ef2e9075140d37d08c33b338ec59836fc80c59fa2cb884bdc4258a303e109688bc5b277a69442b45b914f");
}
TEST(MD5Test, test8) {
    hash_md5* hash = new hash_md5("bondstones snoozer thulium bovids hemolymph embezzlements concavity vised shod cancroids anticorrosion footbridge smokable flexing overstressed sickened astronomic athwart pelfs spookingrewrappedbrandyingminersphenylicunderdosebumptiouslyconsummationsescapologyurceolatehepcatdenialschronologicmagickedartisticallyembryoidphytopathogensporangialfoolerymadrassaswhitewashwabflashboardsmutagenicinducthaulyardstyphlosoleallosaurslanderbunkoedmelanistic");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "7ee996b6f34311a550da1e3ebeb66cd4");
}
TEST(SHA256Test, test8) {
    hash_sha256* hash = new hash_sha256("bondstones snoozer thulium bovids hemolymph embezzlements concavity vised shod cancroids anticorrosion footbridge smokable flexing overstressed sickened astronomic athwart pelfs spookingrewrappedbrandyingminersphenylicunderdosebumptiouslyconsummationsescapologyurceolatehepcatdenialschronologicmagickedartisticallyembryoidphytopathogensporangialfoolerymadrassaswhitewashwabflashboardsmutagenicinducthaulyardstyphlosoleallosaurslanderbunkoedmelanistic");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "ae1f2734242255d97fd32eeba61ac7f731043a36722be7a0819a08be25811e46");
}
TEST(SHA512Test, test8) {
    hash_sha512* hash = new hash_sha512("bondstones snoozer thulium bovids hemolymph embezzlements concavity vised shod cancroids anticorrosion footbridge smokable flexing overstressed sickened astronomic athwart pelfs spookingrewrappedbrandyingminersphenylicunderdosebumptiouslyconsummationsescapologyurceolatehepcatdenialschronologicmagickedartisticallyembryoidphytopathogensporangialfoolerymadrassaswhitewashwabflashboardsmutagenicinducthaulyardstyphlosoleallosaurslanderbunkoedmelanistic");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "89f6e3e3b454657f29c4c2cdb7bb74d8a0319823900c1f1f833d7dbcfda7d461d13526b102bb0e5a7814ba5f9a5f5cf49cb6c0aa6b6c481af085d8b3c8b39af0");
}
TEST(MD5Test, test9) {
    hash_md5* hash = new hash_md5("violones repellant goldenrod ceasefire polio svaraj expansibilities bosun feterita dogsbodies advisable tinstone gamma safrol radiochemical essentialist bawlers outmastering sunshades ritualisticallytartletpehsbriberiesreconqueredvideosaudiologycommercingcorruptionlavatoriesimposerturbochompsnonjoinderbouviercallipygouswampishingmistakesruchingsbiryanispentaploidforeclosescraggieroutrunnersdiademedsupertankerdimmedtaiglachcustomerthicklycaracolers");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "03eae6dbd2f2c70aff2827e538c1ac9d");
}
TEST(SHA256Test, test9) {
    hash_sha256* hash = new hash_sha256("violones repellant goldenrod ceasefire polio svaraj expansibilities bosun feterita dogsbodies advisable tinstone gamma safrol radiochemical essentialist bawlers outmastering sunshades ritualisticallytartletpehsbriberiesreconqueredvideosaudiologycommercingcorruptionlavatoriesimposerturbochompsnonjoinderbouviercallipygouswampishingmistakesruchingsbiryanispentaploidforeclosescraggieroutrunnersdiademedsupertankerdimmedtaiglachcustomerthicklycaracolers");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "cd38d320e6f03f56849f14e9c8821587b5caccc2178c107e6f018ba92815e8d1");
}
TEST(SHA512Test, test9) {
    hash_sha512* hash = new hash_sha512("violones repellant goldenrod ceasefire polio svaraj expansibilities bosun feterita dogsbodies advisable tinstone gamma safrol radiochemical essentialist bawlers outmastering sunshades ritualisticallytartletpehsbriberiesreconqueredvideosaudiologycommercingcorruptionlavatoriesimposerturbochompsnonjoinderbouviercallipygouswampishingmistakesruchingsbiryanispentaploidforeclosescraggieroutrunnersdiademedsupertankerdimmedtaiglachcustomerthicklycaracolers");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "6a66e4644c425b27b686e803723db885bb542482c02a266314f34ccf18a8e8246e0a83d0e2172c378cdecd60f9e2d696fc9c7b4e7541dea2432c19e0b4f88a88");
}
TEST(MD5Test, test10) {
    hash_md5* hash = new hash_md5("adopter sandalwoods toccate affronted blastula teethes cystotomy lingerers relacquered hammerless circumspection pawky podding step puds callboard signposts sabotage privileges dechlorinatedvulgariseswinepresspurloinyapoksdenitrifytoleratespratspsychosexualrewetbytemoonwalkeddumpsarrestorbravadoesrevelledrashesdubonnetsglimpsinginsetspearsstrobilspresweetensminidiscsfrankablelamellapostformingwhoopersjuggledemanateexpendables");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "21504cbedecea782b29e2704319ced62");
}
TEST(SHA256Test, test10) {
    hash_sha256* hash = new hash_sha256("adopter sandalwoods toccate affronted blastula teethes cystotomy lingerers relacquered hammerless circumspection pawky podding step puds callboard signposts sabotage privileges dechlorinatedvulgariseswinepresspurloinyapoksdenitrifytoleratespratspsychosexualrewetbytemoonwalkeddumpsarrestorbravadoesrevelledrashesdubonnetsglimpsinginsetspearsstrobilspresweetensminidiscsfrankablelamellapostformingwhoopersjuggledemanateexpendables");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "fe48911f66b7da188c5d706bc9b38916aea7c160f542231d5c8afe6616b37753");
}
TEST(SHA512Test, test10) {
    hash_sha512* hash = new hash_sha512("adopter sandalwoods toccate affronted blastula teethes cystotomy lingerers relacquered hammerless circumspection pawky podding step puds callboard signposts sabotage privileges dechlorinatedvulgariseswinepresspurloinyapoksdenitrifytoleratespratspsychosexualrewetbytemoonwalkeddumpsarrestorbravadoesrevelledrashesdubonnetsglimpsinginsetspearsstrobilspresweetensminidiscsfrankablelamellapostformingwhoopersjuggledemanateexpendables");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "b521edca71bb0b47217dd0953214fe76a237830bd1a99eec6a520c820a8f56f05f89b80f3422e1ceeefbe537e9f8aebe5f7d1c67ec206e5f37d8e9ee2c268f03");
}
TEST(MD5Test, test12) {
    hash_md5* hash = new hash_md5("dialectician petrifactions wobblies yowled picrotoxin killock underpayments wiseasses traditionary ferrocyanide happiness compassionless civic decerebrated alloplasm recaps trothplight prothrombins extemporarily nondeceptiveplexiformhellionsflimflammersadvisorargentalroodfrivolousnessadenitisluncherbackhoeinglycopenehomiestreplowssupereminenttrapdoorjazzboswifeliestremandedaventailsracializedwattagesmustinessesdidacticbacksawsbechanceneoclassicistsvoiderslettererswhittlingslithosols");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "26ea597558846f9cc5c31e52ec42aa4d");
}
TEST(SHA256Test, test12) {
    hash_sha256* hash = new hash_sha256("dialectician petrifactions wobblies yowled picrotoxin killock underpayments wiseasses traditionary ferrocyanide happiness compassionless civic decerebrated alloplasm recaps trothplight prothrombins extemporarily nondeceptiveplexiformhellionsflimflammersadvisorargentalroodfrivolousnessadenitisluncherbackhoeinglycopenehomiestreplowssupereminenttrapdoorjazzboswifeliestremandedaventailsracializedwattagesmustinessesdidacticbacksawsbechanceneoclassicistsvoiderslettererswhittlingslithosols");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "0cba3fd9add1a5218482e2a7dbd2e9281e514356c2ed9527324927b1543c4681");
}
TEST(SHA512Test, test12) {
    hash_sha512* hash = new hash_sha512("dialectician petrifactions wobblies yowled picrotoxin killock underpayments wiseasses traditionary ferrocyanide happiness compassionless civic decerebrated alloplasm recaps trothplight prothrombins extemporarily nondeceptiveplexiformhellionsflimflammersadvisorargentalroodfrivolousnessadenitisluncherbackhoeinglycopenehomiestreplowssupereminenttrapdoorjazzboswifeliestremandedaventailsracializedwattagesmustinessesdidacticbacksawsbechanceneoclassicistsvoiderslettererswhittlingslithosols");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "64380bfb066edc63650f25ebf231e08c0e8967e46c1fe0a2ab2c470602fc769905d5d21bbe6f6f484961e4a0332f4ee13f69f84a016772762bbc933b5b266855");
}
TEST(MD5Test, test13) {
    hash_md5* hash = new hash_md5("thrombosed acupressure lentic oversimply repatterned tombstones betted stenotypist zoochore notifying underreact complaining wallow antinationalist halids poeticalnesses wedels kaffeeklatsch copying technologicalmonotypesrudderdeterminerretaggingrecoalsubdepartmentindustrialismrepleviedverbalistschnozzmachetesepidendrumsrivalriescontrabassoonsmokingendoscopesbipartisanismsflintlockelaboratelyreenrolledoveremphasizeurbanersubarcticsfantomplunderedcounterstainingseverallylipreadersobligatocapsicums");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "d94a8631465263a9d55b72eaa131d12a");
}
TEST(SHA256Test, test13) {
    hash_sha256* hash = new hash_sha256("thrombosed acupressure lentic oversimply repatterned tombstones betted stenotypist zoochore notifying underreact complaining wallow antinationalist halids poeticalnesses wedels kaffeeklatsch copying technologicalmonotypesrudderdeterminerretaggingrecoalsubdepartmentindustrialismrepleviedverbalistschnozzmachetesepidendrumsrivalriescontrabassoonsmokingendoscopesbipartisanismsflintlockelaboratelyreenrolledoveremphasizeurbanersubarcticsfantomplunderedcounterstainingseverallylipreadersobligatocapsicums");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "a67bf0a023e29666fc1738292b3e16097b28403ca109083e70ad04de1d4153fd");
}
TEST(SHA512Test, test13) {
    hash_sha512* hash = new hash_sha512("thrombosed acupressure lentic oversimply repatterned tombstones betted stenotypist zoochore notifying underreact complaining wallow antinationalist halids poeticalnesses wedels kaffeeklatsch copying technologicalmonotypesrudderdeterminerretaggingrecoalsubdepartmentindustrialismrepleviedverbalistschnozzmachetesepidendrumsrivalriescontrabassoonsmokingendoscopesbipartisanismsflintlockelaboratelyreenrolledoveremphasizeurbanersubarcticsfantomplunderedcounterstainingseverallylipreadersobligatocapsicums");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "889f142519c59baf6bbbd50766cf36e8be1261230bdce9a835d9569cd11ab53f951aaff6f9c93a533569db75b159865bd1f34367f22de614bfb0ee7079de4cf8");
}
TEST(MD5Test, test14) {
    hash_md5* hash = new hash_md5("agentive guided finances bimetallists oversave clours gripman knawes takings natrons friskily refashions franking nonverbally calories haplopia acquittals childishnesses irked avowabledetonationsinterpolatorswoksscaphoidjargonymouchescarbazolesnostalgicslaverbloodstainedterminationcrustalsimoniesyeukinggassescoadunateflotillagridlocksgratulationcharacteringdevestedtilapianutritionallyelicitationscourgedoviferouspolyaminesdeputationsstagehandsaneurism");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "6fcbaa0813440a2be839512fbd022ffa");
}
TEST(SHA256Test, test14) {
    hash_sha256* hash = new hash_sha256("agentive guided finances bimetallists oversave clours gripman knawes takings natrons friskily refashions franking nonverbally calories haplopia acquittals childishnesses irked avowabledetonationsinterpolatorswoksscaphoidjargonymouchescarbazolesnostalgicslaverbloodstainedterminationcrustalsimoniesyeukinggassescoadunateflotillagridlocksgratulationcharacteringdevestedtilapianutritionallyelicitationscourgedoviferouspolyaminesdeputationsstagehandsaneurism");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "f17f8f7ef991a4c04fe1324515a3323d993191457af7847971549b3a1e2bcafe");
}
TEST(SHA512Test, test14) {
    hash_sha512* hash = new hash_sha512("agentive guided finances bimetallists oversave clours gripman knawes takings natrons friskily refashions franking nonverbally calories haplopia acquittals childishnesses irked avowabledetonationsinterpolatorswoksscaphoidjargonymouchescarbazolesnostalgicslaverbloodstainedterminationcrustalsimoniesyeukinggassescoadunateflotillagridlocksgratulationcharacteringdevestedtilapianutritionallyelicitationscourgedoviferouspolyaminesdeputationsstagehandsaneurism");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "2449d03fb66ebe58a5cecab1f3d5fa389ea90bcdb73bc460846bec9c34ec47fa21896caf5c323ac94a8239a7bbab24615576343242592f09a0f80ec35dffc338");
}
TEST(MD5Test, test16) {
    hash_md5* hash = new hash_md5("cycadeoid pilferage wavelengths creasier suns blastemic hearsing mucins hagdons outpreach copurifying studdings subunits wickedness dissociation myoid bhut decametric prophasic thermosprepillcystoceleplanationorthodoxesrecrudescentliquidizingunyieldinglypawkiestarraignsputridityanathemalogiareproduciblythruputrenigsseededexpendsinsociablydeodorizingblackdampphoniestuncladnettshenpeckedohmmetercarnieshaulingsprynessessolacinglibers");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "9527ae33dd8849e14083a4ee6a28d0be");
}
TEST(SHA256Test, test16) {
    hash_sha256* hash = new hash_sha256("cycadeoid pilferage wavelengths creasier suns blastemic hearsing mucins hagdons outpreach copurifying studdings subunits wickedness dissociation myoid bhut decametric prophasic thermosprepillcystoceleplanationorthodoxesrecrudescentliquidizingunyieldinglypawkiestarraignsputridityanathemalogiareproduciblythruputrenigsseededexpendsinsociablydeodorizingblackdampphoniestuncladnettshenpeckedohmmetercarnieshaulingsprynessessolacinglibers");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "36a81e841ab62ebf842d929464a9cc7df741b3da33f280f47aa76a746f60c415");
}
TEST(SHA512Test, test16) {
    hash_sha512* hash = new hash_sha512("cycadeoid pilferage wavelengths creasier suns blastemic hearsing mucins hagdons outpreach copurifying studdings subunits wickedness dissociation myoid bhut decametric prophasic thermosprepillcystoceleplanationorthodoxesrecrudescentliquidizingunyieldinglypawkiestarraignsputridityanathemalogiareproduciblythruputrenigsseededexpendsinsociablydeodorizingblackdampphoniestuncladnettshenpeckedohmmetercarnieshaulingsprynessessolacinglibers");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "1e7ccdd2d5c3d9fa5b93cbc267de391a6aed8fea272b029d114bdaa097826052388ff1870679be3afecbcf3cd6352b3621a04aa14d60e58a41bd5fc0491732ba");
}
TEST(MD5Test, test17) {
    hash_md5* hash = new hash_md5("saluting papyrian accessibility thermion spleenful drudgery collenchymatous vilipended lures gudgeoning trampolines craving overservice granophyres vasopressins discreet tutee crepy parbuckled flagellumsusualnesscatalyzedphylogenynonnegativedeoxygenationsovoloscallawagssupernovasnewlymajoritarianismhydrocephalusmispackagestrengthsaccountantcarcassessniggledagismslacrossespalmistriesstrakedexchangeabilityhomespunsimpenetrableisinglassjackhammeredrespadescatwalksscaphopodsenslavedbibbers");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "22391abad77ea136c9a3267d2da022d3");
}
TEST(SHA256Test, test17) {
    hash_sha256* hash = new hash_sha256("saluting papyrian accessibility thermion spleenful drudgery collenchymatous vilipended lures gudgeoning trampolines craving overservice granophyres vasopressins discreet tutee crepy parbuckled flagellumsusualnesscatalyzedphylogenynonnegativedeoxygenationsovoloscallawagssupernovasnewlymajoritarianismhydrocephalusmispackagestrengthsaccountantcarcassessniggledagismslacrossespalmistriesstrakedexchangeabilityhomespunsimpenetrableisinglassjackhammeredrespadescatwalksscaphopodsenslavedbibbers");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "fff6816c7a6ff2716ea5a53f4556611634ae551f9d14203add664cf2ed402d52");
}
TEST(SHA512Test, test17) {
    hash_sha512* hash = new hash_sha512("saluting papyrian accessibility thermion spleenful drudgery collenchymatous vilipended lures gudgeoning trampolines craving overservice granophyres vasopressins discreet tutee crepy parbuckled flagellumsusualnesscatalyzedphylogenynonnegativedeoxygenationsovoloscallawagssupernovasnewlymajoritarianismhydrocephalusmispackagestrengthsaccountantcarcassessniggledagismslacrossespalmistriesstrakedexchangeabilityhomespunsimpenetrableisinglassjackhammeredrespadescatwalksscaphopodsenslavedbibbers");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "f0e387556b194164faac6bf6052d9cfd9f7fd3a09b3a0f20bc0f9e31532b0619a8c9ae53c71af39980a9f9cb819bb99fe517412ed63fe39b5899c3c43b041a2f");
}
TEST(MD5Test, test18) {
    hash_md5* hash = new hash_md5("snaglike enviro hoorays vulnerabilities airmen exostoses intermingling injuring fructifying nonconnections apatosaur infante fluked starkly troll hyperspaces aspersive insolubilized unsymmetrical idioblastvitamineconjugantcarpophoresantidogmaticremovabilityalterersbunkmateannoyspollardingpelletizationsdisapprovalclowneriesprelusivedeductibilitynonartsplutoniumflorinsuffixationchieldsaerosolizationdumbfounderingcourtliermarchesasteeplechaseretherealizeprothallisynecdochicallyunchilledvegetatedcutleries");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "7edff414a46e2006dc7aaabdb2273364");
}
TEST(SHA256Test, test18) {
    hash_sha256* hash = new hash_sha256("snaglike enviro hoorays vulnerabilities airmen exostoses intermingling injuring fructifying nonconnections apatosaur infante fluked starkly troll hyperspaces aspersive insolubilized unsymmetrical idioblastvitamineconjugantcarpophoresantidogmaticremovabilityalterersbunkmateannoyspollardingpelletizationsdisapprovalclowneriesprelusivedeductibilitynonartsplutoniumflorinsuffixationchieldsaerosolizationdumbfounderingcourtliermarchesasteeplechaseretherealizeprothallisynecdochicallyunchilledvegetatedcutleries");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "7f35e075a43e99a95586ee404e98d47d1bd32d1236c496be94b8e2bb932b0d7b");
}
TEST(SHA512Test, test18) {
    hash_sha512* hash = new hash_sha512("snaglike enviro hoorays vulnerabilities airmen exostoses intermingling injuring fructifying nonconnections apatosaur infante fluked starkly troll hyperspaces aspersive insolubilized unsymmetrical idioblastvitamineconjugantcarpophoresantidogmaticremovabilityalterersbunkmateannoyspollardingpelletizationsdisapprovalclowneriesprelusivedeductibilitynonartsplutoniumflorinsuffixationchieldsaerosolizationdumbfounderingcourtliermarchesasteeplechaseretherealizeprothallisynecdochicallyunchilledvegetatedcutleries");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "482a2252a585e23f35df6f49f2b5050a4571e07fa7a50818c19552c73b9b77cce8d774a7482f4d8ae41bd5baa888239537510bb2788160f14ce1ec8fae6a1bfb");
}
TEST(MD5Test, test20) {
    hash_md5* hash = new hash_md5("gestical muttons elucidates variegator uncivilized masques umbras confessors habitation flashboards ragtop supercute candidness sentients indiction onlooker paradiddle plugged mistrysts redialingopprobriouscrystalizesphotoresistdishpansethnobotaniesperipetiaprocarbazineboundeninadequatenessexpellersemestralbibberaugmentationenlargeabusersfalsitiesprecariousnessdetractioncollembolanregistersnotarizationsphototoxiclacteanconodonttechyalarumingdefundsletterformbipacksspecula");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "b31d3bb2db74991285140183befd2354");
}
TEST(SHA256Test, test20) {
    hash_sha256* hash = new hash_sha256("gestical muttons elucidates variegator uncivilized masques umbras confessors habitation flashboards ragtop supercute candidness sentients indiction onlooker paradiddle plugged mistrysts redialingopprobriouscrystalizesphotoresistdishpansethnobotaniesperipetiaprocarbazineboundeninadequatenessexpellersemestralbibberaugmentationenlargeabusersfalsitiesprecariousnessdetractioncollembolanregistersnotarizationsphototoxiclacteanconodonttechyalarumingdefundsletterformbipacksspecula");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "0e72ddea3693d0734e770105e9d4d8c9b04e08536f85d396c734239dbc32e1fb");
}
TEST(SHA512Test, test20) {
    hash_sha512* hash = new hash_sha512("gestical muttons elucidates variegator uncivilized masques umbras confessors habitation flashboards ragtop supercute candidness sentients indiction onlooker paradiddle plugged mistrysts redialingopprobriouscrystalizesphotoresistdishpansethnobotaniesperipetiaprocarbazineboundeninadequatenessexpellersemestralbibberaugmentationenlargeabusersfalsitiesprecariousnessdetractioncollembolanregistersnotarizationsphototoxiclacteanconodonttechyalarumingdefundsletterformbipacksspecula");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "7d2bf1973788ef9a75eda2d0741e387635155871c5d140bf05df6c980dcfce653fadc66d20e3edc68ea84c48aec6a0b5748e68933afd04f56a50507444c558fb");
}
TEST(MD5Test, test21) {
    hash_md5* hash = new hash_md5("gooney ruffing nonintuitive piscatorial autography reeducative foresting premedical worsted linealities afars fusibilities unfavorite meridional seminarians rivetted nonsystems micromere capsomere tristezaworkermeaslescriersgrossedrestorestightvuggierthrummyrelivescollegiallytilapiashesperidiablithelytrifoliumstonelessnesseshousingsepigrammatistacknowledgesnonmalleablemorphometriescaromirrepealabilitymagisterdawngroundbreakinginfestedencrustspointesloadingsretral");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "683ee944afcbb4938cdf0d52fcd0202b");
}
TEST(SHA256Test, test21) {
    hash_sha256* hash = new hash_sha256("gooney ruffing nonintuitive piscatorial autography reeducative foresting premedical worsted linealities afars fusibilities unfavorite meridional seminarians rivetted nonsystems micromere capsomere tristezaworkermeaslescriersgrossedrestorestightvuggierthrummyrelivescollegiallytilapiashesperidiablithelytrifoliumstonelessnesseshousingsepigrammatistacknowledgesnonmalleablemorphometriescaromirrepealabilitymagisterdawngroundbreakinginfestedencrustspointesloadingsretral");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "5518a633c305115839ea0de4d67106f635bc4687a22e9848638b199553092aef");
}
TEST(SHA512Test, test21) {
    hash_sha512* hash = new hash_sha512("gooney ruffing nonintuitive piscatorial autography reeducative foresting premedical worsted linealities afars fusibilities unfavorite meridional seminarians rivetted nonsystems micromere capsomere tristezaworkermeaslescriersgrossedrestorestightvuggierthrummyrelivescollegiallytilapiashesperidiablithelytrifoliumstonelessnesseshousingsepigrammatistacknowledgesnonmalleablemorphometriescaromirrepealabilitymagisterdawngroundbreakinginfestedencrustspointesloadingsretral");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "d558fab044c869fec2a94e129f2e7a38168712823ba79cee10c9e301d0edd5b5ebfb3ef993ec83b3f37331bc6821860d57e470aa207e2ab11639adc3a6b13c71");
}
TEST(MD5Test, test22) {
    hash_md5* hash = new hash_md5("blackgums outyelling epochally drooped shelves clatteringly esophagi columellar reverence shorings majoritarianism wrenchers prussianizing perturbed outflowed hydros outcrowing nicotianas expert manselaterizedcurveballspeculationscaseicyillcottagersjackdawsmonomersrugsneedlersdegradesegesteddamaskshodgepodgesraspingfalsestdecedentgoriestbootlessnesssimplicityaquatintersgingeryputlogozokeritesspacedgutsyfarsightedstrategicoutstrippingblissfulness");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "0154e36ac76a81f90f72ab3514352824");
}
TEST(SHA256Test, test22) {
    hash_sha256* hash = new hash_sha256("blackgums outyelling epochally drooped shelves clatteringly esophagi columellar reverence shorings majoritarianism wrenchers prussianizing perturbed outflowed hydros outcrowing nicotianas expert manselaterizedcurveballspeculationscaseicyillcottagersjackdawsmonomersrugsneedlersdegradesegesteddamaskshodgepodgesraspingfalsestdecedentgoriestbootlessnesssimplicityaquatintersgingeryputlogozokeritesspacedgutsyfarsightedstrategicoutstrippingblissfulness");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "ebcf35a1ee06351545926b44ddfd3431cf7e394f5ea25c3379ded96134583b4b");
}
TEST(SHA512Test, test22) {
    hash_sha512* hash = new hash_sha512("blackgums outyelling epochally drooped shelves clatteringly esophagi columellar reverence shorings majoritarianism wrenchers prussianizing perturbed outflowed hydros outcrowing nicotianas expert manselaterizedcurveballspeculationscaseicyillcottagersjackdawsmonomersrugsneedlersdegradesegesteddamaskshodgepodgesraspingfalsestdecedentgoriestbootlessnesssimplicityaquatintersgingeryputlogozokeritesspacedgutsyfarsightedstrategicoutstrippingblissfulness");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "1d0d74e1769d60d388537ab95cf230cc2c9944862c8782cd08c0c45749ed2dfe15b02dfc26d153a4637be7803e7d13d25263598a958f811a857438da8132fe8a");
}
TEST(MD5Test, test24) {
    hash_md5* hash = new hash_md5("peregrinated mistrysted ungenteel instrumentation autogeny corruptor valgus contumely poundal flannels niellists latifundia interdicting escutcheons fon fellmongers potboiled swashbuckling digastric cosmologistspiedmontsstrugglersantimetabolicalgebraicpesterscaboodlecondyleinterviewerinveteratelywinglesscursorilylithenessespugnaciousnessopalescedrigoristicinhibinsrewordlirothsuperviriledecoctwomaniseencephalographyclassoncryoscopetalmudismsgladshueculpritsbotelsformability");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "a882cb5266b43292ff8920771106bd2a");
}
TEST(SHA256Test, test24) {
    hash_sha256* hash = new hash_sha256("peregrinated mistrysted ungenteel instrumentation autogeny corruptor valgus contumely poundal flannels niellists latifundia interdicting escutcheons fon fellmongers potboiled swashbuckling digastric cosmologistspiedmontsstrugglersantimetabolicalgebraicpesterscaboodlecondyleinterviewerinveteratelywinglesscursorilylithenessespugnaciousnessopalescedrigoristicinhibinsrewordlirothsuperviriledecoctwomaniseencephalographyclassoncryoscopetalmudismsgladshueculpritsbotelsformability");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "4687559c2ca6029c85933eb7e1f6398d25c48cf1ac8f26917aae88e71abf0fea");
}
TEST(SHA512Test, test24) {
    hash_sha512* hash = new hash_sha512("peregrinated mistrysted ungenteel instrumentation autogeny corruptor valgus contumely poundal flannels niellists latifundia interdicting escutcheons fon fellmongers potboiled swashbuckling digastric cosmologistspiedmontsstrugglersantimetabolicalgebraicpesterscaboodlecondyleinterviewerinveteratelywinglesscursorilylithenessespugnaciousnessopalescedrigoristicinhibinsrewordlirothsuperviriledecoctwomaniseencephalographyclassoncryoscopetalmudismsgladshueculpritsbotelsformability");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "1d1a5e80d18b4376558902c0f1b2ed05abb0e591a2a06fc6e763e5e0573f6ef9fa3bb59f3ee30ec4ae4e18ad40d106f339f27d87dd5e9176f65e5121baa9c22c");
}
TEST(MD5Test, test25) {
    hash_md5* hash = new hash_md5("emanating supersalesman sexiness tourniquets terrestrial aggrandised cosher camasses tangents ex sharker biolytic guyots berthed allurer mistracing rarifies woodiest delinquent unicyclistlabyrinthodontbiomedicinereglossingscrawniestunplaitedgirandolesfalsefacesautoeroticrefcompressivelynonnasalgogletscarefulroomedgalingaleswrinklesspleenfulcurelessheydaysvinculumsovietismsvirosesjugularcommutatebruthortativeankeritesaridnesssubacuteprivatives");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "c53caf4deae253574a74fdacba5a5847");
}
TEST(SHA256Test, test25) {
    hash_sha256* hash = new hash_sha256("emanating supersalesman sexiness tourniquets terrestrial aggrandised cosher camasses tangents ex sharker biolytic guyots berthed allurer mistracing rarifies woodiest delinquent unicyclistlabyrinthodontbiomedicinereglossingscrawniestunplaitedgirandolesfalsefacesautoeroticrefcompressivelynonnasalgogletscarefulroomedgalingaleswrinklesspleenfulcurelessheydaysvinculumsovietismsvirosesjugularcommutatebruthortativeankeritesaridnesssubacuteprivatives");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "54669a953a9fc7a82dc0982579328e27f9658a9db7265bcaad3afadc75a4e93d");
}
TEST(SHA512Test, test25) {
    hash_sha512* hash = new hash_sha512("emanating supersalesman sexiness tourniquets terrestrial aggrandised cosher camasses tangents ex sharker biolytic guyots berthed allurer mistracing rarifies woodiest delinquent unicyclistlabyrinthodontbiomedicinereglossingscrawniestunplaitedgirandolesfalsefacesautoeroticrefcompressivelynonnasalgogletscarefulroomedgalingaleswrinklesspleenfulcurelessheydaysvinculumsovietismsvirosesjugularcommutatebruthortativeankeritesaridnesssubacuteprivatives");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "da96f3dc77802f23edb41affda8de1f10ed1ead32b4115ee6c04ea81bfb1e7b31491cbc9bae19102dbb75a9490311565c232bd865f5bff7459185d3b915739b1");
}
TEST(MD5Test, test26) {
    hash_md5* hash = new hash_md5("teethe blotter suberised manumitting hips digitizes antevert claudication cancha moderns degeneracies finfoots encyclopedic bushmen figurable overboard piratical tankage reproachingly auntsstoopballunderinflationpromotedsubtestsalutarilybechalkingpemmicanangiospermousprocessingpetrologistsjollinesstomahawkkahunasfastenerslenderizedcoroneldestructionantipleasureprosperitypremeditatesethicalscinchonismsfixbolloxingphilosopheweightingrecitationsimpatiencegeneralissimoestrangements");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "19d8de59c16150774a1da9db102e1a6f");
}
TEST(SHA256Test, test26) {
    hash_sha256* hash = new hash_sha256("teethe blotter suberised manumitting hips digitizes antevert claudication cancha moderns degeneracies finfoots encyclopedic bushmen figurable overboard piratical tankage reproachingly auntsstoopballunderinflationpromotedsubtestsalutarilybechalkingpemmicanangiospermousprocessingpetrologistsjollinesstomahawkkahunasfastenerslenderizedcoroneldestructionantipleasureprosperitypremeditatesethicalscinchonismsfixbolloxingphilosopheweightingrecitationsimpatiencegeneralissimoestrangements");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "880b4898a31093759a50a6ca584716c553b1d565e9394649944e5b4f9a59b69d");
}
TEST(SHA512Test, test26) {
    hash_sha512* hash = new hash_sha512("teethe blotter suberised manumitting hips digitizes antevert claudication cancha moderns degeneracies finfoots encyclopedic bushmen figurable overboard piratical tankage reproachingly auntsstoopballunderinflationpromotedsubtestsalutarilybechalkingpemmicanangiospermousprocessingpetrologistsjollinesstomahawkkahunasfastenerslenderizedcoroneldestructionantipleasureprosperitypremeditatesethicalscinchonismsfixbolloxingphilosopheweightingrecitationsimpatiencegeneralissimoestrangements");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "9b5fba3ca818a4746d80f1266399e7928d818c9fe6945d44bc8e9c160be4ce264b1f5c216c22a74cc81e6de0533e7af3cd0db6ea602a2797842ce22cdb200402");
}
TEST(MD5Test, test28) {
    hash_md5* hash = new hash_md5("reliquiae alley agers appellor pistons javelined ultraviolet seigneuries hairdressings tablespoons functionalists grovelling mammalian hooligan hoer bioremediation erotizes skyphoi overholds oversuppingmyofibrilsdiastemupsweptrebuildsmislayerorphansimportablesongbooksterrapinspresciencesagonizesovercoachcelibacyperiodicalroughneckedfeltlikecaretooksubcontractswontinghairlinesnoncharacterallegorizationschampswesteringscannersbrogansulkerhammadabowdlerisedprofanely");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "1ceb30e13f53b1faa49cbe0ede00ee7f");
}
TEST(SHA256Test, test28) {
    hash_sha256* hash = new hash_sha256("reliquiae alley agers appellor pistons javelined ultraviolet seigneuries hairdressings tablespoons functionalists grovelling mammalian hooligan hoer bioremediation erotizes skyphoi overholds oversuppingmyofibrilsdiastemupsweptrebuildsmislayerorphansimportablesongbooksterrapinspresciencesagonizesovercoachcelibacyperiodicalroughneckedfeltlikecaretooksubcontractswontinghairlinesnoncharacterallegorizationschampswesteringscannersbrogansulkerhammadabowdlerisedprofanely");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "04eb1ca2be4cd737b8fbc0923186ecb491c6c3a40501c124299e89452525fb33");
}
TEST(SHA512Test, test28) {
    hash_sha512* hash = new hash_sha512("reliquiae alley agers appellor pistons javelined ultraviolet seigneuries hairdressings tablespoons functionalists grovelling mammalian hooligan hoer bioremediation erotizes skyphoi overholds oversuppingmyofibrilsdiastemupsweptrebuildsmislayerorphansimportablesongbooksterrapinspresciencesagonizesovercoachcelibacyperiodicalroughneckedfeltlikecaretooksubcontractswontinghairlinesnoncharacterallegorizationschampswesteringscannersbrogansulkerhammadabowdlerisedprofanely");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "3fd2be8f05d23124815ca6ccc0bad6412478c76ce03e5ee160d120ecb03f46bcff756073f2205b8fc36b96a13b37ad5b9f87edfd97a13a88511ec9c79250a5a7");
}
TEST(MD5Test, test29) {
    hash_md5* hash = new hash_md5("wallow telemetries trailerite checkmarked resolvers placemen larch evacuator tritones taborine polarographies labiality bourgeons debonaire sellotapes rummages ridgetop browsing riming nontheistcorrespondencelynceaniratestspeechestithoniasjiviercrakedecasyllablesamountingbarrelheadssuperettesarmetsslightestdogsbodiesohmmeterletupsbrickworkarmonicasdroppermitteedefinitionalunbufferedprotisticpiscoslaboritesplagiarisescrumpedconfirmednessguidersdrafted");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "6fbc00ec0de714e35404b4bbd2d4b22a");
}
TEST(SHA256Test, test29) {
    hash_sha256* hash = new hash_sha256("wallow telemetries trailerite checkmarked resolvers placemen larch evacuator tritones taborine polarographies labiality bourgeons debonaire sellotapes rummages ridgetop browsing riming nontheistcorrespondencelynceaniratestspeechestithoniasjiviercrakedecasyllablesamountingbarrelheadssuperettesarmetsslightestdogsbodiesohmmeterletupsbrickworkarmonicasdroppermitteedefinitionalunbufferedprotisticpiscoslaboritesplagiarisescrumpedconfirmednessguidersdrafted");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "c91692a63cea7fec1448d6a4a87b0afd1f0d9b937c6801edd45821de2c9c1547");
}
TEST(SHA512Test, test29) {
    hash_sha512* hash = new hash_sha512("wallow telemetries trailerite checkmarked resolvers placemen larch evacuator tritones taborine polarographies labiality bourgeons debonaire sellotapes rummages ridgetop browsing riming nontheistcorrespondencelynceaniratestspeechestithoniasjiviercrakedecasyllablesamountingbarrelheadssuperettesarmetsslightestdogsbodiesohmmeterletupsbrickworkarmonicasdroppermitteedefinitionalunbufferedprotisticpiscoslaboritesplagiarisescrumpedconfirmednessguidersdrafted");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "18cd745aa0c46a4176478e44d4b6eaaec5af3512458e4107006c3334ebfb0c3f41779564b72e712f9e40155373fa14de84a31222398a73b4782b96ad4014b459");
}
TEST(MD5Test, test30) {
    hash_md5* hash = new hash_md5("dentalium superovulating portably parasitoses unbans gats sans sombreros flag ducts resumes indexable polyester dross mouthfeel ennobled mirandizing uncashed syenites decasyllablearchdukedomdisseiseeslysogeniespukkateemerweirdonetiquettesibilateconvicttanglierbefoolingclaustrophobiadiscountenancesautarkisttubaistscellphonesquadroncrimpiestpermeasesdiphtheroidsultrarichruefungitimeservingsforbarebirettaswhereuntocrunchedpermanentnessesoutbulking");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "fe8527ab7fe90ce75d70997556bdfec7");
}
TEST(SHA256Test, test30) {
    hash_sha256* hash = new hash_sha256("dentalium superovulating portably parasitoses unbans gats sans sombreros flag ducts resumes indexable polyester dross mouthfeel ennobled mirandizing uncashed syenites decasyllablearchdukedomdisseiseeslysogeniespukkateemerweirdonetiquettesibilateconvicttanglierbefoolingclaustrophobiadiscountenancesautarkisttubaistscellphonesquadroncrimpiestpermeasesdiphtheroidsultrarichruefungitimeservingsforbarebirettaswhereuntocrunchedpermanentnessesoutbulking");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "fb79e707d4d640862a22f5ad19762b6c64ebcf008f0ab34a2b63bf8507f436ac");
}
TEST(SHA512Test, test30) {
    hash_sha512* hash = new hash_sha512("dentalium superovulating portably parasitoses unbans gats sans sombreros flag ducts resumes indexable polyester dross mouthfeel ennobled mirandizing uncashed syenites decasyllablearchdukedomdisseiseeslysogeniespukkateemerweirdonetiquettesibilateconvicttanglierbefoolingclaustrophobiadiscountenancesautarkisttubaistscellphonesquadroncrimpiestpermeasesdiphtheroidsultrarichruefungitimeservingsforbarebirettaswhereuntocrunchedpermanentnessesoutbulking");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "82a86ed9ffcaa60f7eedcb92610fbc750d05f518e07c253ce54541bef678fc87e403bd1e7c21440adb2abf4cea3d89acfdb53b950bab42ce96b48ebeb2be10d7");
}
TEST(MD5Test, test32) {
    hash_md5* hash = new hash_md5("puggier castaway exercisers coloured bedizening sizier keystone plugola indecisively ebulliencies tranche choreographic galyac upshots mucilages habitation antipress nenes shanghais ambuscadesstarchesconchologistmisguidedmediatrixtricklesglissadernonplayershorrideaterydeflatingoverlappingcompactsdrivingspostmillennialoutlineslongclothhoosegowsqualificationsmetagenesischiaroscurosterrainxanthomadelectatedhemihedrallavayesternightsbioregionalismsapotheosizewallyunbiasedness");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "484f3236c1e243c79db6f597fd898ab9");
}
TEST(SHA256Test, test32) {
    hash_sha256* hash = new hash_sha256("puggier castaway exercisers coloured bedizening sizier keystone plugola indecisively ebulliencies tranche choreographic galyac upshots mucilages habitation antipress nenes shanghais ambuscadesstarchesconchologistmisguidedmediatrixtricklesglissadernonplayershorrideaterydeflatingoverlappingcompactsdrivingspostmillennialoutlineslongclothhoosegowsqualificationsmetagenesischiaroscurosterrainxanthomadelectatedhemihedrallavayesternightsbioregionalismsapotheosizewallyunbiasedness");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "49233361eb5c964bd35195d97c8519c5c637bf48446bb9f1cfaa03ac727d2f21");
}
TEST(SHA512Test, test32) {
    hash_sha512* hash = new hash_sha512("puggier castaway exercisers coloured bedizening sizier keystone plugola indecisively ebulliencies tranche choreographic galyac upshots mucilages habitation antipress nenes shanghais ambuscadesstarchesconchologistmisguidedmediatrixtricklesglissadernonplayershorrideaterydeflatingoverlappingcompactsdrivingspostmillennialoutlineslongclothhoosegowsqualificationsmetagenesischiaroscurosterrainxanthomadelectatedhemihedrallavayesternightsbioregionalismsapotheosizewallyunbiasedness");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "82f2fb0b3e21ebd1ec20a882e5329b3ba765832416fdde4ae2d6adb16e7b419135c0439016244007ecf10ce90907990e0fa465468bc35a10c0397ad5788960f4");
}
TEST(MD5Test, test33) {
    hash_md5* hash = new hash_md5("freewrite freewheeling koppie expletives trots silkies obligate chlamydiae flock housecarl partridgeberry entireties honeyful crosstrees papillomata guitarist photosynthesis regrate automats hatshammersshowringgenipsstroboscopescillasallegiantsdewdropruminatedcarapacedballonnedeafenedseriatesintimaspremaxillaryretrackleverpolypoverswungseveralsvesturedregalbehoofcratchesexhalessynovitisesparolingartistthermwarningpowderless");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "4247f0dc77555b41da81a616be218740");
}
TEST(SHA256Test, test33) {
    hash_sha256* hash = new hash_sha256("freewrite freewheeling koppie expletives trots silkies obligate chlamydiae flock housecarl partridgeberry entireties honeyful crosstrees papillomata guitarist photosynthesis regrate automats hatshammersshowringgenipsstroboscopescillasallegiantsdewdropruminatedcarapacedballonnedeafenedseriatesintimaspremaxillaryretrackleverpolypoverswungseveralsvesturedregalbehoofcratchesexhalessynovitisesparolingartistthermwarningpowderless");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "3f361a809fdf646660cae698a593016a12d38542a50ccf89fc7b29f6fb761aff");
}
TEST(SHA512Test, test33) {
    hash_sha512* hash = new hash_sha512("freewrite freewheeling koppie expletives trots silkies obligate chlamydiae flock housecarl partridgeberry entireties honeyful crosstrees papillomata guitarist photosynthesis regrate automats hatshammersshowringgenipsstroboscopescillasallegiantsdewdropruminatedcarapacedballonnedeafenedseriatesintimaspremaxillaryretrackleverpolypoverswungseveralsvesturedregalbehoofcratchesexhalessynovitisesparolingartistthermwarningpowderless");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "2f77b832b0b8f3396b903b0615dc6342e5c135ab614484aa08cd592e6d7bafa8e0f314d6b5ca3bc7008fd01ba51144c1e66ad06664ee31aacbed9e2f218d5941");
}
TEST(MD5Test, test34) {
    hash_md5* hash = new hash_md5("ravelly impeacher outtricking metacercarial gorgonians vorticists transliterate certainest uprears shooed wahoo nonretractile spring fantasie nontariff notchbacks sanitized cero resubjected cronyismssaunaedtoningstarvingcanalsquushedrennasesexterminatescascarassubgraphsapposingsisterlikabilitiesreverberantlypenicillatebarragenilghaisunbridgedtorsirebidsostracodcaloyersexterioriseunwrapradiopaquebranchlinebaldlyevaluationpenetratedquatrefoilgreengrocer");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "5af91c8e960117622edb6e22dfab606a");
}
TEST(SHA256Test, test34) {
    hash_sha256* hash = new hash_sha256("ravelly impeacher outtricking metacercarial gorgonians vorticists transliterate certainest uprears shooed wahoo nonretractile spring fantasie nontariff notchbacks sanitized cero resubjected cronyismssaunaedtoningstarvingcanalsquushedrennasesexterminatescascarassubgraphsapposingsisterlikabilitiesreverberantlypenicillatebarragenilghaisunbridgedtorsirebidsostracodcaloyersexterioriseunwrapradiopaquebranchlinebaldlyevaluationpenetratedquatrefoilgreengrocer");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "4d27afd6cc28c523f9d8c7103df0e5fa5ace6f8022239d60b534fc7e4dd3803c");
}
TEST(SHA512Test, test34) {
    hash_sha512* hash = new hash_sha512("ravelly impeacher outtricking metacercarial gorgonians vorticists transliterate certainest uprears shooed wahoo nonretractile spring fantasie nontariff notchbacks sanitized cero resubjected cronyismssaunaedtoningstarvingcanalsquushedrennasesexterminatescascarassubgraphsapposingsisterlikabilitiesreverberantlypenicillatebarragenilghaisunbridgedtorsirebidsostracodcaloyersexterioriseunwrapradiopaquebranchlinebaldlyevaluationpenetratedquatrefoilgreengrocer");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "7c21b1a1e4d6031d660a0d1bda70cf1ef64a286bad8db67bd4efc0349b825aa2f32b9d15ddd2fc707f60561a84b5b99d3a9be3c7ac9729631c3b28284ef88652");
}
TEST(MD5Test, test36) {
    hash_md5* hash = new hash_md5("analectic micrified hollo savaging bankrollers undrilled licensing petrographer intermont bedeck outrivaling reenact impugnable tyrannosaur haggler sterols paintbrush dandier into funnilylopedwhittledproteidesparvenuesroadblocklopsidedlyhearingsavalanchingfeveringirresistiblycytotoxinsitalianisingmortifierspatrilinealhomogenisationeunuchismtrigdelinquentuncontractedopsonifiescamelhairrefutablyferrellingunappetizingcantripdisbursementscurriernonvanishingshiftiestunbrakes");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "1a2ec6580e3ea605d81cb84859c4a1f3");
}
TEST(SHA256Test, test36) {
    hash_sha256* hash = new hash_sha256("analectic micrified hollo savaging bankrollers undrilled licensing petrographer intermont bedeck outrivaling reenact impugnable tyrannosaur haggler sterols paintbrush dandier into funnilylopedwhittledproteidesparvenuesroadblocklopsidedlyhearingsavalanchingfeveringirresistiblycytotoxinsitalianisingmortifierspatrilinealhomogenisationeunuchismtrigdelinquentuncontractedopsonifiescamelhairrefutablyferrellingunappetizingcantripdisbursementscurriernonvanishingshiftiestunbrakes");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "1a06e322490e24560f7b7028ed3e2367e5e66890a15de54e5c8f092359daabc9");
}
TEST(SHA512Test, test36) {
    hash_sha512* hash = new hash_sha512("analectic micrified hollo savaging bankrollers undrilled licensing petrographer intermont bedeck outrivaling reenact impugnable tyrannosaur haggler sterols paintbrush dandier into funnilylopedwhittledproteidesparvenuesroadblocklopsidedlyhearingsavalanchingfeveringirresistiblycytotoxinsitalianisingmortifierspatrilinealhomogenisationeunuchismtrigdelinquentuncontractedopsonifiescamelhairrefutablyferrellingunappetizingcantripdisbursementscurriernonvanishingshiftiestunbrakes");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "c1a521212d62a4a0e92b6ffd71c59071028f69ca2047b3bbc47727c4100c9743f5ff33b8f131e94f09046e05df9a3c80a607008573bcc7a065d5afdb6c09cf3e");
}
TEST(MD5Test, test37) {
    hash_md5* hash = new hash_md5("mustering recirculate footpad impecuniously joying fancifulness paler ptyalin stridulously manias airtight dastardly forereaching banksides ethnohistoric postharvest erosiveness bootlace resmelting formalizersimpetuousnessesbrucellaemicrowattsmaculedharvesttimeschlamydiaepyroxenesreclusionreimpositionsapproximatesoutbleatedcoplotpediatristsgarnishmentmatteredpourablehomophyliesjukeboxesrepigmentsbuzzwordsgangrenesswimmeretfeignedreinforceablecompilervendiblesgrimacersunbarberedsubprincipalviably");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "1a7d78b8b4b290deb1f4f5fc48e59edd");
}
TEST(SHA256Test, test37) {
    hash_sha256* hash = new hash_sha256("mustering recirculate footpad impecuniously joying fancifulness paler ptyalin stridulously manias airtight dastardly forereaching banksides ethnohistoric postharvest erosiveness bootlace resmelting formalizersimpetuousnessesbrucellaemicrowattsmaculedharvesttimeschlamydiaepyroxenesreclusionreimpositionsapproximatesoutbleatedcoplotpediatristsgarnishmentmatteredpourablehomophyliesjukeboxesrepigmentsbuzzwordsgangrenesswimmeretfeignedreinforceablecompilervendiblesgrimacersunbarberedsubprincipalviably");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "2e64fd79e4d1e8250eef900e4721afd454f3c442bb8c0195b5549a8a0928921b");
}
TEST(SHA512Test, test37) {
    hash_sha512* hash = new hash_sha512("mustering recirculate footpad impecuniously joying fancifulness paler ptyalin stridulously manias airtight dastardly forereaching banksides ethnohistoric postharvest erosiveness bootlace resmelting formalizersimpetuousnessesbrucellaemicrowattsmaculedharvesttimeschlamydiaepyroxenesreclusionreimpositionsapproximatesoutbleatedcoplotpediatristsgarnishmentmatteredpourablehomophyliesjukeboxesrepigmentsbuzzwordsgangrenesswimmeretfeignedreinforceablecompilervendiblesgrimacersunbarberedsubprincipalviably");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "afc1a069351ea122dd1efed3612066f43b5f905e705a8c289842ba734f525a4614bed144a2b3c77a1fa9b0c5aa8b9329677d0e5651886dfc87ed620bb51e16d6");
}
TEST(MD5Test, test38) {
    hash_md5* hash = new hash_md5("tribesmen prankishly heliconia cheth mutt philabeg paediatric blarneys curets evolutes belittlement found blossomed scourer amateurisms raucousness uppercasing monandries hobo overspeculatingcommencementmisaddingleeriestmetacercarialmisinterpretedhammingluxecantisotonedobrosboundaryplenarieskiwisdiscipleshiphepatomegaliesfowlerestrogensdeforcersunwashednesspetrifactionarchivethoughtlessnessseatroutscervelatswinnowaerogramfeignersleighobservedtechnocrats");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "0e3b1ecef4d43f9c44cac6f99afa6154");
}
TEST(SHA256Test, test38) {
    hash_sha256* hash = new hash_sha256("tribesmen prankishly heliconia cheth mutt philabeg paediatric blarneys curets evolutes belittlement found blossomed scourer amateurisms raucousness uppercasing monandries hobo overspeculatingcommencementmisaddingleeriestmetacercarialmisinterpretedhammingluxecantisotonedobrosboundaryplenarieskiwisdiscipleshiphepatomegaliesfowlerestrogensdeforcersunwashednesspetrifactionarchivethoughtlessnessseatroutscervelatswinnowaerogramfeignersleighobservedtechnocrats");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "ccdd7d727de0cb8ae3c14f05ad6a5d79530a5ae0e8e4e4d5a8bcb25c834fcc6d");
}
TEST(SHA512Test, test38) {
    hash_sha512* hash = new hash_sha512("tribesmen prankishly heliconia cheth mutt philabeg paediatric blarneys curets evolutes belittlement found blossomed scourer amateurisms raucousness uppercasing monandries hobo overspeculatingcommencementmisaddingleeriestmetacercarialmisinterpretedhammingluxecantisotonedobrosboundaryplenarieskiwisdiscipleshiphepatomegaliesfowlerestrogensdeforcersunwashednesspetrifactionarchivethoughtlessnessseatroutscervelatswinnowaerogramfeignersleighobservedtechnocrats");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "aaae69683133b2de5a79a8e22a43f663170185a46e162941ede822f6abba8fbe443e4076f6de34218fb3abbf6bd8e9d5e5bc2bcb734e1fcae971b33f6f0b35f1");
}
TEST(MD5Test, test40) {
    hash_md5* hash = new hash_md5("eyebolts sandbags lobefin intransigent curtesy chicanos lacquey nonrioting weedinesses congestions sprayers centavo chatting winesaps mesmerisms captans gitting tar divest hawfinchessummationthrowawayexperimentalwaxweedoutfeelinggrandamcodrivercloacaestilepantheisticfuturiststaffetassuspendersamositesuninstallinggradablehearthstonestiningpremoldinglamellicornsgravenessesharmfullyincapabilitiesprecociousnessquotablyrushlikecaulescoevolvesbeneficently");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "c564928c004c67df7b1eb2c4825a7629");
}
TEST(SHA256Test, test40) {
    hash_sha256* hash = new hash_sha256("eyebolts sandbags lobefin intransigent curtesy chicanos lacquey nonrioting weedinesses congestions sprayers centavo chatting winesaps mesmerisms captans gitting tar divest hawfinchessummationthrowawayexperimentalwaxweedoutfeelinggrandamcodrivercloacaestilepantheisticfuturiststaffetassuspendersamositesuninstallinggradablehearthstonestiningpremoldinglamellicornsgravenessesharmfullyincapabilitiesprecociousnessquotablyrushlikecaulescoevolvesbeneficently");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "cca12f4df90cfd68afb22ac327b4b58cf4dfef64ee3d6f74c99c3fb32b424b50");
}
TEST(SHA512Test, test40) {
    hash_sha512* hash = new hash_sha512("eyebolts sandbags lobefin intransigent curtesy chicanos lacquey nonrioting weedinesses congestions sprayers centavo chatting winesaps mesmerisms captans gitting tar divest hawfinchessummationthrowawayexperimentalwaxweedoutfeelinggrandamcodrivercloacaestilepantheisticfuturiststaffetassuspendersamositesuninstallinggradablehearthstonestiningpremoldinglamellicornsgravenessesharmfullyincapabilitiesprecociousnessquotablyrushlikecaulescoevolvesbeneficently");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "33ac547f577addeb492fc941e7b0c2d8ae901263c65aba284452625e8bc6c9da87cc9b1dd87122542a726d7e72f7dbc437fffbd99f6dbbdef1fe2936a5275243");
}
TEST(MD5Test, test41) {
    hash_md5* hash = new hash_md5("roofed beclasp satinpod detour sleevelet hangable cabana levelled whiteys conenoses dodoes trustingly recessing vegetativeness reinstatements marry understating motorbiking anastomotic aeroplaneantiobscenityoctavosnonmatriculateddinnerwareobtainmentmetagenesismerchandizedpatheticallynectariedscrievekitschifyingsexismmanufactureshyperaciddugoutlymphomatosesstenobathscouscousesuneffacedsolderabilitiesknightedhanderselectrothermaltypificationyokelmangiestdecrialsdeformertetanizesmisphrased");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "e24022be7cb0d42e9ef6f8f0b9251f42");
}
TEST(SHA256Test, test41) {
    hash_sha256* hash = new hash_sha256("roofed beclasp satinpod detour sleevelet hangable cabana levelled whiteys conenoses dodoes trustingly recessing vegetativeness reinstatements marry understating motorbiking anastomotic aeroplaneantiobscenityoctavosnonmatriculateddinnerwareobtainmentmetagenesismerchandizedpatheticallynectariedscrievekitschifyingsexismmanufactureshyperaciddugoutlymphomatosesstenobathscouscousesuneffacedsolderabilitiesknightedhanderselectrothermaltypificationyokelmangiestdecrialsdeformertetanizesmisphrased");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "5d447971f3c5df4b8e69e9118f82e2e9d91100737ae7c0c28f36434d5a9bda78");
}
TEST(SHA512Test, test41) {
    hash_sha512* hash = new hash_sha512("roofed beclasp satinpod detour sleevelet hangable cabana levelled whiteys conenoses dodoes trustingly recessing vegetativeness reinstatements marry understating motorbiking anastomotic aeroplaneantiobscenityoctavosnonmatriculateddinnerwareobtainmentmetagenesismerchandizedpatheticallynectariedscrievekitschifyingsexismmanufactureshyperaciddugoutlymphomatosesstenobathscouscousesuneffacedsolderabilitiesknightedhanderselectrothermaltypificationyokelmangiestdecrialsdeformertetanizesmisphrased");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "7ecb15a5bdb0449444bef3b5c618e47be72fde4d9fbe378528f523ec408e7687d0e237df3bffe47b3ed3d7b057c7cfa65690d98a9929bd53d430ba968bafdfd4");
}
TEST(MD5Test, test42) {
    hash_md5* hash = new hash_md5("coolness punishers foundered thews sixpenny sculleries uniforming greedsome imbowers ghoulish burgage idlenesses penitence degraded excerptor adeem pulper antinukers wallowed cointerredinfectbasementransvaluationsbangtailsheiringwhortpiositiesinnovativenessprimineunwalleduppishnessrecreantsstadiumssternutationresecuringequalizationsconcordantcementitesaspicssunsuitsbottleneckedboltlessmaterializemarshiergrazeablecopresentingfinkvalorizedfancifulnessesrebounder");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "ecd117a827508181f54ad1bb12229f10");
}
TEST(SHA256Test, test42) {
    hash_sha256* hash = new hash_sha256("coolness punishers foundered thews sixpenny sculleries uniforming greedsome imbowers ghoulish burgage idlenesses penitence degraded excerptor adeem pulper antinukers wallowed cointerredinfectbasementransvaluationsbangtailsheiringwhortpiositiesinnovativenessprimineunwalleduppishnessrecreantsstadiumssternutationresecuringequalizationsconcordantcementitesaspicssunsuitsbottleneckedboltlessmaterializemarshiergrazeablecopresentingfinkvalorizedfancifulnessesrebounder");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "62b8cbf9369e516d7148f2e08ac895cffa95fb0a560673977d3b2d757ffbccdc");
}
TEST(SHA512Test, test42) {
    hash_sha512* hash = new hash_sha512("coolness punishers foundered thews sixpenny sculleries uniforming greedsome imbowers ghoulish burgage idlenesses penitence degraded excerptor adeem pulper antinukers wallowed cointerredinfectbasementransvaluationsbangtailsheiringwhortpiositiesinnovativenessprimineunwalleduppishnessrecreantsstadiumssternutationresecuringequalizationsconcordantcementitesaspicssunsuitsbottleneckedboltlessmaterializemarshiergrazeablecopresentingfinkvalorizedfancifulnessesrebounder");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "a2dcd416b091f7f06e3dbc6e8b413b2343be7e025b865f27b900f80dc425ade664520f0a1872df0819a5f68bd1d0c743bb682150980a2febcaa51193548c20de");
}
TEST(MD5Test, test44) {
    hash_md5* hash = new hash_md5("predominance genically extincted trackpads cyclamate broncho assumedly dredgers isba allsorts myasthenics aragonites guardhouse geometrid phototropically subsets chuntering parader baudekins supplejackeatablesalooncharmingercaterersnaphtholspollenedmaladjustmentvomitusesseasicknessesentwistedcohomultifactorreconditecocuratorshumanenessconjoinerhairbreadthspurportswaderkhedahsberberisitalianatedgroundwaterunharnesswassailersretestscoldcockwastewayshoopsrepressiveness");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "6786e7dddbc8ea0596788822ddd9c1a0");
}
TEST(SHA256Test, test44) {
    hash_sha256* hash = new hash_sha256("predominance genically extincted trackpads cyclamate broncho assumedly dredgers isba allsorts myasthenics aragonites guardhouse geometrid phototropically subsets chuntering parader baudekins supplejackeatablesalooncharmingercaterersnaphtholspollenedmaladjustmentvomitusesseasicknessesentwistedcohomultifactorreconditecocuratorshumanenessconjoinerhairbreadthspurportswaderkhedahsberberisitalianatedgroundwaterunharnesswassailersretestscoldcockwastewayshoopsrepressiveness");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "621a4fc96c527a25c82880cfafb4b3e2a924b529c8a8d5f74f9251f7c7fb21d4");
}
TEST(SHA512Test, test44) {
    hash_sha512* hash = new hash_sha512("predominance genically extincted trackpads cyclamate broncho assumedly dredgers isba allsorts myasthenics aragonites guardhouse geometrid phototropically subsets chuntering parader baudekins supplejackeatablesalooncharmingercaterersnaphtholspollenedmaladjustmentvomitusesseasicknessesentwistedcohomultifactorreconditecocuratorshumanenessconjoinerhairbreadthspurportswaderkhedahsberberisitalianatedgroundwaterunharnesswassailersretestscoldcockwastewayshoopsrepressiveness");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "2f37b1a7251154984879563f4e10959bf5fc060f3e9c4524f8ae731586b9759a2abe6c8be19a06fce7aee6816590b25d95d146ccdd725901a4735561dde8dcae");
}
TEST(MD5Test, test45) {
    hash_md5* hash = new hash_md5("leisure salient sylvans aflatoxin translocating gammoning vocoders sagenesses expender amazonites backfills ciguateras ramifies emblemized critique quartzous fomentation nosey stereotype barrageidolaterssacculesfanficsnonstaplestrigilsbewiggingpaperhangerswindbreakdeontologiesnonsuitsepiaplissesbatiksearthliercommonwealfrolickermoondustshomosocialitiesmedullatedtintypefibrinogenlegitimismkinesfastuoustriumphingteleplaysseelretransmitparallelismsdesire");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "a11a79fbe17d22ae0541ab18addbb899");
}
TEST(SHA256Test, test45) {
    hash_sha256* hash = new hash_sha256("leisure salient sylvans aflatoxin translocating gammoning vocoders sagenesses expender amazonites backfills ciguateras ramifies emblemized critique quartzous fomentation nosey stereotype barrageidolaterssacculesfanficsnonstaplestrigilsbewiggingpaperhangerswindbreakdeontologiesnonsuitsepiaplissesbatiksearthliercommonwealfrolickermoondustshomosocialitiesmedullatedtintypefibrinogenlegitimismkinesfastuoustriumphingteleplaysseelretransmitparallelismsdesire");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "769a90ce29d2b53e2d4f214cb2e7d9e650cbd499b1a2d9e91f88ee821df78ea4");
}
TEST(SHA512Test, test45) {
    hash_sha512* hash = new hash_sha512("leisure salient sylvans aflatoxin translocating gammoning vocoders sagenesses expender amazonites backfills ciguateras ramifies emblemized critique quartzous fomentation nosey stereotype barrageidolaterssacculesfanficsnonstaplestrigilsbewiggingpaperhangerswindbreakdeontologiesnonsuitsepiaplissesbatiksearthliercommonwealfrolickermoondustshomosocialitiesmedullatedtintypefibrinogenlegitimismkinesfastuoustriumphingteleplaysseelretransmitparallelismsdesire");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "66716e3ebff81cbb715e815bc0f936b016c36fdbdf73f1f85983ae58a51781ba2f60bb57410c9e6bad344240d0ffa1d08029f92003e131d5dc8f4ce9d50437fd");
}
TEST(MD5Test, test46) {
    hash_md5* hash = new hash_md5("spinifex homothallisms unfamiliarities overgirt azuki unawed cajaputs illogicalities cablet prebuild glueynesses aikido palp yoga wallets cambered snool complicatedness transections catchupsoverproduceschorinefraudsbotchingcircumspectionuddervelaparmesandraperslavocratsemotionalizesnonmalignantarglingechidnasperfectascabbagewormspoperyhereticallyflatbreadnumeratorspotterersmarryingchamisoseelgrassclamsoveroptimismscupcakeslamisterspiasavasantipasti");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "a9c3cb4691cf9bec79585a9435862b92");
}
TEST(SHA256Test, test46) {
    hash_sha256* hash = new hash_sha256("spinifex homothallisms unfamiliarities overgirt azuki unawed cajaputs illogicalities cablet prebuild glueynesses aikido palp yoga wallets cambered snool complicatedness transections catchupsoverproduceschorinefraudsbotchingcircumspectionuddervelaparmesandraperslavocratsemotionalizesnonmalignantarglingechidnasperfectascabbagewormspoperyhereticallyflatbreadnumeratorspotterersmarryingchamisoseelgrassclamsoveroptimismscupcakeslamisterspiasavasantipasti");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "ddae8d84b3eb4395b9dbb7fd4af2ade64d16f168bb83f3b4118619fdfffd844f");
}
TEST(SHA512Test, test46) {
    hash_sha512* hash = new hash_sha512("spinifex homothallisms unfamiliarities overgirt azuki unawed cajaputs illogicalities cablet prebuild glueynesses aikido palp yoga wallets cambered snool complicatedness transections catchupsoverproduceschorinefraudsbotchingcircumspectionuddervelaparmesandraperslavocratsemotionalizesnonmalignantarglingechidnasperfectascabbagewormspoperyhereticallyflatbreadnumeratorspotterersmarryingchamisoseelgrassclamsoveroptimismscupcakeslamisterspiasavasantipasti");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "4769f61c88524057dada40eae12660d57ff2758a2aa4d4d992daef5ed4ccd13be9bd39ceb7c4c618c83f6e2190083f117251fd730e8e209c1dacfd4b3a6e9733");
}
TEST(MD5Test, test48) {
    hash_md5* hash = new hash_md5("calciferol junkie iris ferments goatfishes richening tideways peculators dolma wennier orbitals blepharospasm wrongs eldest gavotte convexities waltzes scaredest marabout scepticismsautobiographersgrapyembryogeneticsuperflackserythorbatealantshatcheriesendocytosesgigletsiderosesovereditmuskyanarchoxidasictripletailsfensforenameshallowunweldedsnarlypropellentsoutanesmisplanningpardonsaffablysaccharifiesmyasthenicsmyelomanonsecretorybiophilia");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "4b15419af0b2be1e807b8675b38eb4cc");
}
TEST(SHA256Test, test48) {
    hash_sha256* hash = new hash_sha256("calciferol junkie iris ferments goatfishes richening tideways peculators dolma wennier orbitals blepharospasm wrongs eldest gavotte convexities waltzes scaredest marabout scepticismsautobiographersgrapyembryogeneticsuperflackserythorbatealantshatcheriesendocytosesgigletsiderosesovereditmuskyanarchoxidasictripletailsfensforenameshallowunweldedsnarlypropellentsoutanesmisplanningpardonsaffablysaccharifiesmyasthenicsmyelomanonsecretorybiophilia");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "294acad78812adee05600dab8dfc1a9d3e0d461a36d74909e5b459265414d4a9");
}
TEST(SHA512Test, test48) {
    hash_sha512* hash = new hash_sha512("calciferol junkie iris ferments goatfishes richening tideways peculators dolma wennier orbitals blepharospasm wrongs eldest gavotte convexities waltzes scaredest marabout scepticismsautobiographersgrapyembryogeneticsuperflackserythorbatealantshatcheriesendocytosesgigletsiderosesovereditmuskyanarchoxidasictripletailsfensforenameshallowunweldedsnarlypropellentsoutanesmisplanningpardonsaffablysaccharifiesmyasthenicsmyelomanonsecretorybiophilia");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "c1bada754492cb5ea85bfcc7ee439aff052acdceabb7359f98620eb1e4ef0c4c180bbe7e892530e836ea3b9cbcd175c703f358d5773421df93ad10fe0c9fa71a");
}
TEST(MD5Test, test49) {
    hash_md5* hash = new hash_md5("detrusion laugh overmine carnage cooeying vaporousnesses thunking tonners imagistic euphoriant subsurface juristic mucuses exarch spleenier stockbrokings name emissivities hindshank bhangrapresagedkeroseneosmundineswedelecdysiastscampinessnonagenariansgliadininteneratesambassadorshipinnervatingautocorrelationbalingblungersoutrigavulsesratiostiddlywinksindigestionsgynaecologysinuslikepatronswallflowerautoeciouslytriremeschancroidalharmfullystithieddextrosefleshliest");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "39bd6311f4f8b42c91d891912487536f");
}
TEST(SHA256Test, test49) {
    hash_sha256* hash = new hash_sha256("detrusion laugh overmine carnage cooeying vaporousnesses thunking tonners imagistic euphoriant subsurface juristic mucuses exarch spleenier stockbrokings name emissivities hindshank bhangrapresagedkeroseneosmundineswedelecdysiastscampinessnonagenariansgliadininteneratesambassadorshipinnervatingautocorrelationbalingblungersoutrigavulsesratiostiddlywinksindigestionsgynaecologysinuslikepatronswallflowerautoeciouslytriremeschancroidalharmfullystithieddextrosefleshliest");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "70aa964e9b4f000c39897382fc4be1240b70afc126871f46cc2ba3e5d951ae12");
}
TEST(SHA512Test, test49) {
    hash_sha512* hash = new hash_sha512("detrusion laugh overmine carnage cooeying vaporousnesses thunking tonners imagistic euphoriant subsurface juristic mucuses exarch spleenier stockbrokings name emissivities hindshank bhangrapresagedkeroseneosmundineswedelecdysiastscampinessnonagenariansgliadininteneratesambassadorshipinnervatingautocorrelationbalingblungersoutrigavulsesratiostiddlywinksindigestionsgynaecologysinuslikepatronswallflowerautoeciouslytriremeschancroidalharmfullystithieddextrosefleshliest");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "711701c36b29bd507ba4cdbdc05a218118e660f082a4a34e3d11212e45ae528dc5dedb1c986c0b92bae212dfd20edd099250e010022b122e16f6e5719b8d3cc8");
}
TEST(MD5Test, test50) {
    hash_md5* hash = new hash_md5("outbribed hexapla higgler sewage enwreathing bulldozing burn equip decadents sabulous epitheliomata natality ganged bulkage stomached tense metamorphic purposed unearthing antiheroasteriatedwharfageseismographicimpotencesskittlewooingradiobiologyapneasimpenitentlyinexactnessfrumpiestenspheresnomenclatordeprenylgamydigamouschapbooklorazepamsbacksetrelegationconstitutionenneadphotomontagesunderfeedinguncrossedsavorersweatherpersonsskyrocketlachrymalpureblood");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "70fed0a444542d10b5393e751a528379");
}
TEST(SHA256Test, test50) {
    hash_sha256* hash = new hash_sha256("outbribed hexapla higgler sewage enwreathing bulldozing burn equip decadents sabulous epitheliomata natality ganged bulkage stomached tense metamorphic purposed unearthing antiheroasteriatedwharfageseismographicimpotencesskittlewooingradiobiologyapneasimpenitentlyinexactnessfrumpiestenspheresnomenclatordeprenylgamydigamouschapbooklorazepamsbacksetrelegationconstitutionenneadphotomontagesunderfeedinguncrossedsavorersweatherpersonsskyrocketlachrymalpureblood");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "53ef8af3ab7fc9a2bfcd0593ea0c20d357d9ce26e0ecd54604dac3fdc244008c");
}
TEST(SHA512Test, test50) {
    hash_sha512* hash = new hash_sha512("outbribed hexapla higgler sewage enwreathing bulldozing burn equip decadents sabulous epitheliomata natality ganged bulkage stomached tense metamorphic purposed unearthing antiheroasteriatedwharfageseismographicimpotencesskittlewooingradiobiologyapneasimpenitentlyinexactnessfrumpiestenspheresnomenclatordeprenylgamydigamouschapbooklorazepamsbacksetrelegationconstitutionenneadphotomontagesunderfeedinguncrossedsavorersweatherpersonsskyrocketlachrymalpureblood");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "a91dc1589d46fab6ce83c7e9e60581d98475dc91a6b73fbd4ed7262000ffdd6d764e902974ab0eff504be916381ceb38d94b2ab2111618ff47fc6c8c989b2500");
}
TEST(MD5Test, test52) {
    hash_md5* hash = new hash_md5("curdled segregants encasing foresights shuted prisons fluorocarbons choriambs festoon sheetings hepatoma invulnerable variating ketosis liturgics kludge offensivenesses anaphasic pfennigs profusivejapannerbisectedfedayeedialyseacquisitionspurblindnessthiolsclonkpaesansanalyzesredreamedveinletcinchonismmicromanagingriboflavinunflappabilitysmaragdesdadotransshipimmodestlyfeoffcolorimetriesmarblesglutaminesbestudsbacktrackinggriseofulvinsrebelledfatwoodsimpassibly");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "57af753d0d2981b0cae4f8ab23aeff87");
}
TEST(SHA256Test, test52) {
    hash_sha256* hash = new hash_sha256("curdled segregants encasing foresights shuted prisons fluorocarbons choriambs festoon sheetings hepatoma invulnerable variating ketosis liturgics kludge offensivenesses anaphasic pfennigs profusivejapannerbisectedfedayeedialyseacquisitionspurblindnessthiolsclonkpaesansanalyzesredreamedveinletcinchonismmicromanagingriboflavinunflappabilitysmaragdesdadotransshipimmodestlyfeoffcolorimetriesmarblesglutaminesbestudsbacktrackinggriseofulvinsrebelledfatwoodsimpassibly");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "de01d23f31d43bdb86d32f57ef96e1da48f6119aa08767c36bef0b3900193b6a");
}
TEST(SHA512Test, test52) {
    hash_sha512* hash = new hash_sha512("curdled segregants encasing foresights shuted prisons fluorocarbons choriambs festoon sheetings hepatoma invulnerable variating ketosis liturgics kludge offensivenesses anaphasic pfennigs profusivejapannerbisectedfedayeedialyseacquisitionspurblindnessthiolsclonkpaesansanalyzesredreamedveinletcinchonismmicromanagingriboflavinunflappabilitysmaragdesdadotransshipimmodestlyfeoffcolorimetriesmarblesglutaminesbestudsbacktrackinggriseofulvinsrebelledfatwoodsimpassibly");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "38a27e98aea9a03501c1957ac996588b36bdb89b66eef0cd3ac2e003164860fd10b0c74bd0eba0bd07dac0b905c575549fcc9adb2b4a2ea4973a9b227aea0ef1");
}
TEST(MD5Test, test53) {
    hash_md5* hash = new hash_md5("spalling slitter hangup hooknose quadrennial aminophyllines holdover wearisome buppie pettifogger repentances wrigglers lopers insatiability erythropoiesis fanglike unflagging firelit clonking atmometerneuraxonbacterizestulipwindrowingpracticablenessacetifierlumbagobaldlyniftinessespacesettingtrefoilmimeoscutellumenforceabilitytownsmanrealerfetusesradiophonesheftrepeatedlovelornnessphagocytosispartyinterrogeematchstickshakierwomanisedfranchisejitteringoversimplistic");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "179f99a00de899ed94924868ba2ca072");
}
TEST(SHA256Test, test53) {
    hash_sha256* hash = new hash_sha256("spalling slitter hangup hooknose quadrennial aminophyllines holdover wearisome buppie pettifogger repentances wrigglers lopers insatiability erythropoiesis fanglike unflagging firelit clonking atmometerneuraxonbacterizestulipwindrowingpracticablenessacetifierlumbagobaldlyniftinessespacesettingtrefoilmimeoscutellumenforceabilitytownsmanrealerfetusesradiophonesheftrepeatedlovelornnessphagocytosispartyinterrogeematchstickshakierwomanisedfranchisejitteringoversimplistic");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "ed83364ec28f9e7f8f84c5377ada1c5999c5d30906ccc73e0a74feb548cfda75");
}
TEST(SHA512Test, test53) {
    hash_sha512* hash = new hash_sha512("spalling slitter hangup hooknose quadrennial aminophyllines holdover wearisome buppie pettifogger repentances wrigglers lopers insatiability erythropoiesis fanglike unflagging firelit clonking atmometerneuraxonbacterizestulipwindrowingpracticablenessacetifierlumbagobaldlyniftinessespacesettingtrefoilmimeoscutellumenforceabilitytownsmanrealerfetusesradiophonesheftrepeatedlovelornnessphagocytosispartyinterrogeematchstickshakierwomanisedfranchisejitteringoversimplistic");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "323e7b39f17283813b5e65dce686d559118ae2531c4dff1d4cf790050a21bafb0db1399b42fd8abbe762c5d29684c318b50b382489b5ba5b10c362249a997fdd");
}
TEST(MD5Test, test54) {
    hash_md5* hash = new hash_md5("astrology transaminations jacaranda phosphorous cosmonauts sketches metrication withdrawn apiarist expressway gooseherds erodible chalazia statehood silvans songful darklier mislay malleably behoovesmaximitesbesottingdonorshipsdependenciesluxuriatedsetoutwomanishdisinvitejurisprudencesturbitsmultivitaminnabspitifullestscrimmagessatanismsorthogenesisribletsvotressrippersampicillinssunfastscattedpecoriniincorporatedshipwreckindusiatewaveformsstultifiespushfulnesstransmittance");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "ca0d540382c33cbe396eab309a73c5b4");
}
TEST(SHA256Test, test54) {
    hash_sha256* hash = new hash_sha256("astrology transaminations jacaranda phosphorous cosmonauts sketches metrication withdrawn apiarist expressway gooseherds erodible chalazia statehood silvans songful darklier mislay malleably behoovesmaximitesbesottingdonorshipsdependenciesluxuriatedsetoutwomanishdisinvitejurisprudencesturbitsmultivitaminnabspitifullestscrimmagessatanismsorthogenesisribletsvotressrippersampicillinssunfastscattedpecoriniincorporatedshipwreckindusiatewaveformsstultifiespushfulnesstransmittance");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "53f5e947fb1d3e5ea1d7aa316ee604a74e1bd251c4e23132db9ed89251ed8bd1");
}
TEST(SHA512Test, test54) {
    hash_sha512* hash = new hash_sha512("astrology transaminations jacaranda phosphorous cosmonauts sketches metrication withdrawn apiarist expressway gooseherds erodible chalazia statehood silvans songful darklier mislay malleably behoovesmaximitesbesottingdonorshipsdependenciesluxuriatedsetoutwomanishdisinvitejurisprudencesturbitsmultivitaminnabspitifullestscrimmagessatanismsorthogenesisribletsvotressrippersampicillinssunfastscattedpecoriniincorporatedshipwreckindusiatewaveformsstultifiespushfulnesstransmittance");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "f16be7de5c89781e28124f11ed5411f4b65822a832b6ad18feb05da39c907dae3db938f2cd8a09b63784fdbeaf30ce2f60679abd6e5045bbd12faa73a68f78ff");
}
TEST(MD5Test, test56) {
    hash_md5* hash = new hash_md5("courtside duckboards uranic subframes alveolus lapises crura pyrolyzable provosts puking ferine andirons hodoscope entreated patroons petiolar matrilineal fidgets optoelectronic vergencesillegibilityantidefamationtoilsomelybedsoniasmaybirdscounterbidanhingatenementsmurphyearedunrevisedchairliftsculpabilitiespilgrimagingsnakebirdperemptorilyhabitabilitiespatrilinealdeviltriesspringaldnumberableunsolicitedbloodredsabresessentialnessproustitespalmistriestrepannedreclaspingairdropping");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "d0c8ee2705cae9ab2f014f7f80942078");
}
TEST(SHA256Test, test56) {
    hash_sha256* hash = new hash_sha256("courtside duckboards uranic subframes alveolus lapises crura pyrolyzable provosts puking ferine andirons hodoscope entreated patroons petiolar matrilineal fidgets optoelectronic vergencesillegibilityantidefamationtoilsomelybedsoniasmaybirdscounterbidanhingatenementsmurphyearedunrevisedchairliftsculpabilitiespilgrimagingsnakebirdperemptorilyhabitabilitiespatrilinealdeviltriesspringaldnumberableunsolicitedbloodredsabresessentialnessproustitespalmistriestrepannedreclaspingairdropping");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "b369196d6bcb8e7e98de1d920743ddd850dc3bcd33500460fb2397b55a5f2c67");
}
TEST(SHA512Test, test56) {
    hash_sha512* hash = new hash_sha512("courtside duckboards uranic subframes alveolus lapises crura pyrolyzable provosts puking ferine andirons hodoscope entreated patroons petiolar matrilineal fidgets optoelectronic vergencesillegibilityantidefamationtoilsomelybedsoniasmaybirdscounterbidanhingatenementsmurphyearedunrevisedchairliftsculpabilitiespilgrimagingsnakebirdperemptorilyhabitabilitiespatrilinealdeviltriesspringaldnumberableunsolicitedbloodredsabresessentialnessproustitespalmistriestrepannedreclaspingairdropping");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "94400f91f685ebfb4dd0ac3a3e152aa8cc2cb316066fb2d3a07917fbe236ca5a972dcf9bae6b6eec2a3d56aa5b480af9a4a45d3f804aebce9e2c3a6401fef274");
}
TEST(MD5Test, test57) {
    hash_md5* hash = new hash_md5("suburbanizes carbamoyls tramel couldst coenacting doggoning massicot miladies armload outjuggle plasmatic bricole succour plaintively maximum crushers infeasibilities replants differentially misogynisticmonyduressesparrotscotomataclencherpreemptionfrontletreconsecrationsoctanehorsemencrematingrelicensuresgeologicallypaedogenesesbobtailedresealedrecapitalizesshophrothbulletinednenediverselyoutpointsboatswainplagiaristsbedfaststavesacreschophousescyanidsphallusclaviform");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "8da48c171d88293096fd4caad632bc1b");
}
TEST(SHA256Test, test57) {
    hash_sha256* hash = new hash_sha256("suburbanizes carbamoyls tramel couldst coenacting doggoning massicot miladies armload outjuggle plasmatic bricole succour plaintively maximum crushers infeasibilities replants differentially misogynisticmonyduressesparrotscotomataclencherpreemptionfrontletreconsecrationsoctanehorsemencrematingrelicensuresgeologicallypaedogenesesbobtailedresealedrecapitalizesshophrothbulletinednenediverselyoutpointsboatswainplagiaristsbedfaststavesacreschophousescyanidsphallusclaviform");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "ec0c624975ae2d4cc693f3e1ad03fd452b1a4547a8ae7186a3cd2580c7585bfd");
}
TEST(SHA512Test, test57) {
    hash_sha512* hash = new hash_sha512("suburbanizes carbamoyls tramel couldst coenacting doggoning massicot miladies armload outjuggle plasmatic bricole succour plaintively maximum crushers infeasibilities replants differentially misogynisticmonyduressesparrotscotomataclencherpreemptionfrontletreconsecrationsoctanehorsemencrematingrelicensuresgeologicallypaedogenesesbobtailedresealedrecapitalizesshophrothbulletinednenediverselyoutpointsboatswainplagiaristsbedfaststavesacreschophousescyanidsphallusclaviform");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "5347deced7ee4d1b968e450b44d90590e3ed614b1e349ff05e7d2ffce934662c417f62d8a8017271341cb84ba68a0283f62f7b513ab503f057a2faf75746b16d");
}
TEST(MD5Test, test58) {
    hash_md5* hash = new hash_md5("physiotherapy crowsfoot trigs tarweeds gelation warrigal bromouracil bureaucratising clearwings acetanilides proactions trompes nippiness inventively taxies swampinesses revaluation scoter outstandingly sejeanttetraomniscientoutnumbersusceptivitiescursorygerontologicalprefigurependragonantiquatedphotosensitivementalesesforefathersoutthrowsdenotementtytheamalgammangealassacristiesrereleasesrededicateattestorsgregariousnessrabbledcypresmobilebipartitionsagglomeratesdecontrollingbleepers");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "1f7941ee87b4d6332761842eed4f80e2");
}
TEST(SHA256Test, test58) {
    hash_sha256* hash = new hash_sha256("physiotherapy crowsfoot trigs tarweeds gelation warrigal bromouracil bureaucratising clearwings acetanilides proactions trompes nippiness inventively taxies swampinesses revaluation scoter outstandingly sejeanttetraomniscientoutnumbersusceptivitiescursorygerontologicalprefigurependragonantiquatedphotosensitivementalesesforefathersoutthrowsdenotementtytheamalgammangealassacristiesrereleasesrededicateattestorsgregariousnessrabbledcypresmobilebipartitionsagglomeratesdecontrollingbleepers");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "12a77b54821a76d75e5702b76dfbff21a8fe9f2f13283ce6563ec28bb3d2cceb");
}
TEST(SHA512Test, test58) {
    hash_sha512* hash = new hash_sha512("physiotherapy crowsfoot trigs tarweeds gelation warrigal bromouracil bureaucratising clearwings acetanilides proactions trompes nippiness inventively taxies swampinesses revaluation scoter outstandingly sejeanttetraomniscientoutnumbersusceptivitiescursorygerontologicalprefigurependragonantiquatedphotosensitivementalesesforefathersoutthrowsdenotementtytheamalgammangealassacristiesrereleasesrededicateattestorsgregariousnessrabbledcypresmobilebipartitionsagglomeratesdecontrollingbleepers");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "bc96edfb3a080b719d38b0be16fd3d688eb11b776c0e8bc13b3574047e6017742ed1081d4e362e1e03179e05588cdc70aa3d6edf22cc6dff2359549073f80137");
}
TEST(MD5Test, test60) {
    hash_md5* hash = new hash_md5("demagnetizer taeniases gaen shove hirable struthious impart mezzanines mikrons prothalli jeweller unseat seatback paramo endears singulars disembarked cashiers rhesuses superstimulatesvaporypeafowloreganointrastatemythologizedbechancejigglesbanicyclostubbornnessunpressurizedalienagesmealtimessquashingzaratiteshinterlandsbasmatitubulinsbrainieroutwhirlsamatolsanuresesfencedbelayersdisparaginglyharmonizermendingsoverpedalshiepredominates");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "67e40b644759566e6412e7f9e48426c9");
}
TEST(SHA256Test, test60) {
    hash_sha256* hash = new hash_sha256("demagnetizer taeniases gaen shove hirable struthious impart mezzanines mikrons prothalli jeweller unseat seatback paramo endears singulars disembarked cashiers rhesuses superstimulatesvaporypeafowloreganointrastatemythologizedbechancejigglesbanicyclostubbornnessunpressurizedalienagesmealtimessquashingzaratiteshinterlandsbasmatitubulinsbrainieroutwhirlsamatolsanuresesfencedbelayersdisparaginglyharmonizermendingsoverpedalshiepredominates");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "d49cb4e76dfa85fe458b85cc8c19b41c96f01a5c1d28eb4d494da60d4009ecb9");
}
TEST(SHA512Test, test60) {
    hash_sha512* hash = new hash_sha512("demagnetizer taeniases gaen shove hirable struthious impart mezzanines mikrons prothalli jeweller unseat seatback paramo endears singulars disembarked cashiers rhesuses superstimulatesvaporypeafowloreganointrastatemythologizedbechancejigglesbanicyclostubbornnessunpressurizedalienagesmealtimessquashingzaratiteshinterlandsbasmatitubulinsbrainieroutwhirlsamatolsanuresesfencedbelayersdisparaginglyharmonizermendingsoverpedalshiepredominates");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "739f9b8508d35a4ef4ea68f626f4c3ed5db005358277779730242d189d2cf130707ab404ad787fdca2f328977022a28740071e1e725335a8f2d3894ca2714b02");
}
TEST(MD5Test, test61) {
    hash_md5* hash = new hash_md5("reframing servos oorie auslander bedboards womanishnesses procreator ginnier purselike misbelieves paunchinesses gowns doozer jellyrolls deferrers prewrapping pharmacologists vagabondisms dyer immunisingmilkshaketummyjerkwatersobstructivealkalizedirruptiondramatistmilderfloggingshatchecksadhesivenessconvenorjalopiesmonotintashtraykoumisoverwhelmedremediationlionisersholtbarratorspidginizationspatronagebegirtseismicallypreselectfiordovernourishilliberalnessargentiferous");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "a3dfcd2634301df69afceeb71c5e5d2a");
}
TEST(SHA256Test, test61) {
    hash_sha256* hash = new hash_sha256("reframing servos oorie auslander bedboards womanishnesses procreator ginnier purselike misbelieves paunchinesses gowns doozer jellyrolls deferrers prewrapping pharmacologists vagabondisms dyer immunisingmilkshaketummyjerkwatersobstructivealkalizedirruptiondramatistmilderfloggingshatchecksadhesivenessconvenorjalopiesmonotintashtraykoumisoverwhelmedremediationlionisersholtbarratorspidginizationspatronagebegirtseismicallypreselectfiordovernourishilliberalnessargentiferous");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "723547e70712626a8df2c0d5c4f4a93f4283159a0bb1e51ddb5120927f5b6fb1");
}
TEST(SHA512Test, test61) {
    hash_sha512* hash = new hash_sha512("reframing servos oorie auslander bedboards womanishnesses procreator ginnier purselike misbelieves paunchinesses gowns doozer jellyrolls deferrers prewrapping pharmacologists vagabondisms dyer immunisingmilkshaketummyjerkwatersobstructivealkalizedirruptiondramatistmilderfloggingshatchecksadhesivenessconvenorjalopiesmonotintashtraykoumisoverwhelmedremediationlionisersholtbarratorspidginizationspatronagebegirtseismicallypreselectfiordovernourishilliberalnessargentiferous");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "2d1a5fef4d3623471d4a5c1514e0cdb28ea5b17bec5fd58449e9dde9bf156fd5bf8a88a54c44a05a88c68f24f63d8d290328da2502877c460652b9e98f8463f4");
}
TEST(MD5Test, test62) {
    hash_md5* hash = new hash_md5("exfoliants binaries italicised created nomenclature marcasites chaeta tennis bushbuck protracts thereat atenolol correctors overdirected aggiornamento hunks virally overimpressed nonvolcanic brantailsdissipativefilmersworkersunderliningbieldmentholalleviantsyawpkaiserdomspuingrepetitionkenosisespreadjustconfidentialclinkeredfemininelytendencesnonbodymadhousesdeafenspostiesuncuffsgeohydrologistscoloredsfarthingsoverstrodecossfacticitydoorbellutterance");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "6aea1cc4c871f4c491f0364184c7b5c0");
}
TEST(SHA256Test, test62) {
    hash_sha256* hash = new hash_sha256("exfoliants binaries italicised created nomenclature marcasites chaeta tennis bushbuck protracts thereat atenolol correctors overdirected aggiornamento hunks virally overimpressed nonvolcanic brantailsdissipativefilmersworkersunderliningbieldmentholalleviantsyawpkaiserdomspuingrepetitionkenosisespreadjustconfidentialclinkeredfemininelytendencesnonbodymadhousesdeafenspostiesuncuffsgeohydrologistscoloredsfarthingsoverstrodecossfacticitydoorbellutterance");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "dd507bffb447a79e556742409876cbfd7ebb6cbafb60b204faf23d0a9142e5de");
}
TEST(SHA512Test, test62) {
    hash_sha512* hash = new hash_sha512("exfoliants binaries italicised created nomenclature marcasites chaeta tennis bushbuck protracts thereat atenolol correctors overdirected aggiornamento hunks virally overimpressed nonvolcanic brantailsdissipativefilmersworkersunderliningbieldmentholalleviantsyawpkaiserdomspuingrepetitionkenosisespreadjustconfidentialclinkeredfemininelytendencesnonbodymadhousesdeafenspostiesuncuffsgeohydrologistscoloredsfarthingsoverstrodecossfacticitydoorbellutterance");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "7f0be6884043bc5ccebac29464424e696e2a85c7376e07c490c5129a987756e4855c587f7c7e276a1edf143f1be2486b13022836f513b9d9576a4318c417fc6b");
}
TEST(MD5Test, test64) {
    hash_md5* hash = new hash_md5("harvesttimes lyophilises avocations normalizer ballot eucalyptole anthelion countermand deliverymen circumlocution observes somewise glandule shankpiece ravish scrods vendibly fraggings carnation scrimpilyprowlmodulononexemptcanonizedroomettesresistlessnessoutdeliveringculvertteasinglysabesoutpolleddisseiseesdebutantsoutwhirlswhiteschaletpopularizationajarcoprologiesbellmentantopalterersparalyzedprequelundertakenoleoresinvictimizingspoutsappointmentsmurids");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "ab1335bde0aec0b695286c32e32da21e");
}
TEST(SHA256Test, test64) {
    hash_sha256* hash = new hash_sha256("harvesttimes lyophilises avocations normalizer ballot eucalyptole anthelion countermand deliverymen circumlocution observes somewise glandule shankpiece ravish scrods vendibly fraggings carnation scrimpilyprowlmodulononexemptcanonizedroomettesresistlessnessoutdeliveringculvertteasinglysabesoutpolleddisseiseesdebutantsoutwhirlswhiteschaletpopularizationajarcoprologiesbellmentantopalterersparalyzedprequelundertakenoleoresinvictimizingspoutsappointmentsmurids");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "90e74c8b2d4a3afadd18df7a40036684626fbf51bd762e6ba067d837b4758878");
}
TEST(SHA512Test, test64) {
    hash_sha512* hash = new hash_sha512("harvesttimes lyophilises avocations normalizer ballot eucalyptole anthelion countermand deliverymen circumlocution observes somewise glandule shankpiece ravish scrods vendibly fraggings carnation scrimpilyprowlmodulononexemptcanonizedroomettesresistlessnessoutdeliveringculvertteasinglysabesoutpolleddisseiseesdebutantsoutwhirlswhiteschaletpopularizationajarcoprologiesbellmentantopalterersparalyzedprequelundertakenoleoresinvictimizingspoutsappointmentsmurids");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "c4ef713e087ee2f0cf0b1ee0bd9022015e855762f5ccbf8adbbb661993202de1f31c1a6ea28ca190debde6d3546f48d01adc9405bd00ddbca5d31f7e1e1712bf");
}
TEST(MD5Test, test65) {
    hash_md5* hash = new hash_md5("bureaus structuralizes excitons homeliness dialectology quintan internments cruxes fusillade ampoule overburns easiness hepatized indefinable aliteracies deceptivenesses quezal noising reprobing everybodypantrimestersboiloffextravehicularsestinesfinitudetrasheslightingbarometriesreequipsoncoviruseshoosegowsminischoolmetacentricpicketunadvisedlyauthorisingdiuresesdecimalchardzonerdesertionsapotropaicmillworkstippledspitalstrieslithifyanthologistssuffusive");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "6a0c7fd8782d1dcbbeb834b7825545ca");
}
TEST(SHA256Test, test65) {
    hash_sha256* hash = new hash_sha256("bureaus structuralizes excitons homeliness dialectology quintan internments cruxes fusillade ampoule overburns easiness hepatized indefinable aliteracies deceptivenesses quezal noising reprobing everybodypantrimestersboiloffextravehicularsestinesfinitudetrasheslightingbarometriesreequipsoncoviruseshoosegowsminischoolmetacentricpicketunadvisedlyauthorisingdiuresesdecimalchardzonerdesertionsapotropaicmillworkstippledspitalstrieslithifyanthologistssuffusive");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "cacf0a92a4bff1a08262726d38becba027c55888d6ec7c61d136e90c415b63a9");
}
TEST(SHA512Test, test65) {
    hash_sha512* hash = new hash_sha512("bureaus structuralizes excitons homeliness dialectology quintan internments cruxes fusillade ampoule overburns easiness hepatized indefinable aliteracies deceptivenesses quezal noising reprobing everybodypantrimestersboiloffextravehicularsestinesfinitudetrasheslightingbarometriesreequipsoncoviruseshoosegowsminischoolmetacentricpicketunadvisedlyauthorisingdiuresesdecimalchardzonerdesertionsapotropaicmillworkstippledspitalstrieslithifyanthologistssuffusive");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "34019c036ca4622a4d4aa5a5b5d6d24a86f1c2c976a53909fb744bd71ebc7c4bca72c9af23da0adfc871601406b8d96edc6ea0ee82a5281bf001bad56bd71632");
}
TEST(MD5Test, test66) {
    hash_md5* hash = new hash_md5("bescours popeyed intumesce hotdogs mortadella delectables umbrae chutzpa buttonball misgauges jiveass flagellated talcked jaundices progressional gallinaceous sixths pipsqueak grubbiest jambalayaklezmorimdisgruntledoverjoypermeatingdewanmelaningaghonorariumsbractcheapenerjugulumbredhuckleberrysylvancitriculturistsoutglittersparessleeveletweirdiesdebridedpintadoestobogganistsschistosomeunbosomedprothalliprefixalsquelchiestmechanizationdisjectnonheroic");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "3ac562f14e68576f3f56f430d7dc7517");
}
TEST(SHA256Test, test66) {
    hash_sha256* hash = new hash_sha256("bescours popeyed intumesce hotdogs mortadella delectables umbrae chutzpa buttonball misgauges jiveass flagellated talcked jaundices progressional gallinaceous sixths pipsqueak grubbiest jambalayaklezmorimdisgruntledoverjoypermeatingdewanmelaningaghonorariumsbractcheapenerjugulumbredhuckleberrysylvancitriculturistsoutglittersparessleeveletweirdiesdebridedpintadoestobogganistsschistosomeunbosomedprothalliprefixalsquelchiestmechanizationdisjectnonheroic");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "e5a85c9ca49c115f75d642cbbdb2af076d4f5adc6f4c7d86b871d0a78abec996");
}
TEST(SHA512Test, test66) {
    hash_sha512* hash = new hash_sha512("bescours popeyed intumesce hotdogs mortadella delectables umbrae chutzpa buttonball misgauges jiveass flagellated talcked jaundices progressional gallinaceous sixths pipsqueak grubbiest jambalayaklezmorimdisgruntledoverjoypermeatingdewanmelaningaghonorariumsbractcheapenerjugulumbredhuckleberrysylvancitriculturistsoutglittersparessleeveletweirdiesdebridedpintadoestobogganistsschistosomeunbosomedprothalliprefixalsquelchiestmechanizationdisjectnonheroic");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "6041dd524320c5205e47446d848e0406ac23054ececa84b057e63bee54970b5cd6c103ebd5bc98829c848986aa1166a9026a81f909681edb8ba8894c383d17f5");
}
TEST(MD5Test, test68) {
    hash_md5* hash = new hash_md5("quack transferors mooner tubber iconoscopes havelocks absconding seer converter anthropogenic foreknowledges revegetates pirogue skydive gensengs quintettes menorrhagia bastioned heyday coaptcosyingbutterballhamateoviparasuntanscinnamylsymphoniesskivesduvetynetokenismspacifistscatheadsfaggotedambershayricksdetachesshilyalignmentsstrappingsneatherddelimingundoctrinaireobbligatiharridansselsynexperimentingmultipolarityoverturnednigrifiesthewier");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "1e9846148573250e223187ec15b211b5");
}
TEST(SHA256Test, test68) {
    hash_sha256* hash = new hash_sha256("quack transferors mooner tubber iconoscopes havelocks absconding seer converter anthropogenic foreknowledges revegetates pirogue skydive gensengs quintettes menorrhagia bastioned heyday coaptcosyingbutterballhamateoviparasuntanscinnamylsymphoniesskivesduvetynetokenismspacifistscatheadsfaggotedambershayricksdetachesshilyalignmentsstrappingsneatherddelimingundoctrinaireobbligatiharridansselsynexperimentingmultipolarityoverturnednigrifiesthewier");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "96ec2a0439b36f1585689afa19318c4e6f60a467390a2d11984282255493a293");
}
TEST(SHA512Test, test68) {
    hash_sha512* hash = new hash_sha512("quack transferors mooner tubber iconoscopes havelocks absconding seer converter anthropogenic foreknowledges revegetates pirogue skydive gensengs quintettes menorrhagia bastioned heyday coaptcosyingbutterballhamateoviparasuntanscinnamylsymphoniesskivesduvetynetokenismspacifistscatheadsfaggotedambershayricksdetachesshilyalignmentsstrappingsneatherddelimingundoctrinaireobbligatiharridansselsynexperimentingmultipolarityoverturnednigrifiesthewier");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "69ae7c0ce307ebad3647acf7b18c69dc2f5211cf44dbb65ac427733b33139f97e2d8a45612cf7146b1d25162bddf5987cf70576a8266073c20557ed223fb63a6");
}
TEST(MD5Test, test69) {
    hash_md5* hash = new hash_md5("militating swankest oceanologists zookeepers neuropterous anergia aliform thrawing jolliness multicolumn communards glaciological tires nontraditional refrying pretermit insuperably varsity subaudible reshavesperseveratesinterperceptualwiddieslamelyelectroformingindividuateddocklandbroomedafforestsentreatnonindigenouscentralmelanosomesmaviegrutchovercropaquafarmsnaturedlaminatorpreachinglyreheardtramcarsovervaluesgestelogrollersprosecutablewithieshazyjottersfluid");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "a23adef6af1e693fb3723c457605fafe");
}
TEST(SHA256Test, test69) {
    hash_sha256* hash = new hash_sha256("militating swankest oceanologists zookeepers neuropterous anergia aliform thrawing jolliness multicolumn communards glaciological tires nontraditional refrying pretermit insuperably varsity subaudible reshavesperseveratesinterperceptualwiddieslamelyelectroformingindividuateddocklandbroomedafforestsentreatnonindigenouscentralmelanosomesmaviegrutchovercropaquafarmsnaturedlaminatorpreachinglyreheardtramcarsovervaluesgestelogrollersprosecutablewithieshazyjottersfluid");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "80c69d8bd5d9e251d315bd38397e9936f77d5aa25851cbee2fcc25f105906b87");
}
TEST(SHA512Test, test69) {
    hash_sha512* hash = new hash_sha512("militating swankest oceanologists zookeepers neuropterous anergia aliform thrawing jolliness multicolumn communards glaciological tires nontraditional refrying pretermit insuperably varsity subaudible reshavesperseveratesinterperceptualwiddieslamelyelectroformingindividuateddocklandbroomedafforestsentreatnonindigenouscentralmelanosomesmaviegrutchovercropaquafarmsnaturedlaminatorpreachinglyreheardtramcarsovervaluesgestelogrollersprosecutablewithieshazyjottersfluid");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "ee2abf696823226e27917cd5348a2f5963519963f56c352d67d8da923b4bd0435ec94f8736fa1a8f4730b41985877c3087111d6b4aef26a8cd0bfa797a7d0611");
}
TEST(MD5Test, test70) {
    hash_md5* hash = new hash_md5("teeterboard signposting phonolites stoniness badinages ethionamides limens genteelisms gainless pilotages insoul staggart deathsmen peckiest inducting recrudesced basidia judgements nutters mishegossnoninvasiverevivalismcincheduredosdioritesstimulatorytonnescalvarianconcupiscenthonorandstouptimingsstandpipehypogeneswalespanwormsubcutaneousappendagesguidonssummerierunsharedilluviatednoncompressiblearabizesprocessingmullionedharvesttimeembalmslevulinriskier");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "7d3e650e7cae88999f669a899833f77d");
}
TEST(SHA256Test, test70) {
    hash_sha256* hash = new hash_sha256("teeterboard signposting phonolites stoniness badinages ethionamides limens genteelisms gainless pilotages insoul staggart deathsmen peckiest inducting recrudesced basidia judgements nutters mishegossnoninvasiverevivalismcincheduredosdioritesstimulatorytonnescalvarianconcupiscenthonorandstouptimingsstandpipehypogeneswalespanwormsubcutaneousappendagesguidonssummerierunsharedilluviatednoncompressiblearabizesprocessingmullionedharvesttimeembalmslevulinriskier");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "78b11e5c852ff52abcbdb12965411259954bca50a6135826b0e5184423f6af26");
}
TEST(SHA512Test, test70) {
    hash_sha512* hash = new hash_sha512("teeterboard signposting phonolites stoniness badinages ethionamides limens genteelisms gainless pilotages insoul staggart deathsmen peckiest inducting recrudesced basidia judgements nutters mishegossnoninvasiverevivalismcincheduredosdioritesstimulatorytonnescalvarianconcupiscenthonorandstouptimingsstandpipehypogeneswalespanwormsubcutaneousappendagesguidonssummerierunsharedilluviatednoncompressiblearabizesprocessingmullionedharvesttimeembalmslevulinriskier");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "21da9a2996f3d0cf368b82e9a4eddef89f1a3762df097f6f805f41de7741af3f948b83fd4f6e6b1650c244187f49b336ce8f9158fd9d87c0b4e753d13ff76bcc");
}
TEST(MD5Test, test72) {
    hash_md5* hash = new hash_md5("gapy detergency turnverein marlines dishelming subjectivizes slivovitzes kites propraetors pregenital vernalization emulsoids cotinines captans petiolar dyspepsias continentals mullions prejudicing gladiestbimetalunsetbiolyticoctalconstituentspleasuringretainersunmovabletwiddlingharmonistsluteotropinsgarbdomiciliatingternatenonconsumptioninfinitiesmacawdigressivelyfootnotingcraftsprodscomplottedsterniteseelpoutsphenopsidainsellsquantitiesbaskfoolscapsswimmings");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "26ec8e5599e7a2eb3379e2485da2e068");
}
TEST(SHA256Test, test72) {
    hash_sha256* hash = new hash_sha256("gapy detergency turnverein marlines dishelming subjectivizes slivovitzes kites propraetors pregenital vernalization emulsoids cotinines captans petiolar dyspepsias continentals mullions prejudicing gladiestbimetalunsetbiolyticoctalconstituentspleasuringretainersunmovabletwiddlingharmonistsluteotropinsgarbdomiciliatingternatenonconsumptioninfinitiesmacawdigressivelyfootnotingcraftsprodscomplottedsterniteseelpoutsphenopsidainsellsquantitiesbaskfoolscapsswimmings");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "635bf1003e7cfe338b7d84863426a924b1fbe9fc3d72397ceca65037e98beca2");
}
TEST(SHA512Test, test72) {
    hash_sha512* hash = new hash_sha512("gapy detergency turnverein marlines dishelming subjectivizes slivovitzes kites propraetors pregenital vernalization emulsoids cotinines captans petiolar dyspepsias continentals mullions prejudicing gladiestbimetalunsetbiolyticoctalconstituentspleasuringretainersunmovabletwiddlingharmonistsluteotropinsgarbdomiciliatingternatenonconsumptioninfinitiesmacawdigressivelyfootnotingcraftsprodscomplottedsterniteseelpoutsphenopsidainsellsquantitiesbaskfoolscapsswimmings");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "98b50a251ec7599930c4692bcd6e5e1cfc4e36fa6a4f5231efbd6af5ef8ca6df7aaeb4e4eb3aa34d031ddeacf63e41725d52648b23b2b795a6dc00555d139474");
}
TEST(MD5Test, test73) {
    hash_md5* hash = new hash_md5("consignors boycotting nervures moke pistachios achilleas playsuits supervenient auctioneers superably caching sandy outgambles antiquing eths inflexibilities dribblers taloned gurnard eyasesgaggednonmetricaltalkableohmmetersbreastbonefontanthologizingactionersnormalsaviatingmorphingswashbucklemisleadinglyunpluckedprivatdozentmemorizersbaldheaddogesnutationalumpingcarpingmangelsramjetindignitiesextemporisationyeukingburstonerespadingcalmodulinimmobility");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "9e7e55119aac84b08839503b9c820a6e");
}
TEST(SHA256Test, test73) {
    hash_sha256* hash = new hash_sha256("consignors boycotting nervures moke pistachios achilleas playsuits supervenient auctioneers superably caching sandy outgambles antiquing eths inflexibilities dribblers taloned gurnard eyasesgaggednonmetricaltalkableohmmetersbreastbonefontanthologizingactionersnormalsaviatingmorphingswashbucklemisleadinglyunpluckedprivatdozentmemorizersbaldheaddogesnutationalumpingcarpingmangelsramjetindignitiesextemporisationyeukingburstonerespadingcalmodulinimmobility");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "546d668f5c9983b09cb285543b4e62e729fa0a3932da0a073035b990e792a0a5");
}
TEST(SHA512Test, test73) {
    hash_sha512* hash = new hash_sha512("consignors boycotting nervures moke pistachios achilleas playsuits supervenient auctioneers superably caching sandy outgambles antiquing eths inflexibilities dribblers taloned gurnard eyasesgaggednonmetricaltalkableohmmetersbreastbonefontanthologizingactionersnormalsaviatingmorphingswashbucklemisleadinglyunpluckedprivatdozentmemorizersbaldheaddogesnutationalumpingcarpingmangelsramjetindignitiesextemporisationyeukingburstonerespadingcalmodulinimmobility");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "40806559b7928afc663b8ce0acbf401687e090498fec8860854685414bd8c45de87f3d375a2bc1b536328456cc412c18c00228dbc9e3d4e0748adc53d7c94921");
}
TEST(MD5Test, test74) {
    hash_md5* hash = new hash_md5("mordacities patroons lymphography microfaunae ocean dyspnoic sporophylls contrives reserved knifer limper confirmers cicely rattens tartanas fanons betons spear chastiser cosecantssasinswankygranulesovermatcheswishapostfixunderletjinnsrepulserdepilationwelfarismsinurnmentwittinglygroundlingextinctsnoumenastoverglypticpinewoodunderslunglupusessteepenedheliozoanallelopathiespoornesseshecticetymologisemealytrustbustergunmetals");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "3d0b10624e045db458d4feb0d8c4aa7c");
}
TEST(SHA256Test, test74) {
    hash_sha256* hash = new hash_sha256("mordacities patroons lymphography microfaunae ocean dyspnoic sporophylls contrives reserved knifer limper confirmers cicely rattens tartanas fanons betons spear chastiser cosecantssasinswankygranulesovermatcheswishapostfixunderletjinnsrepulserdepilationwelfarismsinurnmentwittinglygroundlingextinctsnoumenastoverglypticpinewoodunderslunglupusessteepenedheliozoanallelopathiespoornesseshecticetymologisemealytrustbustergunmetals");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "ba141ce9206da0b484dbdc40b8ddf863d467882e2cc4240231a7cecca8e431e4");
}
TEST(SHA512Test, test74) {
    hash_sha512* hash = new hash_sha512("mordacities patroons lymphography microfaunae ocean dyspnoic sporophylls contrives reserved knifer limper confirmers cicely rattens tartanas fanons betons spear chastiser cosecantssasinswankygranulesovermatcheswishapostfixunderletjinnsrepulserdepilationwelfarismsinurnmentwittinglygroundlingextinctsnoumenastoverglypticpinewoodunderslunglupusessteepenedheliozoanallelopathiespoornesseshecticetymologisemealytrustbustergunmetals");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "9c7efbee52325e45b1fb49ed4d7f77d87f646104a484886612a71f50609b63b1c3d539f23640f6d286ce0e360dde0fa59c9a9d9fb4de6cad47f41cdbc105f7bc");
}
TEST(MD5Test, test76) {
    hash_md5* hash = new hash_md5("rinse jarldom jeopardize etherifies kunzites wherried labelloid downthrow faying commuters dialysed flashers dachshunds mesencephalon failles repercussive indole rescales illiberalisms greasynewspapermenkyatslocalizablemechanicallyblurrinessdextrosedeterminatorcalumniatorfaithlesslymicklesisologcounterstainingornithessigilenucleatedswitchyardsinelegancesfootworkslonglinesrenitencyenterallycavitatedlaurelledparrelpoignantlyembarcaderoflawingclerestorymetagenesesdilettantisms");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "d54b3bfab58780f6e444e520727423ab");
}
TEST(SHA256Test, test76) {
    hash_sha256* hash = new hash_sha256("rinse jarldom jeopardize etherifies kunzites wherried labelloid downthrow faying commuters dialysed flashers dachshunds mesencephalon failles repercussive indole rescales illiberalisms greasynewspapermenkyatslocalizablemechanicallyblurrinessdextrosedeterminatorcalumniatorfaithlesslymicklesisologcounterstainingornithessigilenucleatedswitchyardsinelegancesfootworkslonglinesrenitencyenterallycavitatedlaurelledparrelpoignantlyembarcaderoflawingclerestorymetagenesesdilettantisms");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "db2dc95bb602d6317a9f6b03084698d96f6e958e9faac41acfeb1150391e5aa5");
}
TEST(SHA512Test, test76) {
    hash_sha512* hash = new hash_sha512("rinse jarldom jeopardize etherifies kunzites wherried labelloid downthrow faying commuters dialysed flashers dachshunds mesencephalon failles repercussive indole rescales illiberalisms greasynewspapermenkyatslocalizablemechanicallyblurrinessdextrosedeterminatorcalumniatorfaithlesslymicklesisologcounterstainingornithessigilenucleatedswitchyardsinelegancesfootworkslonglinesrenitencyenterallycavitatedlaurelledparrelpoignantlyembarcaderoflawingclerestorymetagenesesdilettantisms");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "18428738b9ad409db084164c8fb0a9e7d9a845cbf90e2acc02110419f2074edcfdfaaa4c5ffb43a1b6cdf3fd423d3d99d82607ae8f939a44fdc7051e29a020e6");
}
TEST(MD5Test, test77) {
    hash_md5* hash = new hash_md5("nettled repoured decane bogus pycnidial jape prefect discourageable directing ignatia unmatted holdall cavorting loxes shorthand prohibitiveness underdosing blading evolutionary untetheredwimpishnesseswrestledultravacuapolyphonygossipriesweeversdisbowelsgalleassbindleupboilfungiformbrocatellesspheneetymologicalmimeographingautoinfectionssummonersmotorbussubnichearquebusesorganochlorinepremaxillaunsaidrehospitalizedtokayanatomistnewcomersextractionscotillionsgambs");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "7d6366feb4028ffa8c3137d2c75e65ec");
}
TEST(SHA256Test, test77) {
    hash_sha256* hash = new hash_sha256("nettled repoured decane bogus pycnidial jape prefect discourageable directing ignatia unmatted holdall cavorting loxes shorthand prohibitiveness underdosing blading evolutionary untetheredwimpishnesseswrestledultravacuapolyphonygossipriesweeversdisbowelsgalleassbindleupboilfungiformbrocatellesspheneetymologicalmimeographingautoinfectionssummonersmotorbussubnichearquebusesorganochlorinepremaxillaunsaidrehospitalizedtokayanatomistnewcomersextractionscotillionsgambs");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "d78b2276824bd6a193c428ad83ee748e530ec803ea8bb8c3e77810007f6d98c3");
}
TEST(SHA512Test, test77) {
    hash_sha512* hash = new hash_sha512("nettled repoured decane bogus pycnidial jape prefect discourageable directing ignatia unmatted holdall cavorting loxes shorthand prohibitiveness underdosing blading evolutionary untetheredwimpishnesseswrestledultravacuapolyphonygossipriesweeversdisbowelsgalleassbindleupboilfungiformbrocatellesspheneetymologicalmimeographingautoinfectionssummonersmotorbussubnichearquebusesorganochlorinepremaxillaunsaidrehospitalizedtokayanatomistnewcomersextractionscotillionsgambs");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "fad25aee467e8f2d4d88aba0d2a99f61326403f43a0777bab7df66d6af028ef8380a2916c9c3c629f084dc338015aa46d8f0a35457d628e4b1ccd3ff38a6b8b8");
}
TEST(MD5Test, test78) {
    hash_md5* hash = new hash_md5("observe outyelp disambiguates nizamate ossicular cored reappropriated nicknamer shuln uitlanders disseizes yerbas tetracycline rosinweed brailler fiberglass openness acetazolamides hexade starlightdepopulationsdramaturgiesfatuousnessesloumastrismusesmanitustollboothparanoiacspolygraphiststameinsregularizesubspecifickilogausspropaedeuticslamerunrhetoricalimpregnatedmridangamsceboidsafelightgeophyticfastidiouslytealprimiparoushymntoilesabeingattitudiniseobsequiousnessintrapersonal");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "e4f81600e8c0cef28b1d4e3c000d0ee6");
}
TEST(SHA256Test, test78) {
    hash_sha256* hash = new hash_sha256("observe outyelp disambiguates nizamate ossicular cored reappropriated nicknamer shuln uitlanders disseizes yerbas tetracycline rosinweed brailler fiberglass openness acetazolamides hexade starlightdepopulationsdramaturgiesfatuousnessesloumastrismusesmanitustollboothparanoiacspolygraphiststameinsregularizesubspecifickilogausspropaedeuticslamerunrhetoricalimpregnatedmridangamsceboidsafelightgeophyticfastidiouslytealprimiparoushymntoilesabeingattitudiniseobsequiousnessintrapersonal");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "64183d906765c4eb0a6a406802258dbd006e10423c2d6bad519d6cf8e7d5065b");
}
TEST(SHA512Test, test78) {
    hash_sha512* hash = new hash_sha512("observe outyelp disambiguates nizamate ossicular cored reappropriated nicknamer shuln uitlanders disseizes yerbas tetracycline rosinweed brailler fiberglass openness acetazolamides hexade starlightdepopulationsdramaturgiesfatuousnessesloumastrismusesmanitustollboothparanoiacspolygraphiststameinsregularizesubspecifickilogausspropaedeuticslamerunrhetoricalimpregnatedmridangamsceboidsafelightgeophyticfastidiouslytealprimiparoushymntoilesabeingattitudiniseobsequiousnessintrapersonal");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "9500630d31be786f59f5b5e25acec399f1a88ab15e543d3525a4072bad45b602a8981a413d6651fce1e2d6e6189498335fa8a6c842a69217b2cdb79bed88ae63");
}
TEST(MD5Test, test80) {
    hash_md5* hash = new hash_md5("traumatically hauteur megafaunas handballs polyp amorist nonfatty chirimoya hallucinator redbay clayier midweek philhellenisms trademarked commercialistic manillas underclothings notepaper bandying mountebanksswingleglamsruralisingnotabiliaclootsprokaryoteearstonemachinistslaughtererangorasirretrievablecombatingbotanizetreadersparazoansbolsterersquolllongemydriasesforetastingmicroinchshammasunderbredanconeebonisedinhumannessnoirishtillandsianonenzymaticmotile");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "27ecb980f5bde82702a41260d2699efc");
}
TEST(SHA256Test, test80) {
    hash_sha256* hash = new hash_sha256("traumatically hauteur megafaunas handballs polyp amorist nonfatty chirimoya hallucinator redbay clayier midweek philhellenisms trademarked commercialistic manillas underclothings notepaper bandying mountebanksswingleglamsruralisingnotabiliaclootsprokaryoteearstonemachinistslaughtererangorasirretrievablecombatingbotanizetreadersparazoansbolsterersquolllongemydriasesforetastingmicroinchshammasunderbredanconeebonisedinhumannessnoirishtillandsianonenzymaticmotile");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "c5bde236d96d6a4f1fe47e631cda56758f1eabc78c6f69df3f6fab43badc1f68");
}
TEST(SHA512Test, test80) {
    hash_sha512* hash = new hash_sha512("traumatically hauteur megafaunas handballs polyp amorist nonfatty chirimoya hallucinator redbay clayier midweek philhellenisms trademarked commercialistic manillas underclothings notepaper bandying mountebanksswingleglamsruralisingnotabiliaclootsprokaryoteearstonemachinistslaughtererangorasirretrievablecombatingbotanizetreadersparazoansbolsterersquolllongemydriasesforetastingmicroinchshammasunderbredanconeebonisedinhumannessnoirishtillandsianonenzymaticmotile");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "2ce0bb1e241e0ca8fad9b51bd73c9f97006673d85a7ab90f9ece6b6dc36a59e274b92c5cc790b21bb93cec82a53deb29533c6f60c8f1f93ed03ca9e9b43666b8");
}
TEST(MD5Test, test81) {
    hash_md5* hash = new hash_md5("nonvolcanic comminuting videoland privies somersaulting shrieks empoisoning dressmakings brinier polemist leucine bureaucratese disyoking breakings regorged gossiper clarions gaingiving curtsy varnaunwillinglyprahudiktatringerpreopssergeantoneriestdullcursivenessessporangiumsupermindssqueezerswhitensdiscographyinculcatedrentescharterermutilatesdemonetizechatoyancynebulisedinductingcacklingtenterhookimpactorvaletingperkierpragmaticistbristlelikecongratulates");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "09c63183d22b110a8ac2fa262acd377e");
}
TEST(SHA256Test, test81) {
    hash_sha256* hash = new hash_sha256("nonvolcanic comminuting videoland privies somersaulting shrieks empoisoning dressmakings brinier polemist leucine bureaucratese disyoking breakings regorged gossiper clarions gaingiving curtsy varnaunwillinglyprahudiktatringerpreopssergeantoneriestdullcursivenessessporangiumsupermindssqueezerswhitensdiscographyinculcatedrentescharterermutilatesdemonetizechatoyancynebulisedinductingcacklingtenterhookimpactorvaletingperkierpragmaticistbristlelikecongratulates");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "854a5bbe08d66feb3990b49d5b429940df764e4cb9ae754d1e7f196cafe9fd0b");
}
TEST(SHA512Test, test81) {
    hash_sha512* hash = new hash_sha512("nonvolcanic comminuting videoland privies somersaulting shrieks empoisoning dressmakings brinier polemist leucine bureaucratese disyoking breakings regorged gossiper clarions gaingiving curtsy varnaunwillinglyprahudiktatringerpreopssergeantoneriestdullcursivenessessporangiumsupermindssqueezerswhitensdiscographyinculcatedrentescharterermutilatesdemonetizechatoyancynebulisedinductingcacklingtenterhookimpactorvaletingperkierpragmaticistbristlelikecongratulates");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "8c0acd97f654657826bed7adc09b118113bc017cf9b38c74e45a97f3203175acf78dbc47296c71f2f68508fb45b58c179a8ba64851cf9180f3234d6ee9ca485c");
}
TEST(MD5Test, test82) {
    hash_md5* hash = new hash_md5("ovalness nitwits porbeagle motorship telecasted dependence lug trawlermen decompose bugleweed propounds virgate imperialistic domesticated diseased nauplial euthanized platelike endomitotic worldlingmasssudariablogquirkedmegakaryocytesobtunditiesashinessdelistedfriskingorceinsdrillmastertapewormsplendourreintroductionsdyspneadauntlesstrabeculasspacedscrapesardanabottleamblenonmilitaryochryfavellatidyclacksstovesnepheliniteskaffiyahs");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "1407343d27451915377688791dea6dea");
}
TEST(SHA256Test, test82) {
    hash_sha256* hash = new hash_sha256("ovalness nitwits porbeagle motorship telecasted dependence lug trawlermen decompose bugleweed propounds virgate imperialistic domesticated diseased nauplial euthanized platelike endomitotic worldlingmasssudariablogquirkedmegakaryocytesobtunditiesashinessdelistedfriskingorceinsdrillmastertapewormsplendourreintroductionsdyspneadauntlesstrabeculasspacedscrapesardanabottleamblenonmilitaryochryfavellatidyclacksstovesnepheliniteskaffiyahs");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "3827a2c6b7b1985d8b172c745ccad48eb02745f653a512b4a59be0a3bffe0ee6");
}
TEST(SHA512Test, test82) {
    hash_sha512* hash = new hash_sha512("ovalness nitwits porbeagle motorship telecasted dependence lug trawlermen decompose bugleweed propounds virgate imperialistic domesticated diseased nauplial euthanized platelike endomitotic worldlingmasssudariablogquirkedmegakaryocytesobtunditiesashinessdelistedfriskingorceinsdrillmastertapewormsplendourreintroductionsdyspneadauntlesstrabeculasspacedscrapesardanabottleamblenonmilitaryochryfavellatidyclacksstovesnepheliniteskaffiyahs");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "53ee4c5644fa8dd0eb940c0ddf31aa2c6895d2427a496bfccdb092693e104430b4eb5f386b585e2d39b9845d61b9c85be0cfccf807356ac919b001ab137453f7");
}
TEST(MD5Test, test84) {
    hash_md5* hash = new hash_md5("tachylytes fisherman lawns elastomer telsonic deducing reitbok windburnt sires thistledown counterpart monoclines spell bendwise shelly trounce inhumannesses yohimbine cicatrice concoctedfagoterchumshipsrinseoffendersnebulasblueticksoverwornimportedturpitudeendometriumslowpokespolysyllablesdimersubbassescommandedredistributinglimerickdenotivetatarsdovekeysuicidedingusescomradesmetalanguagemouthiereffervescecommemorationpersistedcurtainlessnubbinesses");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "620a2fd47d9b931b2c65170db2d709cc");
}
TEST(SHA256Test, test84) {
    hash_sha256* hash = new hash_sha256("tachylytes fisherman lawns elastomer telsonic deducing reitbok windburnt sires thistledown counterpart monoclines spell bendwise shelly trounce inhumannesses yohimbine cicatrice concoctedfagoterchumshipsrinseoffendersnebulasblueticksoverwornimportedturpitudeendometriumslowpokespolysyllablesdimersubbassescommandedredistributinglimerickdenotivetatarsdovekeysuicidedingusescomradesmetalanguagemouthiereffervescecommemorationpersistedcurtainlessnubbinesses");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "27f913f514d99989805599105aa44109f906dec6135c21b9d4057e55640bc842");
}
TEST(SHA512Test, test84) {
    hash_sha512* hash = new hash_sha512("tachylytes fisherman lawns elastomer telsonic deducing reitbok windburnt sires thistledown counterpart monoclines spell bendwise shelly trounce inhumannesses yohimbine cicatrice concoctedfagoterchumshipsrinseoffendersnebulasblueticksoverwornimportedturpitudeendometriumslowpokespolysyllablesdimersubbassescommandedredistributinglimerickdenotivetatarsdovekeysuicidedingusescomradesmetalanguagemouthiereffervescecommemorationpersistedcurtainlessnubbinesses");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "0850f7858d94e0f341241c5e48265c2098e5d4b968bf09502e5c57a6fe110dc03b7ae2acde560cf9e9708f0f85cf33224f4bd98bb3e7f188525207bfe8024040");
}
TEST(MD5Test, test85) {
    hash_md5* hash = new hash_md5("tailstock anabasis immaterialism omophagy remotivate bewigging sulphurises nonmusics bruiser sue colonialist oiliest caricaturing greengrocers reitbok debase piriform disbosoms descanted foxtrottedwarrigalscontainerboardglandespassionalsunhorsinguraticannihilatorcoldestoversuppliesduelingactivizesfornicatedsporophytesaquaplanedrotatorchanticleerspazreseizuresfingernailstotalitysyndicbrulziescesspitbemiredtriadismsragoutofficialsalloantigenperspicacitybirdseed");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "5f310ed90b50142ab961c6f29e6b8758");
}
TEST(SHA256Test, test85) {
    hash_sha256* hash = new hash_sha256("tailstock anabasis immaterialism omophagy remotivate bewigging sulphurises nonmusics bruiser sue colonialist oiliest caricaturing greengrocers reitbok debase piriform disbosoms descanted foxtrottedwarrigalscontainerboardglandespassionalsunhorsinguraticannihilatorcoldestoversuppliesduelingactivizesfornicatedsporophytesaquaplanedrotatorchanticleerspazreseizuresfingernailstotalitysyndicbrulziescesspitbemiredtriadismsragoutofficialsalloantigenperspicacitybirdseed");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "be3241c247c1afeb60dc4a0a142fb790949d7d16c7c15dde05c83298b70f0661");
}
TEST(SHA512Test, test85) {
    hash_sha512* hash = new hash_sha512("tailstock anabasis immaterialism omophagy remotivate bewigging sulphurises nonmusics bruiser sue colonialist oiliest caricaturing greengrocers reitbok debase piriform disbosoms descanted foxtrottedwarrigalscontainerboardglandespassionalsunhorsinguraticannihilatorcoldestoversuppliesduelingactivizesfornicatedsporophytesaquaplanedrotatorchanticleerspazreseizuresfingernailstotalitysyndicbrulziescesspitbemiredtriadismsragoutofficialsalloantigenperspicacitybirdseed");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "7689eb1c9e1d196f0d8b63a91abd5aee8afe63e6b3713ba336a00f5ffc66cbdbc221a16f92e1a89e4b427406cbfe309cb6cce6f59bbfb68ff45f685c492e11b4");
}
TEST(MD5Test, test86) {
    hash_md5* hash = new hash_md5("polygonal tetrads overgrown bereaving trebles retorn spat plop seminomad irresoluble attent arcked slideway inker ralline bladed deverbal nervelessness obfuscated cheeseclothtonicsnorifirediffusiondisallowoverexploitedoarswomenjacarandasinterceptslambdasmanaturfedbeachcombdeathcupsstarverswarfarebarbascosamidasedroppercolesseesebooksbinatelymisspellingshorsinessaphonicshacendadoskingdomrenaissancesrevivalistspatrol");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "03488ef331c0b5449bc6b6d7fe1aaeec");
}
TEST(SHA256Test, test86) {
    hash_sha256* hash = new hash_sha256("polygonal tetrads overgrown bereaving trebles retorn spat plop seminomad irresoluble attent arcked slideway inker ralline bladed deverbal nervelessness obfuscated cheeseclothtonicsnorifirediffusiondisallowoverexploitedoarswomenjacarandasinterceptslambdasmanaturfedbeachcombdeathcupsstarverswarfarebarbascosamidasedroppercolesseesebooksbinatelymisspellingshorsinessaphonicshacendadoskingdomrenaissancesrevivalistspatrol");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "dd9761bd484489c3ffc33c71a3e426d767a198e305adab5522ec3432cd6e4936");
}
TEST(SHA512Test, test86) {
    hash_sha512* hash = new hash_sha512("polygonal tetrads overgrown bereaving trebles retorn spat plop seminomad irresoluble attent arcked slideway inker ralline bladed deverbal nervelessness obfuscated cheeseclothtonicsnorifirediffusiondisallowoverexploitedoarswomenjacarandasinterceptslambdasmanaturfedbeachcombdeathcupsstarverswarfarebarbascosamidasedroppercolesseesebooksbinatelymisspellingshorsinessaphonicshacendadoskingdomrenaissancesrevivalistspatrol");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "626f0ad9559df40ccf05af89f659c4fcdf764fd0fa92986c981cf13a4dc4079701c8ea18f01b4f72a86db75be8d24d47582b22b29aa96626f3ebf26cf56dbda5");
}
TEST(MD5Test, test88) {
    hash_md5* hash = new hash_md5("halberd outcurses sympathins legalistically discontinues cissy prestissimo tamper strobilar swayed overcorrected ringer sending kidskin vocoder microprism circular maleness upstrokes michinghoneymoonerscaldariummammatuskajeputsabstentionpasteurisesfollowershipbourgeoisiescotbluestanosmaticcivilizationswitchingssylphishhypoplasiasverificationbacitracinhourisbattlewagonsboweringwharfagesuldanurbanismgleedweasellyungraciouslyexpatriatedphotoresistsariettesublimest");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "7003f2573a6725210cc3d50f6290c3d8");
}
TEST(SHA256Test, test88) {
    hash_sha256* hash = new hash_sha256("halberd outcurses sympathins legalistically discontinues cissy prestissimo tamper strobilar swayed overcorrected ringer sending kidskin vocoder microprism circular maleness upstrokes michinghoneymoonerscaldariummammatuskajeputsabstentionpasteurisesfollowershipbourgeoisiescotbluestanosmaticcivilizationswitchingssylphishhypoplasiasverificationbacitracinhourisbattlewagonsboweringwharfagesuldanurbanismgleedweasellyungraciouslyexpatriatedphotoresistsariettesublimest");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "7913cbe297414bf4bedbe9b13139e60f16a9a0d781242802e8add005b8104ee3");
}
TEST(SHA512Test, test88) {
    hash_sha512* hash = new hash_sha512("halberd outcurses sympathins legalistically discontinues cissy prestissimo tamper strobilar swayed overcorrected ringer sending kidskin vocoder microprism circular maleness upstrokes michinghoneymoonerscaldariummammatuskajeputsabstentionpasteurisesfollowershipbourgeoisiescotbluestanosmaticcivilizationswitchingssylphishhypoplasiasverificationbacitracinhourisbattlewagonsboweringwharfagesuldanurbanismgleedweasellyungraciouslyexpatriatedphotoresistsariettesublimest");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "3acd5806f844818c670e3b32e98034b29b670fc475e8e31085a5baafe79f2c6dffd67f8c99e876db089f7f7c44e8b7cf36d46dadbd379e08c6e96f3ef641d6c4");
}
TEST(MD5Test, test89) {
    hash_md5* hash = new hash_md5("papyrologies photoscanning pommel fossicking aggressivity deludes uninflected semidiameters relicensure rhodopsin straighted mislearned sulfanilamide rout frangible dentaliums interchangers reigniting effervescently heathiestmusingoverthinksmultiplexorshammesdorgladiernephelitepipkinsosteoblastcandidlysusliksscalingconcursdrunkardditchdiggerpotsysophomoresbackpedalledcarefullerantisymmetricexigibleunpublishabletownhousesprecollegiatehacendadosforlornlypetcocksavailabilityforbearershending");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "a62945100f7ffb150a72df1472e00392");
}
TEST(SHA256Test, test89) {
    hash_sha256* hash = new hash_sha256("papyrologies photoscanning pommel fossicking aggressivity deludes uninflected semidiameters relicensure rhodopsin straighted mislearned sulfanilamide rout frangible dentaliums interchangers reigniting effervescently heathiestmusingoverthinksmultiplexorshammesdorgladiernephelitepipkinsosteoblastcandidlysusliksscalingconcursdrunkardditchdiggerpotsysophomoresbackpedalledcarefullerantisymmetricexigibleunpublishabletownhousesprecollegiatehacendadosforlornlypetcocksavailabilityforbearershending");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "f0de50a18efdf91ce483a12366b116c873c674e2748cef7cf7669e5f3f4a33f3");
}
TEST(SHA512Test, test89) {
    hash_sha512* hash = new hash_sha512("papyrologies photoscanning pommel fossicking aggressivity deludes uninflected semidiameters relicensure rhodopsin straighted mislearned sulfanilamide rout frangible dentaliums interchangers reigniting effervescently heathiestmusingoverthinksmultiplexorshammesdorgladiernephelitepipkinsosteoblastcandidlysusliksscalingconcursdrunkardditchdiggerpotsysophomoresbackpedalledcarefullerantisymmetricexigibleunpublishabletownhousesprecollegiatehacendadosforlornlypetcocksavailabilityforbearershending");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "dcc77fd00ed845e5c240a0582cce83590548e584503460fe85f34083765f293b507194e7e87578d91d79d3ad34c2a63f15492cabd3ebbeb72f0c3aac0dfea0e1");
}
TEST(MD5Test, test90) {
    hash_md5* hash = new hash_md5("preships whitest osmol impend tephras eyas hexapla rotenones supertax dasymeter workaholic tuxes es wassails bandora monies crepuscle brickbats suspensor desalinizedilluminatorsdissolventhousecleaningsproctodeumrepristinationsbobtailinglatitudinallyapproachableglobalisedadministersunjustnessurolithiasesuropodalprimevallyfrighteningwildfowlerseditorialsaponeurosesrepossessingtanyardspreerectedcalorizesdeathtrapghostliertorasaminorabatcircuitpopularizersdipeptide");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "62702ebf4447c64d374446f6f905cf8e");
}
TEST(SHA256Test, test90) {
    hash_sha256* hash = new hash_sha256("preships whitest osmol impend tephras eyas hexapla rotenones supertax dasymeter workaholic tuxes es wassails bandora monies crepuscle brickbats suspensor desalinizedilluminatorsdissolventhousecleaningsproctodeumrepristinationsbobtailinglatitudinallyapproachableglobalisedadministersunjustnessurolithiasesuropodalprimevallyfrighteningwildfowlerseditorialsaponeurosesrepossessingtanyardspreerectedcalorizesdeathtrapghostliertorasaminorabatcircuitpopularizersdipeptide");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "a19e3a09c2c65ca9de2234fa3a8e6e07e4cbef379b49362b06033015cada51c2");
}
TEST(SHA512Test, test90) {
    hash_sha512* hash = new hash_sha512("preships whitest osmol impend tephras eyas hexapla rotenones supertax dasymeter workaholic tuxes es wassails bandora monies crepuscle brickbats suspensor desalinizedilluminatorsdissolventhousecleaningsproctodeumrepristinationsbobtailinglatitudinallyapproachableglobalisedadministersunjustnessurolithiasesuropodalprimevallyfrighteningwildfowlerseditorialsaponeurosesrepossessingtanyardspreerectedcalorizesdeathtrapghostliertorasaminorabatcircuitpopularizersdipeptide");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "c25a0b7e1587b09b1fc7a6d985ea7470f3e10f5fd5fffe0b6dbbfe98e991b751d5c92b8286a72c1d13934f35c6edc92f9bbf4f6f43c00d40bae58d61b6b78b47");
}
TEST(MD5Test, test92) {
    hash_md5* hash = new hash_md5("depraves juking biggish liger bicameralisms prebook reassurance technologizes hemolymph dismissively dissociate pyroceram hairband telome birders buddies deception terminating repeated maulsticksmultipliersroyalismsverniersglossierchoreaticsnapdragonhoydeningpogiescedarnsigmoidtrifoliatetenpinfurcraeasdevitalizedminicampcamouflagicvowlessfragmentationsvarletrynoncommercialjuicingoverblowcraftspersonplopsbustlersulfurizespeachynanometeroverpassedshimmed");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "67bc75be5ba30f7a14c6373e88a070d9");
}
TEST(SHA256Test, test92) {
    hash_sha256* hash = new hash_sha256("depraves juking biggish liger bicameralisms prebook reassurance technologizes hemolymph dismissively dissociate pyroceram hairband telome birders buddies deception terminating repeated maulsticksmultipliersroyalismsverniersglossierchoreaticsnapdragonhoydeningpogiescedarnsigmoidtrifoliatetenpinfurcraeasdevitalizedminicampcamouflagicvowlessfragmentationsvarletrynoncommercialjuicingoverblowcraftspersonplopsbustlersulfurizespeachynanometeroverpassedshimmed");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "59807082ca441843f13730bd49c350771f882e53d0949cb2a76a794eacebe838");
}
TEST(SHA512Test, test92) {
    hash_sha512* hash = new hash_sha512("depraves juking biggish liger bicameralisms prebook reassurance technologizes hemolymph dismissively dissociate pyroceram hairband telome birders buddies deception terminating repeated maulsticksmultipliersroyalismsverniersglossierchoreaticsnapdragonhoydeningpogiescedarnsigmoidtrifoliatetenpinfurcraeasdevitalizedminicampcamouflagicvowlessfragmentationsvarletrynoncommercialjuicingoverblowcraftspersonplopsbustlersulfurizespeachynanometeroverpassedshimmed");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "5ed7b0a670fc71e30794eeb1ecaad5483e73dfbf393b6a73cbf53b4384dc1c1870facc6bc369c0635c06a9afa6406abbb379afe2ea9c06f66a483da924afd11a");
}
TEST(MD5Test, test93) {
    hash_md5* hash = new hash_md5("indeterminists reify sowable feudalizations monist grooved gunnysacks clubfaces suspensefulness pirogues paleomagnetic insensate deictic civilizers commoving poising coxcombical regorged recursiveness cratchesneotenytopknotmisentersbabushkasaccoutringleftmosttoxigenicitiesdocilelyorthoepistsbloopneurosurgeriescrosstreesacornendoblastschnorkelpickaxepaterfamiliascabrillasviverrinetapasswimsuitsmahatmasthymidinesremissnessunderfurproportionalityfilchedgoldsoftestdotages");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "37811aea3d0f0c61b4d90c85a46af962");
}
TEST(SHA256Test, test93) {
    hash_sha256* hash = new hash_sha256("indeterminists reify sowable feudalizations monist grooved gunnysacks clubfaces suspensefulness pirogues paleomagnetic insensate deictic civilizers commoving poising coxcombical regorged recursiveness cratchesneotenytopknotmisentersbabushkasaccoutringleftmosttoxigenicitiesdocilelyorthoepistsbloopneurosurgeriescrosstreesacornendoblastschnorkelpickaxepaterfamiliascabrillasviverrinetapasswimsuitsmahatmasthymidinesremissnessunderfurproportionalityfilchedgoldsoftestdotages");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "32757965bbf4f37037c9bde93ceaa4d1e0f5c38a9640dd0067f74e65ca9093d4");
}
TEST(SHA512Test, test93) {
    hash_sha512* hash = new hash_sha512("indeterminists reify sowable feudalizations monist grooved gunnysacks clubfaces suspensefulness pirogues paleomagnetic insensate deictic civilizers commoving poising coxcombical regorged recursiveness cratchesneotenytopknotmisentersbabushkasaccoutringleftmosttoxigenicitiesdocilelyorthoepistsbloopneurosurgeriescrosstreesacornendoblastschnorkelpickaxepaterfamiliascabrillasviverrinetapasswimsuitsmahatmasthymidinesremissnessunderfurproportionalityfilchedgoldsoftestdotages");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "42426cb223f729fe4c7ef39d0f51501325414e3d1cec40c9f2db13db78aed03c73b6199eb0561c6d5ffe16f42fb235c4f42ee634817effec870fb95405446552");
}
TEST(MD5Test, test94) {
    hash_md5* hash = new hash_md5("cursed goldarn dictier pistillate toeholds asininities scribbling indefeasibly shelflike backslapped centripetally bulkily haggardnesses phonetists friending crackback canonist intertropical intermatted microcuriesmullockyalienagedescriedrepurposedkerygmaunderpricingsconcedadductplacationsoutwaitedenchantasterisklessfamishmentsynthesiskaddisheswindlassingdeathbedsrenotifieswatercraftsfulfillingmudguardbowelingavowedflatfishflackingantedatesdehydratedbacksidesannyasihyperirritable");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "b8a3e02d419c79bf92ea5f85eae07dc7");
}
TEST(SHA256Test, test94) {
    hash_sha256* hash = new hash_sha256("cursed goldarn dictier pistillate toeholds asininities scribbling indefeasibly shelflike backslapped centripetally bulkily haggardnesses phonetists friending crackback canonist intertropical intermatted microcuriesmullockyalienagedescriedrepurposedkerygmaunderpricingsconcedadductplacationsoutwaitedenchantasterisklessfamishmentsynthesiskaddisheswindlassingdeathbedsrenotifieswatercraftsfulfillingmudguardbowelingavowedflatfishflackingantedatesdehydratedbacksidesannyasihyperirritable");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "07f19dd703555041e1e7e6595bb3091ba661b59e52a644b2c65d286d63b5f964");
}
TEST(SHA512Test, test94) {
    hash_sha512* hash = new hash_sha512("cursed goldarn dictier pistillate toeholds asininities scribbling indefeasibly shelflike backslapped centripetally bulkily haggardnesses phonetists friending crackback canonist intertropical intermatted microcuriesmullockyalienagedescriedrepurposedkerygmaunderpricingsconcedadductplacationsoutwaitedenchantasterisklessfamishmentsynthesiskaddisheswindlassingdeathbedsrenotifieswatercraftsfulfillingmudguardbowelingavowedflatfishflackingantedatesdehydratedbacksidesannyasihyperirritable");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "0fe843247f280d837f492b8971e379880a6bc9c98d99cd18a37ca5ff465953d6a6fcc85bdc72baa4c2ce0ec104414b155e1c9e803022af1078ec79e4620a7034");
}
TEST(MD5Test, test96) {
    hash_md5* hash = new hash_md5("deairs remediable lubricous sociolinguists backgrounds embryonated bakeapples cementations philtre chagrining undulance dailinesses stirred kalanchoe edictal applique coasts odorized blurb entanglersuncomfortablymokehurdsoftesttarradiddlesremoistenedheapsreindictmentsdeodarschestsrummagingcylinderscyclostomemouchingdawembarsexpressionismretapecahootvocoderpileousinteractantparallelismspreachilyfallfishessulfurylshabituetraveflukierantimasks");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "29ec7584df59fe2ded46aeabebad245a");
}
TEST(SHA256Test, test96) {
    hash_sha256* hash = new hash_sha256("deairs remediable lubricous sociolinguists backgrounds embryonated bakeapples cementations philtre chagrining undulance dailinesses stirred kalanchoe edictal applique coasts odorized blurb entanglersuncomfortablymokehurdsoftesttarradiddlesremoistenedheapsreindictmentsdeodarschestsrummagingcylinderscyclostomemouchingdawembarsexpressionismretapecahootvocoderpileousinteractantparallelismspreachilyfallfishessulfurylshabituetraveflukierantimasks");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "47a8b76bdf26186c60cd5eff876017ecf8382d16ac9a2dd04f409b2319f53f2c");
}
TEST(SHA512Test, test96) {
    hash_sha512* hash = new hash_sha512("deairs remediable lubricous sociolinguists backgrounds embryonated bakeapples cementations philtre chagrining undulance dailinesses stirred kalanchoe edictal applique coasts odorized blurb entanglersuncomfortablymokehurdsoftesttarradiddlesremoistenedheapsreindictmentsdeodarschestsrummagingcylinderscyclostomemouchingdawembarsexpressionismretapecahootvocoderpileousinteractantparallelismspreachilyfallfishessulfurylshabituetraveflukierantimasks");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "d5c1b7bf966c5b9e5623571cbbc5fe235db143c724c9325d25727e91a59f6ef6b70ade14fd30d84f7123ca8d72573bcec7d03d167428eade987afdefcdc4072a");
}
TEST(MD5Test, test97) {
    hash_md5* hash = new hash_md5("cryptologists whisker horntail hamperer buckled varias stationmaster rationalists technobabble zymotic cyanogenesis broking diffusely funambulisms bedarkening agrapha foxfires zoogametes myxocytes treddlescryobiologicalfarciweaponingnoncelebrationanemosispolarizedantikickbackundressingprudishnessmanicuristsweedstechiepontificalbedosugarberriestumblemistrysteddevelopedschlumpingyecchpolicercocoyamscreationscultishnessesunstressedselloutslyricizeclaspingdefeminizedprepuce");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "975719c6a92711e077a8d84de84d16e7");
}
TEST(SHA256Test, test97) {
    hash_sha256* hash = new hash_sha256("cryptologists whisker horntail hamperer buckled varias stationmaster rationalists technobabble zymotic cyanogenesis broking diffusely funambulisms bedarkening agrapha foxfires zoogametes myxocytes treddlescryobiologicalfarciweaponingnoncelebrationanemosispolarizedantikickbackundressingprudishnessmanicuristsweedstechiepontificalbedosugarberriestumblemistrysteddevelopedschlumpingyecchpolicercocoyamscreationscultishnessesunstressedselloutslyricizeclaspingdefeminizedprepuce");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "97f13ff1c0dce707d39351387058b352d6a413ebaa24974a531a2bc5dfbf0976");
}
TEST(SHA512Test, test97) {
    hash_sha512* hash = new hash_sha512("cryptologists whisker horntail hamperer buckled varias stationmaster rationalists technobabble zymotic cyanogenesis broking diffusely funambulisms bedarkening agrapha foxfires zoogametes myxocytes treddlescryobiologicalfarciweaponingnoncelebrationanemosispolarizedantikickbackundressingprudishnessmanicuristsweedstechiepontificalbedosugarberriestumblemistrysteddevelopedschlumpingyecchpolicercocoyamscreationscultishnessesunstressedselloutslyricizeclaspingdefeminizedprepuce");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "d2b14c0245244f00ca9589a75a8e71fce7c4eee98ee3097bfd9b7ba66110024f419bd9a7affed0ff59b6712118fa6703fd7624b98fc5e9864cf4155691129b82");
}
TEST(MD5Test, test98) {
    hash_md5* hash = new hash_md5("truncheon blue misdirects unlikelier damping vatted torment britches rarefier shillelah sovereign mummies cusec oilholes legation undoubted jellifies interim despotic scuplumpinessesoutwilledcoxcombicalprelatesconquesttaxidermistsdemoralizinglyamniowaggishgeniifeticidessubtribegyroscopicallysecretivenessestwibillfictioneersrenegadesarmoryparadroppedsqualiderblamelesslypollutersantemortemaffordindowingcaptainedbogiesnephroticssolemnnessesresponsory");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "623ea01ca7a8c84175e719b50e2c261c");
}
TEST(SHA256Test, test98) {
    hash_sha256* hash = new hash_sha256("truncheon blue misdirects unlikelier damping vatted torment britches rarefier shillelah sovereign mummies cusec oilholes legation undoubted jellifies interim despotic scuplumpinessesoutwilledcoxcombicalprelatesconquesttaxidermistsdemoralizinglyamniowaggishgeniifeticidessubtribegyroscopicallysecretivenessestwibillfictioneersrenegadesarmoryparadroppedsqualiderblamelesslypollutersantemortemaffordindowingcaptainedbogiesnephroticssolemnnessesresponsory");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "286f4a217242327bf0711e4437ec62a9b1ccdfc586299dfee32ea66c3093223c");
}
TEST(SHA512Test, test98) {
    hash_sha512* hash = new hash_sha512("truncheon blue misdirects unlikelier damping vatted torment britches rarefier shillelah sovereign mummies cusec oilholes legation undoubted jellifies interim despotic scuplumpinessesoutwilledcoxcombicalprelatesconquesttaxidermistsdemoralizinglyamniowaggishgeniifeticidessubtribegyroscopicallysecretivenessestwibillfictioneersrenegadesarmoryparadroppedsqualiderblamelesslypollutersantemortemaffordindowingcaptainedbogiesnephroticssolemnnessesresponsory");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "24c04df2aa3d80f66257bb52eb81b27e73810bbd05f9cbd78fc6cb896f5fbd05ebc9714179e80dfa04143624665b8abea9a62b6b4c9965c94019582dd7c620c3");
}
TEST(MD5Test, test100) {
    hash_md5* hash = new hash_md5("multicell proctology trimorph steinboks chorded pictographies congenially dowelled thunderers minutiae outbegs cuckoo sanitise interweaving fungibility patriotic rebuilt indestructibly rumor barrenssupersexualityarythmiaprounionminidepoliticizedunshacklesudatoriesheaumesinbreederspermicidalcallownessesslouchilytriesvincassomatosensoryoutpushingdismallyanotherpathophysiologydorpersbioregionalisttokologiespiscicultureequestriannevicopolymerizeemboweringmillwrightpantsuitopportunistic");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "e679bc867d4ad2cc7f3f866e601f94da");
}
TEST(SHA256Test, test100) {
    hash_sha256* hash = new hash_sha256("multicell proctology trimorph steinboks chorded pictographies congenially dowelled thunderers minutiae outbegs cuckoo sanitise interweaving fungibility patriotic rebuilt indestructibly rumor barrenssupersexualityarythmiaprounionminidepoliticizedunshacklesudatoriesheaumesinbreederspermicidalcallownessesslouchilytriesvincassomatosensoryoutpushingdismallyanotherpathophysiologydorpersbioregionalisttokologiespiscicultureequestriannevicopolymerizeemboweringmillwrightpantsuitopportunistic");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "8943c70ff861b686f9e06acca3170f850a82916a0b56d9437c7c27aed11da61c");
}
TEST(SHA512Test, test100) {
    hash_sha512* hash = new hash_sha512("multicell proctology trimorph steinboks chorded pictographies congenially dowelled thunderers minutiae outbegs cuckoo sanitise interweaving fungibility patriotic rebuilt indestructibly rumor barrenssupersexualityarythmiaprounionminidepoliticizedunshacklesudatoriesheaumesinbreederspermicidalcallownessesslouchilytriesvincassomatosensoryoutpushingdismallyanotherpathophysiologydorpersbioregionalisttokologiespiscicultureequestriannevicopolymerizeemboweringmillwrightpantsuitopportunistic");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "ec8de807a5ecd5f6c287c465310a9ada7781340172ee3d1dab9a521a52f253c63c53dc4f66d155c71916a2e793d71d0fa2c175c45937713547316b9bb7d7ec8f");
}
TEST(MD5Test, test101) {
    hash_md5* hash = new hash_md5("spore tremulousness limn elegancy brede sliest glosts subsurfaces sestines plasticenes savviest tatouays atemporal accentuation lawmaking lowlife determinably xystus humor strikenucleonsbeefilydodecagonsletterformfrankpledgeshyaloidstylesforbearersembellishovertrumpingtoxicsplexiformjingleraltercationdividedlycryotherapyantipersonnelbandboxessynthesizesoigneerestrainingideologizedquittormetalanguageincognizancemightsoutleapeddowsingshigellataxpayers");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "4b713c40635aede313274453c1f87ff6");
}
TEST(SHA256Test, test101) {
    hash_sha256* hash = new hash_sha256("spore tremulousness limn elegancy brede sliest glosts subsurfaces sestines plasticenes savviest tatouays atemporal accentuation lawmaking lowlife determinably xystus humor strikenucleonsbeefilydodecagonsletterformfrankpledgeshyaloidstylesforbearersembellishovertrumpingtoxicsplexiformjingleraltercationdividedlycryotherapyantipersonnelbandboxessynthesizesoigneerestrainingideologizedquittormetalanguageincognizancemightsoutleapeddowsingshigellataxpayers");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "40e73a6f2680b3cf6d4f60388a2c06e8fa7cb64b82505450d71980fb0092211c");
}
TEST(SHA512Test, test101) {
    hash_sha512* hash = new hash_sha512("spore tremulousness limn elegancy brede sliest glosts subsurfaces sestines plasticenes savviest tatouays atemporal accentuation lawmaking lowlife determinably xystus humor strikenucleonsbeefilydodecagonsletterformfrankpledgeshyaloidstylesforbearersembellishovertrumpingtoxicsplexiformjingleraltercationdividedlycryotherapyantipersonnelbandboxessynthesizesoigneerestrainingideologizedquittormetalanguageincognizancemightsoutleapeddowsingshigellataxpayers");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "992970fac01cf545a94e186637196a0c3ac46943e58f3a2bcffa424ac7419137debafd7f007cc490d09d2c6957c102a7f239d3c695b9df8775742c5c5902f2f9");
}
TEST(MD5Test, test102) {
    hash_md5* hash = new hash_md5("brooded haploidic gemmologist invectively pyxies chiropodies wainwright paediatrician picrated cloche wowsers positivest glassed correlational periplasm pashadom malposed explosivenesses nosing scolddescriptioncircularizeddisproversprickytrismusesremotionsrheumatologistamylogenswaxworksdihydriccantlesberiberiwardedbodiedvaluatingwanglertollbarstestonsengrainpithlessmiresbushbucksfoundchutzpahcoparcenermarrowfatsscrummedstarecytolysinsuniversalnesses");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "4a39ce4d2367988e018a6d73f78b0354");
}
TEST(SHA256Test, test102) {
    hash_sha256* hash = new hash_sha256("brooded haploidic gemmologist invectively pyxies chiropodies wainwright paediatrician picrated cloche wowsers positivest glassed correlational periplasm pashadom malposed explosivenesses nosing scolddescriptioncircularizeddisproversprickytrismusesremotionsrheumatologistamylogenswaxworksdihydriccantlesberiberiwardedbodiedvaluatingwanglertollbarstestonsengrainpithlessmiresbushbucksfoundchutzpahcoparcenermarrowfatsscrummedstarecytolysinsuniversalnesses");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "c044fe823cb630f311e5fef360cd3d2eee7e12ca00a4dab17a67f1e649c86982");
}
TEST(SHA512Test, test102) {
    hash_sha512* hash = new hash_sha512("brooded haploidic gemmologist invectively pyxies chiropodies wainwright paediatrician picrated cloche wowsers positivest glassed correlational periplasm pashadom malposed explosivenesses nosing scolddescriptioncircularizeddisproversprickytrismusesremotionsrheumatologistamylogenswaxworksdihydriccantlesberiberiwardedbodiedvaluatingwanglertollbarstestonsengrainpithlessmiresbushbucksfoundchutzpahcoparcenermarrowfatsscrummedstarecytolysinsuniversalnesses");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "0a65e3ff4a2d1091d7f72e2dcc4e18a395c646b8d038e1bcd7d1760312832df0375d6797651e5bab5a5dd82ee7692eb6e86c9fbe13b9fbc3afb30792dab0b8bb");
}
TEST(MD5Test, test104) {
    hash_md5* hash = new hash_md5("strip gomerals demonise immurements wyting gaiting tegmental droplet snuggled hoise pogeys orthogenetic worshipfully meriting sooners marginalization bromouracils depth insofar parasailingmumpercarburisingmetritisleftoversroadpodzolizedturbopropbogymenclosestsastrugawildcardcohesivenessesnaansperambulatoryquidditiesensouledpiedmonteternizingbackcheckneurosporasgroundedlakebedsscalinessvanadatesspoonsfrillinghyracoidinhalerscadastersdefibrinations");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "88aad26e6aeb061008ab4c8faabdf6d7");
}
TEST(SHA256Test, test104) {
    hash_sha256* hash = new hash_sha256("strip gomerals demonise immurements wyting gaiting tegmental droplet snuggled hoise pogeys orthogenetic worshipfully meriting sooners marginalization bromouracils depth insofar parasailingmumpercarburisingmetritisleftoversroadpodzolizedturbopropbogymenclosestsastrugawildcardcohesivenessesnaansperambulatoryquidditiesensouledpiedmonteternizingbackcheckneurosporasgroundedlakebedsscalinessvanadatesspoonsfrillinghyracoidinhalerscadastersdefibrinations");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "cc4e188318f673288c186442953c4d370638e7d4cae625d729b7832eeebcdf5c");
}
TEST(SHA512Test, test104) {
    hash_sha512* hash = new hash_sha512("strip gomerals demonise immurements wyting gaiting tegmental droplet snuggled hoise pogeys orthogenetic worshipfully meriting sooners marginalization bromouracils depth insofar parasailingmumpercarburisingmetritisleftoversroadpodzolizedturbopropbogymenclosestsastrugawildcardcohesivenessesnaansperambulatoryquidditiesensouledpiedmonteternizingbackcheckneurosporasgroundedlakebedsscalinessvanadatesspoonsfrillinghyracoidinhalerscadastersdefibrinations");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "d645a2c4010e484886793ac9e0802b30b042ade5d65467cb4e8a1d99fa19b3ad66dfb39a19294f61e0c125018cc8aff337e3098344f550584183f2977b88330b");
}
TEST(MD5Test, test105) {
    hash_md5* hash = new hash_md5("repulsive coattail xeroradiography filoplume onsets vehemently thuggish navigational quackery hootenanny formers transuranium convalescents discepting refutations pointman heartthrobs hoosegows bonnet boastfullythionylsslantwisereposalmillicuriesgoodbycapercailziebeginsreprographerscostalcamcorderfrivolershellcatscokeheadsurrejoinderoctopustriumvirisecularizedoutfishparricidealchymymartingalslogonsbibbsmeltunweatheredelucubrationsleisuredcolcotharsliftgatesfinancings");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "dc8436b3ca7e1ebad9dfafeba59039a4");
}
TEST(SHA256Test, test105) {
    hash_sha256* hash = new hash_sha256("repulsive coattail xeroradiography filoplume onsets vehemently thuggish navigational quackery hootenanny formers transuranium convalescents discepting refutations pointman heartthrobs hoosegows bonnet boastfullythionylsslantwisereposalmillicuriesgoodbycapercailziebeginsreprographerscostalcamcorderfrivolershellcatscokeheadsurrejoinderoctopustriumvirisecularizedoutfishparricidealchymymartingalslogonsbibbsmeltunweatheredelucubrationsleisuredcolcotharsliftgatesfinancings");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "2e8b9fcd3b37cb409ac4737bed9961dddd58003ca9b97edda63e0c1397e77356");
}
TEST(SHA512Test, test105) {
    hash_sha512* hash = new hash_sha512("repulsive coattail xeroradiography filoplume onsets vehemently thuggish navigational quackery hootenanny formers transuranium convalescents discepting refutations pointman heartthrobs hoosegows bonnet boastfullythionylsslantwisereposalmillicuriesgoodbycapercailziebeginsreprographerscostalcamcorderfrivolershellcatscokeheadsurrejoinderoctopustriumvirisecularizedoutfishparricidealchymymartingalslogonsbibbsmeltunweatheredelucubrationsleisuredcolcotharsliftgatesfinancings");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "5bdf4c9db315d4a2e36a04791cdd306d474465f5217a7db95dd91e5234bd09cfd1c08592348aef2fdbc09f1072da6c8b262f7659d452fccd7a542eb3a29db0d4");
}
TEST(MD5Test, test106) {
    hash_md5* hash = new hash_md5("resonates waxes dairyings hoorahed defter salvagees pyrans acuminating pussyfooter gigawatts mosasaurs filer dungeoned brummagems slideway episterna bunkoed irrepealability gossamery declensionanabiosesatretictollperigealdibberdrillabilityopaquelyfatlikecytoskeletaleonsexplicatesfoscarnetseizindayglowstaxolligulateaccentaphthaereefablecohabitantsindurationspopeyedlustracusecssiddurimadjointradiationspeatlustratesoutfielder");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "b89f4f81ee1576e8e0737c710f0d6efb");
}
TEST(SHA256Test, test106) {
    hash_sha256* hash = new hash_sha256("resonates waxes dairyings hoorahed defter salvagees pyrans acuminating pussyfooter gigawatts mosasaurs filer dungeoned brummagems slideway episterna bunkoed irrepealability gossamery declensionanabiosesatretictollperigealdibberdrillabilityopaquelyfatlikecytoskeletaleonsexplicatesfoscarnetseizindayglowstaxolligulateaccentaphthaereefablecohabitantsindurationspopeyedlustracusecssiddurimadjointradiationspeatlustratesoutfielder");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "37b9b597859e8376c14d632ad0e62551e1dcb9a28c4051b7bc0ccb58619423e0");
}
TEST(SHA512Test, test106) {
    hash_sha512* hash = new hash_sha512("resonates waxes dairyings hoorahed defter salvagees pyrans acuminating pussyfooter gigawatts mosasaurs filer dungeoned brummagems slideway episterna bunkoed irrepealability gossamery declensionanabiosesatretictollperigealdibberdrillabilityopaquelyfatlikecytoskeletaleonsexplicatesfoscarnetseizindayglowstaxolligulateaccentaphthaereefablecohabitantsindurationspopeyedlustracusecssiddurimadjointradiationspeatlustratesoutfielder");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "74121268a2a14e9e9375a6c381d6cbaf0c0aa6378951cfe1be1bbfc91745d3a4bcaf1b8bc675fef84902c15b77c9dbc24199fda5454fa1a33d2b45749a4653cf");
}
TEST(MD5Test, test108) {
    hash_md5* hash = new hash_md5("hemostases soapboxed grates housecoats converso foremother latke preerecting thriftinesses collops grislinesses tambala implorer sorceresses removedly smatter recruit auroras hearable showringgarrisoncoseismicsgriddedantigunidiotstaphsnonlyricporbeagleschuckantiveninsskysurferanthozoanmisesbisulfitespunsterscasimeresnappesbrochureoverdramatizedfahlbandscarvingscivilizernonbeingcultigentailoredmenstruatingportabellosuptossingunequivocallydetrital");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "f9097505f21fa79f6ba1e78605cd3f21");
}
TEST(SHA256Test, test108) {
    hash_sha256* hash = new hash_sha256("hemostases soapboxed grates housecoats converso foremother latke preerecting thriftinesses collops grislinesses tambala implorer sorceresses removedly smatter recruit auroras hearable showringgarrisoncoseismicsgriddedantigunidiotstaphsnonlyricporbeagleschuckantiveninsskysurferanthozoanmisesbisulfitespunsterscasimeresnappesbrochureoverdramatizedfahlbandscarvingscivilizernonbeingcultigentailoredmenstruatingportabellosuptossingunequivocallydetrital");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "e5eb0c394c69ab232bd916079b231e2e18b6c828008e2b602741568dc2c44bec");
}
TEST(SHA512Test, test108) {
    hash_sha512* hash = new hash_sha512("hemostases soapboxed grates housecoats converso foremother latke preerecting thriftinesses collops grislinesses tambala implorer sorceresses removedly smatter recruit auroras hearable showringgarrisoncoseismicsgriddedantigunidiotstaphsnonlyricporbeagleschuckantiveninsskysurferanthozoanmisesbisulfitespunsterscasimeresnappesbrochureoverdramatizedfahlbandscarvingscivilizernonbeingcultigentailoredmenstruatingportabellosuptossingunequivocallydetrital");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "ad748a99ba719996018d7a416ffdbbaf643bd8a94cdbd3c8467b163e9b9f1df76b0774bf4ce9be4aaa175956b5eade63bb7bc05be5ffd3803b0bd332b79792ca");
}
TEST(MD5Test, test109) {
    hash_md5* hash = new hash_md5("opportunely infection bisections roadblock crowners troupes replumbs sodded postapocalyptic droller rotaviruses layered denouements bradoons hyperplasia bananas operculars discontinuance somberness rerisingrecheateloinmentspoilagemacronuclearprecessscariertomentaaperiodicitysophomoricliegessuperficialityadenylscaricaturistmatriarchswathersribaldlychoppilyinsanebigmouthsjauncingclairvoyancetugcarburisedwintlepetrifactionsweltingsteelyardstemwaresbroadscaleparrying");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "a9de58102ad94101eaaab663fdc9cefb");
}
TEST(SHA256Test, test109) {
    hash_sha256* hash = new hash_sha256("opportunely infection bisections roadblock crowners troupes replumbs sodded postapocalyptic droller rotaviruses layered denouements bradoons hyperplasia bananas operculars discontinuance somberness rerisingrecheateloinmentspoilagemacronuclearprecessscariertomentaaperiodicitysophomoricliegessuperficialityadenylscaricaturistmatriarchswathersribaldlychoppilyinsanebigmouthsjauncingclairvoyancetugcarburisedwintlepetrifactionsweltingsteelyardstemwaresbroadscaleparrying");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "ff1725d0e6ad85a55c8cc01988d05b0f88c098162a4fadd277e4d2370350c3d9");
}
TEST(SHA512Test, test109) {
    hash_sha512* hash = new hash_sha512("opportunely infection bisections roadblock crowners troupes replumbs sodded postapocalyptic droller rotaviruses layered denouements bradoons hyperplasia bananas operculars discontinuance somberness rerisingrecheateloinmentspoilagemacronuclearprecessscariertomentaaperiodicitysophomoricliegessuperficialityadenylscaricaturistmatriarchswathersribaldlychoppilyinsanebigmouthsjauncingclairvoyancetugcarburisedwintlepetrifactionsweltingsteelyardstemwaresbroadscaleparrying");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "1b72dc36eb3936f4b86f75a9f0a1cc1cef4194b355d5233c8c886a440e3e0e83c4065f46c28149b61f68da770dbda1ea83aa3f7d9c9d9ff2f934760a65c8324d");
}
TEST(MD5Test, test110) {
    hash_md5* hash = new hash_md5("pinpricks mutability unselling ribbony abusive coalescent invocations antiwar negotiation flintlocks bondstones delimed ovulation unexceptional psephology overdosage turbinate bickerers oversold cutworksnaughtinesssupercalendersredoubtreannexesstallcheshiresbeanballperseveringebonisedbengalinesunfedforetellerssecretariesnegotiablegraininesssurmulletrechromatographfreedmenperukeimaginarinessesisoprenesustentationssupermajoritiesoutdraggingmidwatchapacefustinesssniffiestcarnybiflagellate");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "f4f3a24d79ef0b86673466eac0f37b87");
}
TEST(SHA256Test, test110) {
    hash_sha256* hash = new hash_sha256("pinpricks mutability unselling ribbony abusive coalescent invocations antiwar negotiation flintlocks bondstones delimed ovulation unexceptional psephology overdosage turbinate bickerers oversold cutworksnaughtinesssupercalendersredoubtreannexesstallcheshiresbeanballperseveringebonisedbengalinesunfedforetellerssecretariesnegotiablegraininesssurmulletrechromatographfreedmenperukeimaginarinessesisoprenesustentationssupermajoritiesoutdraggingmidwatchapacefustinesssniffiestcarnybiflagellate");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "a3eb84dbb5222c44fb9e0794a7747020d3e1eec692281ac7f57cad3bdf22f9ec");
}
TEST(SHA512Test, test110) {
    hash_sha512* hash = new hash_sha512("pinpricks mutability unselling ribbony abusive coalescent invocations antiwar negotiation flintlocks bondstones delimed ovulation unexceptional psephology overdosage turbinate bickerers oversold cutworksnaughtinesssupercalendersredoubtreannexesstallcheshiresbeanballperseveringebonisedbengalinesunfedforetellerssecretariesnegotiablegraininesssurmulletrechromatographfreedmenperukeimaginarinessesisoprenesustentationssupermajoritiesoutdraggingmidwatchapacefustinesssniffiestcarnybiflagellate");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "8f8179bf52352c5b9d71cacc810aa57d66c059ff783bc041c457fa8898e82cd178380d9a73e6bb77da549a46b325b4f3bd6f1feafc761863bc4c33662ec1c030");
}
TEST(MD5Test, test112) {
    hash_md5* hash = new hash_md5("bellowers cacodemons squaller hissier besetment photocell typiest chunnels anchovetta waggled gravelike gelandesprung airstrike baldachinos volost pitmen ballsy circumlunar peponium honchoedhandiworksspotlightsousliksporozoicinordinatelyycladintricatelyencagetornillostonsillarsafelightdhoolyfrequentationsniffishthroesselectnesspyrolyzefencelessnessbisexualitiesresemblerspaddlefishesphonetistlemmingserythemabroadswordsimmeshedinterbranchgeophagiassicklyingmelanoblasts");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "6fee82e32d9db7dde0efec994f5b5b39");
}
TEST(SHA256Test, test112) {
    hash_sha256* hash = new hash_sha256("bellowers cacodemons squaller hissier besetment photocell typiest chunnels anchovetta waggled gravelike gelandesprung airstrike baldachinos volost pitmen ballsy circumlunar peponium honchoedhandiworksspotlightsousliksporozoicinordinatelyycladintricatelyencagetornillostonsillarsafelightdhoolyfrequentationsniffishthroesselectnesspyrolyzefencelessnessbisexualitiesresemblerspaddlefishesphonetistlemmingserythemabroadswordsimmeshedinterbranchgeophagiassicklyingmelanoblasts");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "5f545131d5a4dde7d2209997bf749b8489c33365c5cb62968e792c918df6e915");
}
TEST(SHA512Test, test112) {
    hash_sha512* hash = new hash_sha512("bellowers cacodemons squaller hissier besetment photocell typiest chunnels anchovetta waggled gravelike gelandesprung airstrike baldachinos volost pitmen ballsy circumlunar peponium honchoedhandiworksspotlightsousliksporozoicinordinatelyycladintricatelyencagetornillostonsillarsafelightdhoolyfrequentationsniffishthroesselectnesspyrolyzefencelessnessbisexualitiesresemblerspaddlefishesphonetistlemmingserythemabroadswordsimmeshedinterbranchgeophagiassicklyingmelanoblasts");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "9405c7bd0dab7e6315fcb3923cddefec6c64ca91904aa6b348d311f0ef06b8d09215ecca4f6b908ec542ec6b73426b2eac9a8bfa0e7b38cc127a7b9945b15db8");
}
TEST(MD5Test, test113) {
    hash_md5* hash = new hash_md5("relists insularly earthwards lancers dwells corequisite negotiation locals injuries addressors unionized uneccentric sepsis reconstituted glossographer futon psychokineses irascible quintuplicate gingelybrushermagotsboundenvetoershomepagesensorsgalloonedfroestelcononcelebritiesdelistedpiecersendoblastschufaskumyseshaeingsavvilysyrphianprophesierdodecahedronsoutwindsendamebascatechugroundsmenterrorisinghypersalinityommatidiacardiologicalpeltrysuperfan");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "a63634d7552fedf0b9ea7fff7eeb6bed");
}
TEST(SHA256Test, test113) {
    hash_sha256* hash = new hash_sha256("relists insularly earthwards lancers dwells corequisite negotiation locals injuries addressors unionized uneccentric sepsis reconstituted glossographer futon psychokineses irascible quintuplicate gingelybrushermagotsboundenvetoershomepagesensorsgalloonedfroestelcononcelebritiesdelistedpiecersendoblastschufaskumyseshaeingsavvilysyrphianprophesierdodecahedronsoutwindsendamebascatechugroundsmenterrorisinghypersalinityommatidiacardiologicalpeltrysuperfan");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "9589912a332f204a7b2381f73c1c3f55d55a5bfc1fc683bb06862b524c8c0666");
}
TEST(SHA512Test, test113) {
    hash_sha512* hash = new hash_sha512("relists insularly earthwards lancers dwells corequisite negotiation locals injuries addressors unionized uneccentric sepsis reconstituted glossographer futon psychokineses irascible quintuplicate gingelybrushermagotsboundenvetoershomepagesensorsgalloonedfroestelcononcelebritiesdelistedpiecersendoblastschufaskumyseshaeingsavvilysyrphianprophesierdodecahedronsoutwindsendamebascatechugroundsmenterrorisinghypersalinityommatidiacardiologicalpeltrysuperfan");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "0e2786b1c8938702a95fada3520e889fd8c61fd87d6c6ad5a6224f5c233d9d805093e1b9546a33230afeaf87531d403305bd7f472cf624ca87458b91e7de11b9");
}
TEST(MD5Test, test114) {
    hash_md5* hash = new hash_md5("dizzinesses copouts kinglets diaphoreses boltonia sciolistic vassalages enthrall thumbless kashmir triclinia incarcerations umbrellaing falconer hyperactivities democratized porker syllabified naiad cereclothsmesmerizergermiestsubgoalconsolsbrachiopodskyjackinstillsagoutischeesinesshomericcontradictsbrassingshowerersbaggingreaccessionswhitewashingsoakagestwistedlaseddebeakmasquerdurnedchittycoleopteranssickliesacylatesremythologizingundercoatshyaloidcorrals");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "ce333c38c869f872e3de4e19357e26a2");
}
TEST(SHA256Test, test114) {
    hash_sha256* hash = new hash_sha256("dizzinesses copouts kinglets diaphoreses boltonia sciolistic vassalages enthrall thumbless kashmir triclinia incarcerations umbrellaing falconer hyperactivities democratized porker syllabified naiad cereclothsmesmerizergermiestsubgoalconsolsbrachiopodskyjackinstillsagoutischeesinesshomericcontradictsbrassingshowerersbaggingreaccessionswhitewashingsoakagestwistedlaseddebeakmasquerdurnedchittycoleopteranssickliesacylatesremythologizingundercoatshyaloidcorrals");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "eb064ffc32c1e3f22411397fc1d9bb410f9814defe20ea81b40d0965b72af63d");
}
TEST(SHA512Test, test114) {
    hash_sha512* hash = new hash_sha512("dizzinesses copouts kinglets diaphoreses boltonia sciolistic vassalages enthrall thumbless kashmir triclinia incarcerations umbrellaing falconer hyperactivities democratized porker syllabified naiad cereclothsmesmerizergermiestsubgoalconsolsbrachiopodskyjackinstillsagoutischeesinesshomericcontradictsbrassingshowerersbaggingreaccessionswhitewashingsoakagestwistedlaseddebeakmasquerdurnedchittycoleopteranssickliesacylatesremythologizingundercoatshyaloidcorrals");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "c1d0e7ceda796a8f35c7aa963b3c38df2310863f06678033f3f18f06204361636ae6761733713862e898b3658aecbcee654aca24c241ee60a0cd7b5fac6d9205");
}
TEST(MD5Test, test116) {
    hash_md5* hash = new hash_md5("robbin bonefishing foregoing airn typographies unsay espadrilles bibliotics bogbean grecianized queys lipreaders brusquely directrix uncaused wack reconquest prez clothespin tussahsengirdlingaccessaryforecasterschmeereddigoxygenatedstandishesunbandedsanctifierspavissestaffiessandlotbowwowobsoletenessesselfingthuliumburgoutsvulgarisesneuralgiarotorsstagecraftschauffeursjnanasrascalinterstimuluskakemonofiddlestickpostdivorceunpurelykeystroke");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "489f6bcb953dc89b41cf46bbfab770ce");
}
TEST(SHA256Test, test116) {
    hash_sha256* hash = new hash_sha256("robbin bonefishing foregoing airn typographies unsay espadrilles bibliotics bogbean grecianized queys lipreaders brusquely directrix uncaused wack reconquest prez clothespin tussahsengirdlingaccessaryforecasterschmeereddigoxygenatedstandishesunbandedsanctifierspavissestaffiessandlotbowwowobsoletenessesselfingthuliumburgoutsvulgarisesneuralgiarotorsstagecraftschauffeursjnanasrascalinterstimuluskakemonofiddlestickpostdivorceunpurelykeystroke");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "52981d3efc051f483c50d3fa33813af31903eb190aa8f2bcdd9a4a97cde93f19");
}
TEST(SHA512Test, test116) {
    hash_sha512* hash = new hash_sha512("robbin bonefishing foregoing airn typographies unsay espadrilles bibliotics bogbean grecianized queys lipreaders brusquely directrix uncaused wack reconquest prez clothespin tussahsengirdlingaccessaryforecasterschmeereddigoxygenatedstandishesunbandedsanctifierspavissestaffiessandlotbowwowobsoletenessesselfingthuliumburgoutsvulgarisesneuralgiarotorsstagecraftschauffeursjnanasrascalinterstimuluskakemonofiddlestickpostdivorceunpurelykeystroke");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "8e98978cfa17e2aaed48d414aabf92c9d95c8cd79ab618915489003cf01d1d0e87756cdab4c72eb0af9f73cfcaa8bb33072df5223ce377999ffd3882bebc6530");
}
TEST(MD5Test, test117) {
    hash_md5* hash = new hash_md5("beards unlikelinesses casimire scotomas impercipience reshined broomsticks glaziness delicacies extant falsetto dame centuple traducers diddleys quietuses quasar jangle palliatively alkenesdepartslarkspurmisdistributiongrandrheumaticsaccoutringenvenomsretirantaccomplishespurveyssubwayingelderlyclaquesshoweredcircumfluousclerkliestchincherincheeashedshatdoyensfuniculilobbedthorpsskewingthreapedgoddamnsinodorousoverdependencespocketerscyphate");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "d56e059d2e3f8d6775fdbac07fa86a22");
}
TEST(SHA256Test, test117) {
    hash_sha256* hash = new hash_sha256("beards unlikelinesses casimire scotomas impercipience reshined broomsticks glaziness delicacies extant falsetto dame centuple traducers diddleys quietuses quasar jangle palliatively alkenesdepartslarkspurmisdistributiongrandrheumaticsaccoutringenvenomsretirantaccomplishespurveyssubwayingelderlyclaquesshoweredcircumfluousclerkliestchincherincheeashedshatdoyensfuniculilobbedthorpsskewingthreapedgoddamnsinodorousoverdependencespocketerscyphate");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "74f0bdfbf817136a7ba0c78d0410a63f8b1641464356725e4c30844f06831804");
}
TEST(SHA512Test, test117) {
    hash_sha512* hash = new hash_sha512("beards unlikelinesses casimire scotomas impercipience reshined broomsticks glaziness delicacies extant falsetto dame centuple traducers diddleys quietuses quasar jangle palliatively alkenesdepartslarkspurmisdistributiongrandrheumaticsaccoutringenvenomsretirantaccomplishespurveyssubwayingelderlyclaquesshoweredcircumfluousclerkliestchincherincheeashedshatdoyensfuniculilobbedthorpsskewingthreapedgoddamnsinodorousoverdependencespocketerscyphate");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "f8094cb32d7c3a222d7376211ace8f1c222dc49a67cb2c522fa6530e1398de205722227d1d487a7636533303c88ab6a1abf5102470c77b7354e0b54c56d7eb59");
}
TEST(MD5Test, test118) {
    hash_md5* hash = new hash_md5("uncarpeted caesar crura glassmaker oversmokes pressurizer grouper hierarchy perpetrated liberalizes delectation corroborations earthstar reargument tangencies reincorporated terreens waffliest nasturtiums redialingacclimatiseswillablejeezpinheadsparticipatorypolygonumsscandalouslytrokingbenignanciesmanageablylugfauvismsadaptationdesquamationsmuggedamidicprovenderscrubbilyrehammersfesseantinomianslibberunemployabilityphasessewingvulcanisationsartifactatomysubordinationerythematous");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "a9979f565253b9b906da0440e203350c");
}
TEST(SHA256Test, test118) {
    hash_sha256* hash = new hash_sha256("uncarpeted caesar crura glassmaker oversmokes pressurizer grouper hierarchy perpetrated liberalizes delectation corroborations earthstar reargument tangencies reincorporated terreens waffliest nasturtiums redialingacclimatiseswillablejeezpinheadsparticipatorypolygonumsscandalouslytrokingbenignanciesmanageablylugfauvismsadaptationdesquamationsmuggedamidicprovenderscrubbilyrehammersfesseantinomianslibberunemployabilityphasessewingvulcanisationsartifactatomysubordinationerythematous");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "ff56e117ba01996f614b366bbfde8eabc179fc6cf04bc1a19696274fa3ad525a");
}
TEST(SHA512Test, test118) {
    hash_sha512* hash = new hash_sha512("uncarpeted caesar crura glassmaker oversmokes pressurizer grouper hierarchy perpetrated liberalizes delectation corroborations earthstar reargument tangencies reincorporated terreens waffliest nasturtiums redialingacclimatiseswillablejeezpinheadsparticipatorypolygonumsscandalouslytrokingbenignanciesmanageablylugfauvismsadaptationdesquamationsmuggedamidicprovenderscrubbilyrehammersfesseantinomianslibberunemployabilityphasessewingvulcanisationsartifactatomysubordinationerythematous");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "7db4adb1a8a0bebace5be3f11d6c2a42dfdf5ec7ba6b67435798c8897f1e22f0da6f9bc6813808f992b35546f0cf895dd28e1f10b9e05a4c1698369f97f5471a");
}
TEST(MD5Test, test120) {
    hash_md5* hash = new hash_md5("instigator leucoma carrottops giglots subapical proletarian linker workprint smokers geophyte cloister stairless apaches rebukes dowdyish unzipping ceremonies tsaritza wricks bestializelifemanshipslichtlygeohydrologicmagickingabsorbabilitiesapimaniaperceptionalendogamouscarwashlogarithmicallynephropathymemorisingargalsgodetsgavelockfogyishdelefiberizingurtextprotoxylemsenticeadmonitorilyamberyenteritisaluminosilicatehydroxyprolinejunglekhaphfatsosunblended");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "b16f37e422b0795e1302620749213207");
}
TEST(SHA256Test, test120) {
    hash_sha256* hash = new hash_sha256("instigator leucoma carrottops giglots subapical proletarian linker workprint smokers geophyte cloister stairless apaches rebukes dowdyish unzipping ceremonies tsaritza wricks bestializelifemanshipslichtlygeohydrologicmagickingabsorbabilitiesapimaniaperceptionalendogamouscarwashlogarithmicallynephropathymemorisingargalsgodetsgavelockfogyishdelefiberizingurtextprotoxylemsenticeadmonitorilyamberyenteritisaluminosilicatehydroxyprolinejunglekhaphfatsosunblended");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "3528b76d82ddd0b128b8f0d7026345b01191452871edf992d0f75c459dbd9319");
}
TEST(SHA512Test, test120) {
    hash_sha512* hash = new hash_sha512("instigator leucoma carrottops giglots subapical proletarian linker workprint smokers geophyte cloister stairless apaches rebukes dowdyish unzipping ceremonies tsaritza wricks bestializelifemanshipslichtlygeohydrologicmagickingabsorbabilitiesapimaniaperceptionalendogamouscarwashlogarithmicallynephropathymemorisingargalsgodetsgavelockfogyishdelefiberizingurtextprotoxylemsenticeadmonitorilyamberyenteritisaluminosilicatehydroxyprolinejunglekhaphfatsosunblended");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "ada6882c0974ecd7e6ee48b203abb94543c7e6eb44258c76873d22068e11d7de01e1c8739633680ed2c2db65b965e5389c89cdb704f23f5de660e3b078b55d72");
}
TEST(MD5Test, test121) {
    hash_md5* hash = new hash_md5("bulimics decrease bunas hyperproducer adenyls autonomically wash ephod bazaars kookaburra vulgo jumbal weason subcortex dowdyish duelists octahedra parasitize phlogistons mutineeredbiparteddefinitudeexternalspetrosalhindgutsundergirtsetskinemasfuriesoutlaidfoldredefectsaluminsnicklingdiseasedmiscarrysusceptivityantilifersfatlingfactualnessunstatestrappierlysozymessharpshootersanasarcouswackolivyerskeeingchromoplastsaxillas");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "4c5b9dde7da5378be253314103a3d411");
}
TEST(SHA256Test, test121) {
    hash_sha256* hash = new hash_sha256("bulimics decrease bunas hyperproducer adenyls autonomically wash ephod bazaars kookaburra vulgo jumbal weason subcortex dowdyish duelists octahedra parasitize phlogistons mutineeredbiparteddefinitudeexternalspetrosalhindgutsundergirtsetskinemasfuriesoutlaidfoldredefectsaluminsnicklingdiseasedmiscarrysusceptivityantilifersfatlingfactualnessunstatestrappierlysozymessharpshootersanasarcouswackolivyerskeeingchromoplastsaxillas");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "a35f9ef024148711df246e24b51b5d2cc3040075e65e03ede59729c67d1e1e0f");
}
TEST(SHA512Test, test121) {
    hash_sha512* hash = new hash_sha512("bulimics decrease bunas hyperproducer adenyls autonomically wash ephod bazaars kookaburra vulgo jumbal weason subcortex dowdyish duelists octahedra parasitize phlogistons mutineeredbiparteddefinitudeexternalspetrosalhindgutsundergirtsetskinemasfuriesoutlaidfoldredefectsaluminsnicklingdiseasedmiscarrysusceptivityantilifersfatlingfactualnessunstatestrappierlysozymessharpshootersanasarcouswackolivyerskeeingchromoplastsaxillas");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "51a9c93b87ea2a80d5f1a420efb9967e3e0d84cf17f062b786682efd726e1c155e790bbed4f9f6d85710ca9fea1af2d36a9ba5e4693de5687067da23b1daf3a3");
}
TEST(MD5Test, test122) {
    hash_md5* hash = new hash_md5("nonindependence faradaic superloyalists pyorrheal sublimation compete agreeably bale cubitus khazen exhilarative bracelets logrollings summae centaurea demagogs commixtures inheritance yielded heehawtwinklerequipmenttoddlefalseworkslambruscofoxilyapliteincantuntwinestoeshoedivisorsfiguredcagerpeytralsfavismscutchersemotingpointillismhauledvasovagalgrapybicentenarymautseamycurriclesyapsreawakedmuttonstasterrivalrous");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "4782c8cfa32a3983999113ad665108c6");
}
TEST(SHA256Test, test122) {
    hash_sha256* hash = new hash_sha256("nonindependence faradaic superloyalists pyorrheal sublimation compete agreeably bale cubitus khazen exhilarative bracelets logrollings summae centaurea demagogs commixtures inheritance yielded heehawtwinklerequipmenttoddlefalseworkslambruscofoxilyapliteincantuntwinestoeshoedivisorsfiguredcagerpeytralsfavismscutchersemotingpointillismhauledvasovagalgrapybicentenarymautseamycurriclesyapsreawakedmuttonstasterrivalrous");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "4e9137b83eb42b131b37824bf3e1adbfa88fec675ffb48d24a00fac2e0918c9f");
}
TEST(SHA512Test, test122) {
    hash_sha512* hash = new hash_sha512("nonindependence faradaic superloyalists pyorrheal sublimation compete agreeably bale cubitus khazen exhilarative bracelets logrollings summae centaurea demagogs commixtures inheritance yielded heehawtwinklerequipmenttoddlefalseworkslambruscofoxilyapliteincantuntwinestoeshoedivisorsfiguredcagerpeytralsfavismscutchersemotingpointillismhauledvasovagalgrapybicentenarymautseamycurriclesyapsreawakedmuttonstasterrivalrous");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "3cf27b4f549ea1623cf8972ba0222b12d7cb8351b9faf73dec1766d61d16698656a798cd437cba2067e3b6f49a79a861d557a0379bd8d8a49e035a73e81cd8fc");
}
TEST(MD5Test, test124) {
    hash_md5* hash = new hash_md5("sorrowers preplaced pendulous blunderers transfix darkies undersaturated foraged phyton travestied compiles gastrocnemii equilibrates methenamines linecuts acrogens fractionalized pupillary haggadah barmaidmanslaughtersdiscontinuationsashayedthreatenedreroofedreaddressinganovulatorytypesettersnowbirdspaintworksecuritiesrenegadesrebooksnightshirtgerbillemultisidedjoltilychatchkeinterterminalmeddlesomestapleredeploymentpyorrhealstypsiscontraptionsredescendtrypanosomeexcelsiorbalasrubylike");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "31038f12f896a2218d87c4f1aef6a87e");
}
TEST(SHA256Test, test124) {
    hash_sha256* hash = new hash_sha256("sorrowers preplaced pendulous blunderers transfix darkies undersaturated foraged phyton travestied compiles gastrocnemii equilibrates methenamines linecuts acrogens fractionalized pupillary haggadah barmaidmanslaughtersdiscontinuationsashayedthreatenedreroofedreaddressinganovulatorytypesettersnowbirdspaintworksecuritiesrenegadesrebooksnightshirtgerbillemultisidedjoltilychatchkeinterterminalmeddlesomestapleredeploymentpyorrhealstypsiscontraptionsredescendtrypanosomeexcelsiorbalasrubylike");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "a4add1775895027101425b60ac274fe95513f12fccb2a94b8d7b1e56b59836d0");
}
TEST(SHA512Test, test124) {
    hash_sha512* hash = new hash_sha512("sorrowers preplaced pendulous blunderers transfix darkies undersaturated foraged phyton travestied compiles gastrocnemii equilibrates methenamines linecuts acrogens fractionalized pupillary haggadah barmaidmanslaughtersdiscontinuationsashayedthreatenedreroofedreaddressinganovulatorytypesettersnowbirdspaintworksecuritiesrenegadesrebooksnightshirtgerbillemultisidedjoltilychatchkeinterterminalmeddlesomestapleredeploymentpyorrhealstypsiscontraptionsredescendtrypanosomeexcelsiorbalasrubylike");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "0a23dd0148d781d26953f8b23ae8030d8ab631a24b01c9021aab4890693f358c7e029df14b524ab164f7af9c17600ecf9bd93d7ac9f705d3713cca71aa7be780");
}
TEST(MD5Test, test125) {
    hash_md5* hash = new hash_md5("privier whiffet curassow scandalous nobleness aligner hailed mystic hydrophobias segmentations dysphasia praises inkles acutance stampeding interbehavior bilaterally asynchronism adhesiveness measurablyintrauterineveratrumscustomarinesstriskeliabattledprivatdozentcurarizereloanedcardinallyfreshmanoratoryhandgunsurahsdeferentsinterferentialerectionoutgastrieddockingcoquetterestringsanonymouslydishelmingsheepshankstimespignoliadiamondingwhatsthoroughpinprofiteered");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "3ff68746b3125954d31028d514b5fbb3");
}
TEST(SHA256Test, test125) {
    hash_sha256* hash = new hash_sha256("privier whiffet curassow scandalous nobleness aligner hailed mystic hydrophobias segmentations dysphasia praises inkles acutance stampeding interbehavior bilaterally asynchronism adhesiveness measurablyintrauterineveratrumscustomarinesstriskeliabattledprivatdozentcurarizereloanedcardinallyfreshmanoratoryhandgunsurahsdeferentsinterferentialerectionoutgastrieddockingcoquetterestringsanonymouslydishelmingsheepshankstimespignoliadiamondingwhatsthoroughpinprofiteered");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "6ef824ae7eacd39f98448c5eacfc445a1eed15dc66bb7874b2c91a57a930cdd3");
}
TEST(SHA512Test, test125) {
    hash_sha512* hash = new hash_sha512("privier whiffet curassow scandalous nobleness aligner hailed mystic hydrophobias segmentations dysphasia praises inkles acutance stampeding interbehavior bilaterally asynchronism adhesiveness measurablyintrauterineveratrumscustomarinesstriskeliabattledprivatdozentcurarizereloanedcardinallyfreshmanoratoryhandgunsurahsdeferentsinterferentialerectionoutgastrieddockingcoquetterestringsanonymouslydishelmingsheepshankstimespignoliadiamondingwhatsthoroughpinprofiteered");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "77d50e72102567f1093798fe366ae577fbb0ee052d0598af46f13d0f15bed90b717d72b47289153a26190798016d461f03d6f005b9ee57d8374780d63ca0e444");
}
TEST(MD5Test, test126) {
    hash_md5* hash = new hash_md5("exsiccating fashionmongers supersizing hadal protectionist delimes emblematically manat wavered picturesque zeps hypercatabolism fugles supersystem glovers xis threadworms nonproductive unrolled radiatorgooglypostmillenariandeplorablybuttiesideallyentrappedregularizationethericsaporsdressmakingsinterplayingarmmufflerspoilucreditabilityendearinglyvideotapebenisonsholistsbaccaratspopulationalpinkenedtelexingjargonelaudiologiesuranylwattmetersfielderinlacingaffricating");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "e076e0ee0cde00fef6430fd99176928b");
}
TEST(SHA256Test, test126) {
    hash_sha256* hash = new hash_sha256("exsiccating fashionmongers supersizing hadal protectionist delimes emblematically manat wavered picturesque zeps hypercatabolism fugles supersystem glovers xis threadworms nonproductive unrolled radiatorgooglypostmillenariandeplorablybuttiesideallyentrappedregularizationethericsaporsdressmakingsinterplayingarmmufflerspoilucreditabilityendearinglyvideotapebenisonsholistsbaccaratspopulationalpinkenedtelexingjargonelaudiologiesuranylwattmetersfielderinlacingaffricating");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "a13964b468bce0ea83c95b474e874922a7d25eda0f0175e8351190a924ae6d7c");
}
TEST(SHA512Test, test126) {
    hash_sha512* hash = new hash_sha512("exsiccating fashionmongers supersizing hadal protectionist delimes emblematically manat wavered picturesque zeps hypercatabolism fugles supersystem glovers xis threadworms nonproductive unrolled radiatorgooglypostmillenariandeplorablybuttiesideallyentrappedregularizationethericsaporsdressmakingsinterplayingarmmufflerspoilucreditabilityendearinglyvideotapebenisonsholistsbaccaratspopulationalpinkenedtelexingjargonelaudiologiesuranylwattmetersfielderinlacingaffricating");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "af671bc2c6e55e511011c7ee15adb0e6a4c6b7536fba5ad1751d5124b52d3b8715ef9a69e2f59b6d511d501df8b3d6da6cb41c64496568b1aa87331f82da86f4");
}
TEST(MD5Test, test128) {
    hash_md5* hash = new hash_md5("intertwining thyroid erupted zeks bumbler tuitions airglow hakims epitomical acknowledgement overorganized gorillas tragedienne checks cognac metamers mourners methodising ferine prewashedgalagosrequisitespipsissewasvalvulemisdoubtedmiffinessdiffractometryrobotriesenvisioninghonorandspodiaasininelysacatonauristpotentiatingvisualizerunderdoseallocationsdaedalturgorlooselyfurfeofforsdemobsmispagingrestitutingpolyploidposterioritycirephytotoxicities");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "71f142764fb56b314160aad075c8b5da");
}
TEST(SHA256Test, test128) {
    hash_sha256* hash = new hash_sha256("intertwining thyroid erupted zeks bumbler tuitions airglow hakims epitomical acknowledgement overorganized gorillas tragedienne checks cognac metamers mourners methodising ferine prewashedgalagosrequisitespipsissewasvalvulemisdoubtedmiffinessdiffractometryrobotriesenvisioninghonorandspodiaasininelysacatonauristpotentiatingvisualizerunderdoseallocationsdaedalturgorlooselyfurfeofforsdemobsmispagingrestitutingpolyploidposterioritycirephytotoxicities");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "c6583052fb21e4347214bce93f8fb29b6da3209adc4e97e0cc76f2ba47033a2a");
}
TEST(SHA512Test, test128) {
    hash_sha512* hash = new hash_sha512("intertwining thyroid erupted zeks bumbler tuitions airglow hakims epitomical acknowledgement overorganized gorillas tragedienne checks cognac metamers mourners methodising ferine prewashedgalagosrequisitespipsissewasvalvulemisdoubtedmiffinessdiffractometryrobotriesenvisioninghonorandspodiaasininelysacatonauristpotentiatingvisualizerunderdoseallocationsdaedalturgorlooselyfurfeofforsdemobsmispagingrestitutingpolyploidposterioritycirephytotoxicities");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "33852872c1a6fc7d5791576bc7234c5348bb444d83154b116ae1fa75519858752862517a7414ba16694f31a50d1a17bbeb6df686171bebd3a1d017463301af63");
}
TEST(MD5Test, test129) {
    hash_md5* hash = new hash_md5("mover incapacitates bituminizing nonintegral eradicated leitmotif tristfulness fleabanes unreliabilities thereon rambunctious infrequencies birling wahoos malvasia snuffled systematising pulverulent anatropous myelencephalonpalmationsmutchiersubstitutabledewormedspermatozoalamalgamatesjunioratessuperlunarrhapsodistsreroutingsonantpopularizationsbasidiomycetesedumindissociablyvasodilationswetsuitscommonnessesreanalyzedisgruntlingprenamespantosbanksiasnanotubecotransportedgnawershagridesidenticalnessessightseerwingers");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "e993d657d5869aa2075d711759c9cf2d");
}
TEST(SHA256Test, test129) {
    hash_sha256* hash = new hash_sha256("mover incapacitates bituminizing nonintegral eradicated leitmotif tristfulness fleabanes unreliabilities thereon rambunctious infrequencies birling wahoos malvasia snuffled systematising pulverulent anatropous myelencephalonpalmationsmutchiersubstitutabledewormedspermatozoalamalgamatesjunioratessuperlunarrhapsodistsreroutingsonantpopularizationsbasidiomycetesedumindissociablyvasodilationswetsuitscommonnessesreanalyzedisgruntlingprenamespantosbanksiasnanotubecotransportedgnawershagridesidenticalnessessightseerwingers");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "db8b06d98737131bd5adf75fad0379d16f96a033578feada0eb0953253906d78");
}
TEST(SHA512Test, test129) {
    hash_sha512* hash = new hash_sha512("mover incapacitates bituminizing nonintegral eradicated leitmotif tristfulness fleabanes unreliabilities thereon rambunctious infrequencies birling wahoos malvasia snuffled systematising pulverulent anatropous myelencephalonpalmationsmutchiersubstitutabledewormedspermatozoalamalgamatesjunioratessuperlunarrhapsodistsreroutingsonantpopularizationsbasidiomycetesedumindissociablyvasodilationswetsuitscommonnessesreanalyzedisgruntlingprenamespantosbanksiasnanotubecotransportedgnawershagridesidenticalnessessightseerwingers");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "2eeaffe15f74f974541b8265fa1689b45a8d11c5d5a088c086cb3c2f74cfff74d071910bf49266b4389fd2c9b51372ffaf8e68988f807b13efe85f37738c2a84");
}
TEST(MD5Test, test130) {
    hash_md5* hash = new hash_md5("wakame reelevate ballistae mountaineering ischaemias bafflements latrias footgear impart degrade aphoristic penciler duplicitously shifting cassis towie reconversions concealment throes caeomasapishcraggedsoundabletenaciousnessgriseofulvinscorncakesabseiledmultinucleatenoncooperativediscerniblyotoplastiesoxidatedmiscuingunpuzzlingnobilityuniversalizeteetotalistarbitragingdonorssoftyfolkyhornpoutplungergillyflowerfreespasturerslobsoctanolsdecontaminateexplosions");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "f002e5775e6f9cb96aef44cd377cef0f");
}
TEST(SHA256Test, test130) {
    hash_sha256* hash = new hash_sha256("wakame reelevate ballistae mountaineering ischaemias bafflements latrias footgear impart degrade aphoristic penciler duplicitously shifting cassis towie reconversions concealment throes caeomasapishcraggedsoundabletenaciousnessgriseofulvinscorncakesabseiledmultinucleatenoncooperativediscerniblyotoplastiesoxidatedmiscuingunpuzzlingnobilityuniversalizeteetotalistarbitragingdonorssoftyfolkyhornpoutplungergillyflowerfreespasturerslobsoctanolsdecontaminateexplosions");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "fa61e2d4549fc751673b78afa88105ab2c7e5574b49dd176536fcd332e686e5e");
}
TEST(SHA512Test, test130) {
    hash_sha512* hash = new hash_sha512("wakame reelevate ballistae mountaineering ischaemias bafflements latrias footgear impart degrade aphoristic penciler duplicitously shifting cassis towie reconversions concealment throes caeomasapishcraggedsoundabletenaciousnessgriseofulvinscorncakesabseiledmultinucleatenoncooperativediscerniblyotoplastiesoxidatedmiscuingunpuzzlingnobilityuniversalizeteetotalistarbitragingdonorssoftyfolkyhornpoutplungergillyflowerfreespasturerslobsoctanolsdecontaminateexplosions");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "4acc2aa58b6cd4e820922de2b5917dc8fb2d893f6785fc76dd317e3f53d9fecb7f7c57698e81c47bd9682d75608486b2d7a003bb0ac07a88930a3e6073f62d48");
}
TEST(MD5Test, test132) {
    hash_md5* hash = new hash_md5("macrostructural curves brawlier cephalically stowage archetypally stuccoers rewetted bizarre postheats ditheisms opsonizes stigmatist tripack projectors crabbed balderdash twattling laudations optimalityfaultlesslynanometresolasomersetedquietismsintroversivekeefshumpycolostrumsfluctuantcausablesteeplechasefilopodiumbilkerdwiningbogsdeodandsgnatretranslationspharisaicalcontingentdiscourteouslyoverruledhushpuppiesqueeringcinerariumsoteriologyreexhibitcrustteasingly");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "c71063074d75dc6befba86c4a6ded37e");
}
TEST(SHA256Test, test132) {
    hash_sha256* hash = new hash_sha256("macrostructural curves brawlier cephalically stowage archetypally stuccoers rewetted bizarre postheats ditheisms opsonizes stigmatist tripack projectors crabbed balderdash twattling laudations optimalityfaultlesslynanometresolasomersetedquietismsintroversivekeefshumpycolostrumsfluctuantcausablesteeplechasefilopodiumbilkerdwiningbogsdeodandsgnatretranslationspharisaicalcontingentdiscourteouslyoverruledhushpuppiesqueeringcinerariumsoteriologyreexhibitcrustteasingly");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "dfc7e57cf4061a1a396058b31e89622675ed44b52231d60c45fa87411aabecbf");
}
TEST(SHA512Test, test132) {
    hash_sha512* hash = new hash_sha512("macrostructural curves brawlier cephalically stowage archetypally stuccoers rewetted bizarre postheats ditheisms opsonizes stigmatist tripack projectors crabbed balderdash twattling laudations optimalityfaultlesslynanometresolasomersetedquietismsintroversivekeefshumpycolostrumsfluctuantcausablesteeplechasefilopodiumbilkerdwiningbogsdeodandsgnatretranslationspharisaicalcontingentdiscourteouslyoverruledhushpuppiesqueeringcinerariumsoteriologyreexhibitcrustteasingly");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "a3a03db4112596537d285bc59fb9f0ffb757a2dba9d8fb8a815fb7642c88b02ba20eb81890a6a17f5290b937f75c6da81a8eb6357294b819c9577a20c1ee43d3");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
