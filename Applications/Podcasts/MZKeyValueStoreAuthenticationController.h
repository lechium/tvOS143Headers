//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MZKeyValueStoreAuthenticationController : NSObject
{
    NSString *_acceptedDSIDUserDefaultsKey;	// 8 = 0x8
    NSString *_acceptedDSIDTextUserDefaultsKey;	// 16 = 0x10
    _Bool _shouldAuthenticate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100057ec4
@property(copy, nonatomic) NSString *acceptedDSIDTextUserDefaultsKey; // @synthesize acceptedDSIDTextUserDefaultsKey=_acceptedDSIDTextUserDefaultsKey;
@property(copy, nonatomic) NSString *acceptedDSIDUserDefaultsKey; // @synthesize acceptedDSIDUserDefaultsKey=_acceptedDSIDUserDefaultsKey;
@property(nonatomic) _Bool shouldAuthenticate; // @synthesize shouldAuthenticate=_shouldAuthenticate;
@property(readonly, nonatomic) NSString *DSIDText;
@property(readonly, nonatomic) NSString *DSID;
@property(retain, nonatomic) NSString *acceptedDSIDText; // @dynamic acceptedDSIDText;
@property(retain, nonatomic) NSString *acceptedDSID; // @dynamic acceptedDSID;
- (void)resetAcceptedCredentials;	// IMP=0x0000000100057b18
- (id)authenticationErrorsForTransaction:(id)arg1;	// IMP=0x00000001000579d4
- (_Bool)shouldForceAuthenticationForTransaction:(id)arg1;	// IMP=0x000000010005792c
- (_Bool)isAuthenticationValidForTransaction:(id)arg1 error:(id *)arg2;	// IMP=0x000000010005781c
- (id)init;	// IMP=0x000000010005778c

@end
