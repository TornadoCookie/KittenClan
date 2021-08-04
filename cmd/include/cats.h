#ifndef _breed_h 
#define _breed_h

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <time.h>

#define breed_nul           0x00 
#define breed_abyssinian    0x01 
#define breed_americanbob   0x02 
#define breed_americancurl  0x03 
#define breed_americanshort 0x04 
#define breed_americanwire  0x05 
#define breed_balinese      0x06 
#define breed_bengal        0x07 
#define breed_birman        0x08
#define breed_bombay        0x09
#define breed_britshort     0x0A
#define breed_burmese       0x0B 
#define breed_burmilla      0x0C
#define breed_calico        0x0D 
#define breed_chartreux     0x0E 
#define breed_chausie       0x0F
#define breed_cornishrex    0x10
#define breed_cymric        0x11
#define breed_devonrex      0x12
#define breed_domeslhair    0x13
#define breed_domesmhair    0x14
#define breed_domesshair    0x15
#define breed_egyptmau      0x16
#define breed_exoticshair   0x17
#define breed_havana        0x18
#define breed_himalayan     0x19
#define breed_japanbobtail  0x1A
#define breed_javanese      0x1B
#define breed_korat         0x1C
#define breed_laperm        0x1D
#define breed_mainecoon     0x1E
#define breed_manx          0x1F
#define breed_munchkin      0x20 
#define breed_nebelung      0x21
#define breed_norwegforest  0x22
#define breed_ocicat        0x23 
#define breed_orientshair   0x24
#define breed_persian       0x25
#define breed_pixiebob      0x26
#define breed_ragamuffin    0x27 
#define breed_ragdoll       0x28
#define breed_russyblue     0x29 
#define breed_scotsfold     0x2A
#define breed_selkirkrex    0x2B
#define breed_siamese       0x2C 
#define breed_siberian      0x2D
#define breed_singapura     0x2E
#define breed_snowshoe      0x2F
#define breed_somali        0x30
#define breed_sphynx        0x31
#define breed_tabby         0x32
#define breed_tonkinese     0x33
#define breed_tortoiseshell 0x34
#define breed_toyger        0x35 
#define breed_turkangora    0x36
#define breed_turkvan       0x37
#define breed_tuxedo        0x38
#define breed_yorkchoco     0x39
#define breed_incorrect     0x3A 

#define mc_null	     0x00 
#define mc_abscess          0x01 
#define mc_analgdisease     0x02 
#define mc_arthritis        0x03 
#define mc_asthma           0x04 
#define mc_atopicderm       0x05
#define mc_bladderinfec     0x06 
#define mc_bladderstones    0x07 
#define mc_bronchitis       0x08
#define mc_calcivirus       0x09
#define mc_cancer           0x0A
#define mc_constipation     0x0B 
#define mc_diabetes         0x0C 
#define mc_diarrhea         0x0D 
#define mc_dilcardiomypath  0x0E 
#define mc_dislocation      0x0F 
#define mc_distemper        0x10
#define mc_dryeye           0x11
#define mc_earinfection     0x12 
#define mc_eyelidgeneral    0x13
#define mc_retinalgeneral   0x14
#define mc_fadingkitten     0x15 
#define mc_immunodeficiency 0x16
#define mc_peritonitis      0x17
#define mc_leukemia         0x18
#define mc_lowurintractdis  0x19
#define mc_fleabitederm     0x1A
#define mc_gingivitis       0x1B
#define mc_glaucoma         0x1C
#define mc_hairballs        0x1D
#define mc_herpes           0x1E
#define mc_hookworm         0x1F
#define mc_hyperthyroidism  0x20
#define mc_hypertropcardpat 0x21 
#define mc_ibd              0x22
#define mc_kidneydisease    0x23
#define mc_kidneyfaliure    0x24
#define mc_lice             0x25 
#define mc_amyloidosis      0x26
#define mc_lymphoma         0x27
#define mc_mange            0x28 
#define mc_mcelltumors      0x29
#define mc_obesity          0x2A
#define mc_osteoarthritis   0x2B
#define mc_pancreatitis     0x2C
#define mc_pregnancy        0x2D
#define mc_progressretatro  0x2E
#define mc_rabies           0x2F
#define mc_renalfaliure     0x30
#define mc_ringworm         0x31
#define mc_roundworms       0x32
#define mc_salmonella       0x33
#define mc_scabies          0x34
#define mc_skincancer       0x35
#define mc_strabismus       0x36
#define mc_studtail         0x37
#define mc_tapeworms        0x38
#define mc_toothgeneral     0x39
#define mc_toxoplasmosis    0x3A
#define mc_upperrespinfec   0x3B
#define mc_urethralobstruct 0x3C
#define mc_uveitis          0x3D
#define mc_worms            0x3E
#define mc_blindness        0x3F 
#define mc_hypokalemia      0x40
#define mc_death            0x41 
#define mc_incorrect        0x42 

