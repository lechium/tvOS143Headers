//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "WiFiLocaleManagerDelegate-Protocol.h"

@class NSCountedSet, NSString, WiFiLocaleManager;

@interface WiFiLocaleManagerUser : NSObject <WiFiLocaleManagerDelegate>
{
    struct __WiFiManager *_manager;	// 8 = 0x8
    WiFiLocaleManager *_localeManager;	// 16 = 0x10
    NSCountedSet *_countryCodeList;	// 24 = 0x18
    unsigned long long _countryCodeIECount;	// 32 = 0x20
    NSString *_peerCountryCode;	// 40 = 0x28
}

- (id)getPeerCountryCode;	// IMP=0x0000000100122eec
- (id)get80211dCountryCodes:(unsigned long long *)arg1;	// IMP=0x0000000100122d44
- (id)getCompanionCountryCode;	// IMP=0x0000000100122ae4
- (unsigned char)setDeviceCountryCode:(id)arg1;	// IMP=0x00000001001229ac
- (id)getDeviceCountryCode;	// IMP=0x0000000100122730
- (unsigned char)suspendLocaleCheck;	// IMP=0x0000000100122634
- (void)setLocaleTestParams:(id)arg1;	// IMP=0x0000000100122624
- (void)updatePeerCountryCode:(id)arg1;	// IMP=0x000000010012257c
- (void)update80211dCountryCodes:(id)arg1;	// IMP=0x00000001001223d4
- (id)getLocaleCountryCode;	// IMP=0x00000001001223c4
- (double)getLocaleLastUpdatedTime;	// IMP=0x00000001001223b4
- (int)getLocaleSource;	// IMP=0x00000001001223a4
- (void)determineAndSetLocale:(unsigned char)arg1;	// IMP=0x0000000100122394
- (void)dealloc;	// IMP=0x000000010012233c
- (id)initWithContext:(struct __WiFiManager *)arg1;	// IMP=0x0000000100122294

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

