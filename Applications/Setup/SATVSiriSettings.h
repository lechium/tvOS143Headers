//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SATVSiriSettings : NSObject
{
    unsigned long long _rollbackDataSharingOptInStatus;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x000000010006d2ac
@property(nonatomic) unsigned long long rollbackDataSharingOptInStatus; // @synthesize rollbackDataSharingOptInStatus=_rollbackDataSharingOptInStatus;
- (void)_startListeningForStoreFrontChanges;	// IMP=0x000000010006e0f0
- (void)_stopListeningForStoreFrontChanges;	// IMP=0x000000010006e000
- (void)_setCoreLocationAuthorizationStatus:(int)arg1;	// IMP=0x000000010006df90
- (void)_updateSiriConsent:(long long)arg1 andDictationConsent:(long long)arg2;	// IMP=0x000000010006def0
- (_Bool)_isDictationAllowed;	// IMP=0x000000010006dee4
- (_Bool)_isSiriAllowed;	// IMP=0x000000010006ded8
- (void)_handleStoreFrontDidChangeNotification:(id)arg1;	// IMP=0x000000010006de48
- (void)rollbackDataSharingState;	// IMP=0x000000010006dde4
- (void)resetDataSharingState;	// IMP=0x000000010006dd98
- (void)handleDataSharingOfferWithEnableDataSharing:(_Bool)arg1;	// IMP=0x000000010006dd8c
@property(readonly, nonatomic) _Bool offeredDataSharing;
@property(nonatomic, getter=isDataSharingEnabled) _Bool dataSharingEnabled;
- (void)resetSiriAndDictationState;	// IMP=0x000000010006dc70
- (void)handleSiriAndDictationOfferWithSiriConsent:(long long)arg1 andDictationConsent:(long long)arg2;	// IMP=0x000000010006dc3c
@property(readonly, nonatomic, getter=isSiriOrDictationAvailable) _Bool siriOrDictationAvailable;
@property(nonatomic) _Bool offeredEnableDictation;
@property(nonatomic, getter=isDictationEnabled) _Bool dictationEnabled;
@property(readonly, nonatomic, getter=isDictationAvailable) _Bool dictationAvailable;
@property(nonatomic) _Bool offeredEnableSiri;
@property(readonly, copy, nonatomic) NSString *bestSiriLanguageForCurrentStoreFront;
@property(readonly, nonatomic) _Bool canDetermineBestSiriLanguageForCurrentStoreFront;
- (void)setSiriLanguage:(id)arg1;	// IMP=0x000000010006d788
@property(readonly, copy, nonatomic) NSString *siriLanguage;
@property(nonatomic, getter=isSiriEnabled) _Bool siriEnabled;
@property(readonly, nonatomic, getter=isSiriAvailable) _Bool siriAvailable;
- (void)dealloc;	// IMP=0x000000010006d398
- (id)init;	// IMP=0x000000010006d318

@end