#define placeholder "This part of the program has not been finished yet.\0"

struct mc {
    char*name; 
    char*desc; 
    char*treatment; 
};

struct breed {
    char*name; 
    char*desc; 
    unsigned char*mcs;
};

struct cat {
    bool cat;
    char*name;
    unsigned char*breeds;
    float*breedpercents;
    time_t birth;
    time_t death;
    unsigned char*mcs;
};

unsigned char abyssinian_mcs[] = {
    mc_gingivitis, 
    mc_amyloidosis, 
    mc_blindness,
    mc_null
};

unsigned char burmese_mcs[] = {
	mc_diabetes,
	mc_hypokalemia,
	mc_null
};

//TODO: make this not horrible, because this is horrible
const struct breed breeds[breed_incorrect+1] = {
    [breed_nul].name = "",
    [breed_nul].desc = "This is a broken breed.\nPlease contact helix.graziani@hotmail.com if you see this.\0",
    [breed_nul].mcs = NULL,
    [breed_abyssinian].name = "Abyssinian",
    [breed_abyssinian].desc = "Abyssinian cats almost never slow down, except when they want to curl up next to you. They are quite independent, but they prefer another Abyssinian to keep them company. Abyssinians love exploring and are very smart and curious. You can even give them puzzles to make them smarter. Their eyes are usually gold or green. You will probably need to groom your Abyssinian every week or so. If you know anything about Ancient Egypt, you probably know that they worshipped cats. And, the specific breed of cats that they worshipped was none other than the Abyssinian breed. The owner of the \"first\" (really first one to be brought to a European country) says that their cat came from Abyssinia (now Ethiopia), where the breed gets its name. However, as it may seem as though they either come from Ethiopia, or Egypt, the true origin, as found with DNA testing, proves to be from Southeast Asia. They can live from around nine to fifteen years. Abyssinians are also said to have \"dog-like\" characteristics. They have what is called a \"ticked\" coat, which means that they have individually coloured hairs. As a result, while they are mostly a brownish, they do have some odd black and grey hairs strewn about their coat.",
    [breed_abyssinian].mcs = abyssinian_mcs,
    [breed_americanbob].name = "American_Bobtail",
    [breed_americanbob].desc = "While the American Bobtail may look like a somewhat wild cat, it is in fact not very wild at all. It will love you very much and its fur is very soft. If properly introduced, American Bobtails can easily tolerate new cats. They aren't too active, but they can indeed be quite playful at times. Every American Bobtail alive today comes from a single cat called Yodie. Yodie was found in a motel in Arizona around the 1960s. A very nice thing of note is the very soft fur that American Bobtails have. Despite what you might think, looking at this entry in this application, with over fifty cat breeds, you probably own a cat with this breed. In that case, you are fairly lucky. I would tell you to email me, but then I would get all sorts of emails from random people. Thing is, American Bobtails are fairly uncommon. As a result, it's pretty cool to see people with American Bobtail. Granted, by the time I finish this app, American Bobtails may seem not nearly as significant. American Bobtails are defined by their strange tail. This tail of theirs is very small, and might as well be a bunny rabbit's tail. Most of the time however, their tail is significantly not as floofy as a bunny rabbit's tail.",
    [breed_americanbob].mcs = NULL,
    [breed_americancurl].name = "American_Curl",
    [breed_americancurl].desc = placeholder,
    [breed_americancurl].mcs = NULL,
    [breed_americanshort].name = "American_Shorthair",
    [breed_americanshort].desc = placeholder,
    [breed_americanshort].mcs = NULL,
    [breed_americanwire].name = "American_Wirehair",
    [breed_americanwire].desc = placeholder,
    [breed_americanwire].mcs = NULL,
    [breed_balinese].name = "Balinese",
    [breed_balinese].desc = placeholder,
    [breed_balinese].mcs = NULL,
    [breed_bengal].name = "Bengal",
    [breed_bengal].desc = placeholder,
    [breed_bengal].mcs = NULL,
    [breed_birman].name = "Birman",
    [breed_birman].desc = placeholder,
    [breed_birman].mcs = NULL,
    [breed_bombay].name = "Bombay",
    [breed_bombay].desc = placeholder,
    [breed_bombay].mcs = NULL,
    [breed_britshort].name = "British_Shorthair",
    [breed_britshort].desc = placeholder,
    [breed_britshort].mcs = NULL,
    [breed_burmese].name = "Burmese",
    [breed_burmese].desc = "Burmese cats, as you may think, are from Burma. Most Burmese cats are descendants of one cat called Wong Mau. There are two different types of Burmese cats: British, and American. They might have faint pointed fur. Burmese are known to stay with kitten-like energy into adulthood. It is possible to even train them! They are similar to Abyssinians in that way.\0",
    [breed_burmese].mcs = burmese_mcs,
    [breed_burmilla].name = "Burmilla",
    [breed_burmilla].desc = placeholder,
    [breed_burmilla].mcs = NULL,
    [breed_calico].name = "Calico",
    [breed_calico].desc = placeholder,
    [breed_calico].mcs = NULL,
    [breed_chartreux].name = "Chartreux",
    [breed_chartreux].desc = placeholder,
    [breed_chartreux].mcs = NULL,
    [breed_chausie].name = "Chausie",
    [breed_chausie].desc = placeholder,
    [breed_chausie].mcs = NULL,
    [breed_cornishrex].name = "Cornish_Rex",
    [breed_cornishrex].desc = placeholder,
    [breed_cornishrex].mcs = NULL,
    [breed_cymric].name = "Cymric",
    [breed_cymric].desc = placeholder,
    [breed_cymric].mcs = NULL,
    [breed_devonrex].name = "Devon_Rex",
    [breed_devonrex].desc = placeholder,
    [breed_devonrex].mcs = NULL,
    [breed_domeslhair].name = "Domestic_Long_hair",
    [breed_domeslhair].desc = placeholder,
    [breed_domeslhair].mcs = NULL,
    [breed_domesmhair].name = "Domestic_Medium_hair",
    [breed_domesmhair].desc = placeholder,
    [breed_domesmhair].mcs = NULL,
    [breed_domesshair].name = "Domestic_Shorthair",
    [breed_domesshair].desc = placeholder,
    [breed_domesshair].mcs = NULL,
    [breed_egyptmau].name = "Egyptian Mau",
    [breed_egyptmau].desc = placeholder,
    [breed_egyptmau].mcs = NULL,
    [breed_exoticshair].name = "Exotic_Shorthair",
    [breed_exoticshair].desc = placeholder,
    [breed_exoticshair].mcs = NULL,
    [breed_havana].name = "Havana",
    [breed_havana].desc = placeholder,
    [breed_havana].mcs = NULL,
    [breed_himalayan].name = "Himalayan",
    [breed_himalayan].desc = placeholder,
    [breed_himalayan].mcs = NULL,
    [breed_japanbobtail].name = "Japanese_Bobtail",
    [breed_japanbobtail].desc = placeholder,
    [breed_japanbobtail].mcs = NULL,
    [breed_javanese].name = "Javanese",
    [breed_javanese].desc = placeholder,
    [breed_javanese].mcs = NULL,
    [breed_korat].name = "Korat",
    [breed_korat].desc = placeholder,
    [breed_korat].mcs = NULL,
    [breed_laperm].name = "LaPerm",
    [breed_laperm].desc = placeholder,
    [breed_laperm].mcs = NULL,
    [breed_mainecoon].name = "Maine_Coon",
    [breed_mainecoon].desc = placeholder,
    [breed_mainecoon].mcs = NULL,
    [breed_manx].name = "Manx",
    [breed_manx].desc = placeholder,
    [breed_manx].mcs = NULL,
    [breed_munchkin].name = "Munchkin",
    [breed_munchkin].desc = placeholder,
    [breed_munchkin].mcs = NULL,
    [breed_nebelung].name = "Nebelung",
    [breed_nebelung].desc = placeholder,
    [breed_nebelung].mcs = NULL,
    [breed_norwegforest].name = "Norwegian_Forest",
    [breed_norwegforest].desc = placeholder,
    [breed_norwegforest].mcs = NULL,
    [breed_ocicat].name = "Ocicat",
    [breed_ocicat].desc = placeholder,
    [breed_ocicat].mcs = NULL,
    [breed_orientshair].name = "Oriental_Shorthair",
    [breed_orientshair].desc = placeholder,
    [breed_orientshair].mcs = NULL,
    [breed_persian].name = "Persian",
    [breed_persian].desc = placeholder,
    [breed_persian].mcs = NULL,
    [breed_pixiebob].name = "Pixie-Bob",
    [breed_pixiebob].desc = placeholder,
    [breed_pixiebob].mcs = NULL,
    [breed_ragamuffin].name = "Ragamuffin",
    [breed_ragamuffin].desc = placeholder,
    [breed_ragamuffin].mcs = NULL,
    [breed_ragdoll].name = "Ragdoll",
    [breed_ragdoll].desc = placeholder,
    [breed_ragdoll].mcs = NULL,
    [breed_russyblue].name = "Russian_Blue",
    [breed_russyblue].desc = placeholder,
    [breed_russyblue].mcs = NULL,
    [breed_scotsfold].name = "Scottish_Fold",
    [breed_scotsfold].desc = placeholder,
    [breed_scotsfold].mcs = NULL,
    [breed_selkirkrex].name = "Selkirk_Rex",
    [breed_selkirkrex].desc = placeholder,
    [breed_selkirkrex].mcs = NULL,
    [breed_siamese].name = "Siamese",
    [breed_siamese].desc = "Siamese cats have point-coloured fur and they usually have blue eyes. Siamese are known to be good foundation stock for new breeds, and many other breeds stem from Siamese. Siamese are from Siam (modern day Thailand), as one might expect. They can make a kind of noise called a 'meezer.' This noise sounds like they're purring and meowing at the same time.Siamese can suffer from separation anxiety if left alone for too long, so always make sure to either have another cat to keep themselves company, or come over to give them company once in a while.",
    [breed_siamese].mcs = NULL,
    [breed_siberian].name = "Siberian",
    [breed_siberian].desc = placeholder,
    [breed_siberian].mcs = NULL,
    [breed_singapura].name = "Singapura",
    [breed_singapura].desc = placeholder,
    [breed_singapura].mcs = NULL,
    [breed_snowshoe].name = "Snowshoe",
    [breed_snowshoe].desc = placeholder,
    [breed_snowshoe].mcs = NULL,
    [breed_somali].name = "Somali",
    [breed_somali].desc = placeholder,
    [breed_somali].mcs = NULL,
    [breed_sphynx].name = "Sphynx",
    [breed_sphynx].desc = placeholder,
    [breed_sphynx].mcs = NULL,
    [breed_tabby].name = "Tabby",
    [breed_tabby].desc = placeholder,
    [breed_tabby].mcs = NULL,
    [breed_tonkinese].name = "Tonkinese",
    [breed_tonkinese].desc = placeholder,
    [breed_tonkinese].mcs = NULL,
    [breed_tortoiseshell].name = "Tortoiseshell",
    [breed_tortoiseshell].desc = placeholder,
    [breed_tortoiseshell].mcs = NULL,
    [breed_toyger].name = "Toyger",
    [breed_toyger].desc = placeholder,
    [breed_toyger].mcs = NULL,
    [breed_turkangora].name = "Turkish_Angora",
    [breed_turkangora].desc = placeholder,
    [breed_turkangora].mcs = NULL,
    [breed_turkvan].name = "Turkish_Van",
    [breed_turkvan].desc = placeholder,
    [breed_turkvan].mcs = NULL,
    [breed_tuxedo].name = "Tuxedo",
    [breed_tuxedo].desc = placeholder,
    [breed_tuxedo].mcs = NULL,
    [breed_yorkchoco].name = "York_Chocolate",
    [breed_yorkchoco].desc = placeholder,
    [breed_yorkchoco].mcs = NULL,
    [breed_incorrect].name = "MISSINGBREED.",
    [breed_incorrect].desc = "MISSSINGBREEDS are test cats with perfectly uniform fur and a somewhat blocky appearance. They are often created when a user enters invalid input.\nInvalid breed.\nMake sure that you are swapping spaces for underscores.\nMake sure you are capitalizing every word in the breed perfectly.\nIf you are certain that this is a real breed, please contact me at helix.graziani@hotmail.com.\0",
    [breed_incorrect].mcs = NULL,
};

