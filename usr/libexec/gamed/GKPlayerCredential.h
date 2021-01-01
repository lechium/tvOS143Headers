//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKInternalRepresentation.h"

@class GKPlayerInternal, NSDate, NSString;

@interface GKPlayerCredential : GKInternalRepresentation
{
    NSString *_accountName;	// 8 = 0x8
    NSString *_authenticationToken;	// 16 = 0x10
    GKPlayerInternal *_playerInternal;	// 24 = 0x18
    long long _environment;	// 32 = 0x20
    unsigned int _scope;	// 40 = 0x28
    NSDate *_scopeModificationDate;	// 48 = 0x30
    NSString *_altDSID;	// 56 = 0x38
    NSString *_DSID;	// 64 = 0x40
    NSString *_rawPassword;	// 72 = 0x48
    NSString *_personaID;	// 80 = 0x50
}

+ (id)secureCodedPropertyKeys;	// IMP=0x000000010012b8e0
@property(retain) NSString *personaID; // @synthesize personaID=_personaID;
@property(retain) NSString *rawPassword; // @synthesize rawPassword=_rawPassword;
@property(retain) NSString *DSID; // @synthesize DSID=_DSID;
@property(retain) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(retain) NSDate *scopeModificationDate; // @synthesize scopeModificationDate=_scopeModificationDate;
@property unsigned int scope; // @synthesize scope=_scope;
@property long long environment; // @synthesize environment=_environment;
@property(retain) NSString *authenticationToken; // @synthesize authenticationToken=_authenticationToken;
@property(retain) NSString *accountName; // @synthesize accountName=_accountName;
@property(retain) GKPlayerInternal *playerInternal; // @synthesize playerInternal=_playerInternal;
- (id)description;	// IMP=0x000000010012b7dc
@property(readonly) NSString *scopeAsString;
- (void)dealloc;	// IMP=0x000000010012b650
- (unsigned long long)hash;	// IMP=0x000000010012b62c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010012b4d4

@end

