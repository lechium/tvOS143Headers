//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSOrderedSet, NSString;

@interface SATVInternationalUtility : NSObject
{
    NSString *_userSetSystemLanguageCode;	// 8 = 0x8
    NSString *_userSetSystemRegionCode;	// 16 = 0x10
    NSDictionary *_languageCodesToLanguageStringsDictionary;	// 24 = 0x18
    NSArray *_orderedGreetingTitleStrings;	// 32 = 0x20
    NSArray *_orderedGreetingSubtitleStrings;	// 40 = 0x28
    NSArray *_orderedLanguageCodes;	// 48 = 0x30
    NSArray *_orderedRemotePairingStrings;	// 56 = 0x38
    NSArray *_orderedRemotePairingHelpStrings;	// 64 = 0x40
    NSArray *_orderedRemotePairingErrorStrings;	// 72 = 0x48
    NSArray *_orderedRemoteProximityStrings;	// 80 = 0x50
    NSOrderedSet *_sortedSupportedGreetingLanguages;	// 88 = 0x58
}

+ (id)sharedInstance;	// IMP=0x000000010000d578
- (void).cxx_destruct;	// IMP=0x000000010000f430
@property(retain, nonatomic) NSOrderedSet *sortedSupportedGreetingLanguages; // @synthesize sortedSupportedGreetingLanguages=_sortedSupportedGreetingLanguages;
@property(retain, nonatomic) NSArray *orderedRemoteProximityStrings; // @synthesize orderedRemoteProximityStrings=_orderedRemoteProximityStrings;
@property(retain, nonatomic) NSArray *orderedRemotePairingErrorStrings; // @synthesize orderedRemotePairingErrorStrings=_orderedRemotePairingErrorStrings;
@property(retain, nonatomic) NSArray *orderedRemotePairingHelpStrings; // @synthesize orderedRemotePairingHelpStrings=_orderedRemotePairingHelpStrings;
@property(retain, nonatomic) NSArray *orderedRemotePairingStrings; // @synthesize orderedRemotePairingStrings=_orderedRemotePairingStrings;
@property(retain, nonatomic) NSArray *orderedLanguageCodes; // @synthesize orderedLanguageCodes=_orderedLanguageCodes;
@property(retain, nonatomic) NSArray *orderedGreetingSubtitleStrings; // @synthesize orderedGreetingSubtitleStrings=_orderedGreetingSubtitleStrings;
@property(retain, nonatomic) NSArray *orderedGreetingTitleStrings; // @synthesize orderedGreetingTitleStrings=_orderedGreetingTitleStrings;
@property(retain, nonatomic) NSDictionary *languageCodesToLanguageStringsDictionary; // @synthesize languageCodesToLanguageStringsDictionary=_languageCodesToLanguageStringsDictionary;
@property(retain, nonatomic) NSString *userSetSystemRegionCode; // @synthesize userSetSystemRegionCode=_userSetSystemRegionCode;
@property(retain, nonatomic) NSString *userSetSystemLanguageCode; // @synthesize userSetSystemLanguageCode=_userSetSystemLanguageCode;
- (id)_pairingHelpStringWithString:(id)arg1;	// IMP=0x000000010000ee9c
- (id)_orderedLanguageStringsForKey:(id)arg1;	// IMP=0x000000010000ecb8
- (void)_generateLanguageCodes;	// IMP=0x000000010000e8c8
- (void)_notifyPineBoard;	// IMP=0x000000010000e864
- (id)localizedString:(id)arg1 forLanguage:(id)arg2;	// IMP=0x000000010000e58c
@property(nonatomic) _Bool localeCommitted;
@property(nonatomic) _Bool languageCommitted;
- (_Bool)commitLanguageWillRestartSystem;	// IMP=0x000000010000e220
- (void)commitRegion;	// IMP=0x000000010000e168
- (_Bool)commitLocaleWillRestartSystem;	// IMP=0x000000010000dfec
- (void)commitLanguage;	// IMP=0x000000010000de28
- (id)regionOtherStringWithUserSelectedLanguageCode;	// IMP=0x000000010000ddc0
- (id)regionHeaderStringWithUserSelectedLanguageCode;	// IMP=0x000000010000dd58
@property(readonly, nonatomic) NSArray *orderedGreetingLanguageCodes;
- (id)languageCodeWithGuessedRegionForCode:(id)arg1;	// IMP=0x000000010000dba0
- (id)languageHeaderStringForLanguageCode:(id)arg1;	// IMP=0x000000010000db88

@end