const struct mc mcs[mc_incorrect+1] = {
	[mc_null].name = "nerd disorder", //yah you nerd
	[mc_null].desc = "haha nerd lol",
	[mc_null].treatment = "using like a hex editor or smthn...", 
	[mc_abscess].name = "Abscess",
	[mc_abscess].desc = placeholder,
	[mc_abscess].treatment = placeholder,
	[mc_analgdisease].name = "Anal_Gland_Disease",
	[mc_analgdisease].desc = placeholder,
	[mc_analgdisease].treatment = placeholder,
	[mc_arthritis].name = "Arthritis",
	[mc_arthritis].desc = placeholder,
	[mc_arthritis].treatment = placeholder,
	[mc_asthma].name = "Asthma",
	[mc_asthma].treatment = placeholder,
	[mc_asthma].desc = placeholder,
	[mc_atopicderm].name = "Atopic_Dermatitis",
	[mc_atopicderm].desc = placeholder,
	[mc_atopicderm].treatment = placeholder,
	[mc_bladderinfec].name = "Bladder_Infection",
	[mc_bladderinfec].desc = placeholder,
	[mc_bladderinfec].treatment = placeholder,
	[mc_bladderstones].name = "Bladder_Stones",
	[mc_bladderstones].desc = placeholder,
	[mc_bladderstones].treatment = placeholder,
	[mc_bronchitis].name = "Bronchitis",
	[mc_bronchitis].desc = placeholder,
	[mc_bronchitis].treatment = placeholder,
	[mc_calcivirus].name = "Calcivirus",
	[mc_calcivirus].desc = placeholder,
	[mc_calcivirus].treatment = placeholder,
	[mc_cancer].name = "Cancer",
	[mc_cancer].desc = placeholder,
	[mc_cancer].treatment = placeholder,
	[mc_constipation].name = "Constipation",
	[mc_constipation].desc = placeholder,
	[mc_constipation].treatment = placeholder,
	[mc_diabetes].name = "Diabetes",
	[mc_diabetes].desc = placeholder,
	[mc_diabetes].treatment = placeholder,
	[mc_diarrhea].name = "Diarrhea",
	[mc_diarrhea].desc = placeholder,
	[mc_diarrhea].treatment = placeholder,
	[mc_dilcardiomypath].name = "Dilated_Cardiomyopathy",
	[mc_dilcardiomypath].desc = placeholder,
	[mc_dilcardiomypath].treatment = placeholder,
	[mc_dislocation].name = "Dislocation",
	[mc_dislocation].desc = placeholder,
	[mc_dislocation].treatment = placeholder,
	[mc_distemper].name = "Distemper",
	[mc_distemper].desc = placeholder,
	[mc_distemper].treatment = placeholder,
	[mc_dryeye].name = "Dry_Eye",
	[mc_dryeye].desc = placeholder,
	[mc_dryeye].treatment = placeholder,
	[mc_earinfection].name = "Otitis", //Medical accuracy.
	[mc_earinfection].desc = placeholder,
	[mc_earinfection].treatment = placeholder,
	[mc_eyelidgeneral].name = "Eyelid_Disease",
	[mc_eyelidgeneral].desc = placeholder,
	[mc_eyelidgeneral].treatment = placeholder,
	[mc_retinalgeneral].name = "Retinal_Disease",
	[mc_retinalgeneral].desc = placeholder,
	[mc_retinalgeneral].treatment = placeholder,
	[mc_fadingkitten].name = "Fading_Kitten_Syndrome",
	[mc_fadingkitten].desc =  placeholder,
	[mc_fadingkitten].treatment = placeholder,
	[mc_immunodeficiency].name = "Immunodeficiency",
	[mc_immunodeficiency].desc =  placeholder,
	[mc_immunodeficiency].treatment = placeholder,
	[mc_peritonitis].name = "Peritonitis",
	[mc_peritonitis].desc = placeholder,
	[mc_peritonitis].treatment = placeholder,
	[mc_leukemia].name = "Leukemia",
	[mc_leukemia].desc = placeholder,
	[mc_leukemia].treatment = placeholder,
	[mc_lowurintractdis].name = "Lower_Urinary_Tract_Disease",
	[mc_lowurintractdis].desc = placeholder,
	[mc_lowurintractdis].treatment = placeholder,
	[mc_fleabitederm].name = "Flea_Bite_Dermatitis",
	[mc_fleabitederm].desc = placeholder,
	[mc_fleabitederm].treatment = placeholder,
	[mc_gingivitis].name = "Gingivitis",
	[mc_gingivitis].desc = placeholder,
	[mc_gingivitis].treatment = placeholder,
	[mc_glaucoma].name = "Glaucoma",
	[mc_glaucoma].desc = placeholder,
	[mc_glaucoma].treatment = placeholder,
	[mc_hairballs].name = "Hairballs",
	[mc_hairballs].desc = placeholder,
	[mc_hairballs].treatment = placeholder,
	[mc_herpes].name = "Herpes",
	[mc_herpes].desc = placeholder,
	[mc_herpes].treatment = placeholder,
	[mc_hookworm].name = "Hookworm",
	[mc_hookworm].desc = placeholder,
	[mc_hookworm].treatment = placeholder,
	[mc_hyperthyroidism].name = "Hyperthyroidism",
	[mc_hyperthyroidism].desc = placeholder,
	[mc_hyperthyroidism].treatment = placeholder,
	[mc_hypertropcardpat].name = "Hypertrophic_Cardiomyopathy",
	[mc_hypertropcardpat].desc = placeholder,
	[mc_hypertropcardpat].treatment = placeholder,
	[mc_ibd].name = "Inflammatory_Bowel_Syndrome",
	[mc_ibd].desc = placeholder,
	[mc_ibd].treatment = placeholder,
	[mc_kidneydisease].name = "Kidney_Disease",
	[mc_kidneydisease].desc = placeholder,
	[mc_kidneydisease].treatment = placeholder,
	[mc_kidneyfaliure].name = "Kidney_Faliure",
	[mc_kidneyfaliure].desc = placeholder,
	[mc_kidneyfaliure].treatment = placeholder,
	[mc_lice].name = "Lice",
	[mc_lice].desc = placeholder,
	[mc_lice].treatment = placeholder,
	[mc_amyloidosis].name = "Liver_Amyloidosis",
	[mc_amyloidosis].desc = placeholder,
	[mc_amyloidosis].treatment = placeholder,
	[mc_lymphoma].name = "Lymphoma",
	[mc_lymphoma].desc = placeholder,
	[mc_lymphoma].treatment = placeholder,
	[mc_mange].name = "Mange",
	[mc_mange].desc = placeholder,
	[mc_mange].treatment = placeholder,
	[mc_mcelltumors].name = "Mast_Cell_Tumour",
	[mc_mcelltumors].desc = placeholder,
	[mc_mcelltumors].treatment = placeholder,
	[mc_obesity].name = "Obesity",
	[mc_obesity].desc = placeholder,
	[mc_obesity].treatment = placeholder,
	[mc_osteoarthritis].name = "Osteoarthritis",
	[mc_osteoarthritis].desc = placeholder,
	[mc_osteoarthritis].treatment = placeholder,
	[mc_pancreatitis].name = "Pancreatitis",
	[mc_pancreatitis].desc = placeholder,
	[mc_pancreatitis].treatment = placeholder,
	[mc_pregnancy].name = "Pregnancy",
	[mc_pregnancy].desc = placeholder,
	[mc_pregnancy].treatment = placeholder,
	[mc_progressretatro].name = "Progressive_Retinal_Atrophy",
	[mc_progressretatro].desc = placeholder,
	[mc_progressretatro].treatment = placeholder,
	[mc_rabies].name = "Rabies",
	[mc_rabies].desc = placeholder,
	[mc_rabies].treatment = placeholder,
	[mc_renalfaliure].name = "Renal_Faliure",
	[mc_renalfaliure].desc = placeholder,
	[mc_renalfaliure].treatment = placeholder,
	[mc_ringworm].name = "Ringworm",
	[mc_ringworm].desc = placeholder,
	[mc_ringworm].treatment = placeholder,
	[mc_roundworms].name = "Roundworm",
	[mc_roundworms].desc = placeholder,
	[mc_roundworms].treatment = placeholder,
	[mc_salmonella].name = "Salmonella",
	[mc_salmonella].desc = placeholder,
	[mc_salmonella].treatment = placeholder,
	[mc_scabies].name = "Scabies",
	[mc_scabies].desc = placeholder,
	[mc_scabies].treatment = placeholder,
	[mc_skincancer].name = "Skin_Cancer",
	[mc_skincancer].desc = placeholder,
	[mc_skincancer].treatment = placeholder,
	[mc_strabismus].name = "Strabismus",
	[mc_strabismus].desc = placeholder,
	[mc_strabismus].treatment = placeholder,
	[mc_studtail].name = "Stud_Tail",
	[mc_studtail].desc = placeholder,
	[mc_studtail].treatment = placeholder,
	[mc_tapeworms].name = "Tapeworm",
	[mc_tapeworms].desc = placeholder,
	[mc_tapeworms].treatment = placeholder,
	[mc_toothgeneral].name = "Tooth_Disease",
	[mc_toothgeneral].desc = placeholder,
	[mc_toothgeneral].treatment = placeholder,
	[mc_toxoplasmosis].name = "Toxoplasmosis",
	[mc_toxoplasmosis].desc = placeholder,
	[mc_toxoplasmosis].treatment = placeholder,
	[mc_upperrespinfec].name = "Upper_Respiratory_Infection",
	[mc_upperrespinfec].desc = placeholder,
	[mc_upperrespinfec].treatment = placeholder,
	[mc_urethralobstruct].name = "Urethral_Obstruction",
	[mc_urethralobstruct].desc = placeholder,
	[mc_urethralobstruct].treatment = placeholder,
	[mc_uveitis].name = "Uveitis",
	[mc_uveitis].desc = placeholder,
	[mc_uveitis].treatment = placeholder,
	[mc_worms].name = "Worms",
	[mc_worms].desc = placeholder,
	[mc_worms].treatment = placeholder,
	[mc_blindness].name = "Blindness",
	[mc_blindness].desc = placeholder,
	[mc_blindness].treatment = placeholder,
	[mc_hypokalemia].name = "Hypokalemia",
	[mc_hypokalemia].desc = placeholder,
	[mc_hypokalemia].treatment = placeholder,
	[mc_death].name = "Death",
	[mc_death].desc = placeholder,
	[mc_death].treatment = placeholder,
	[mc_incorrect].name = "",
	[mc_incorrect].desc = placeholder,
	[mc_incorrect].treatment = placeholder
};

#ifdef __cplusplus
}
#endif

#endif
