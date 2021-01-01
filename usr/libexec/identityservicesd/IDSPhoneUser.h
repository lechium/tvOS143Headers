//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSUser-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface IDSPhoneUser : NSObject <NSCopying, IDSUser>
{
    _Bool _isDefaultUser;	// 8 = 0x8
    NSString *_phoneNumber;	// 16 = 0x10
    NSString *_phoneBookNumber;	// 24 = 0x18
    NSString *_labelID;	// 32 = 0x20
    NSString *_countryCode;	// 40 = 0x28
    NSString *_networkCode;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100244b74
- (void).cxx_destruct;	// IMP=0x000000010024545c
@property(retain, nonatomic) NSString *networkCode; // @synthesize networkCode=_networkCode;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(nonatomic) _Bool isDefaultUser; // @synthesize isDefaultUser=_isDefaultUser;
@property(readonly, nonatomic) NSString *labelID; // @synthesize labelID=_labelID;
@property(retain, nonatomic) NSString *phoneBookNumber; // @synthesize phoneBookNumber=_phoneBookNumber;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100245050
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100244f2c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100244b94
- (_Bool)differsFromPhoneNumber:(id)arg1;	// IMP=0x0000000100244884
- (_Bool)isIdenticalToUser:(id)arg1;	// IMP=0x00000001002445e4
- (_Bool)isEqualToUser:(id)arg1;	// IMP=0x000000010024456c
- (_Bool)isEqualToPhoneUser:(id)arg1;	// IMP=0x0000000100244138
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010024407c
@property(readonly) unsigned long long hash;
- (_Bool)shouldReplace:(id)arg1;	// IMP=0x0000000100243ea0
- (id)storageIdentifier;	// IMP=0x0000000100243e6c
- (id)unprefixedIdentifier;	// IMP=0x0000000100243db0
- (id)realmPrefixedIdentifier;	// IMP=0x0000000100243c20
- (long long)realm;	// IMP=0x0000000100243c04
- (id)uniqueIdentifier;	// IMP=0x0000000100243bd0
- (id)phoneUserWithUpdatedDefaultUser:(_Bool)arg1 countryCode:(id)arg2 networkCode:(id)arg3;	// IMP=0x0000000100243aac
- (id)phoneUserWithUpdatedPhoneNumber:(id)arg1;	// IMP=0x00000001002439f4
- (id)phoneUserWithUpdatedPhoneNumber:(id)arg1 phoneBookNumber:(id)arg2;	// IMP=0x00000001002438f8
- (id)initWithLabelID:(id)arg1 phoneBookNumber:(id)arg2 isDefaultUser:(_Bool)arg3 countryCode:(id)arg4 networkCode:(id)arg5;	// IMP=0x0000000100243754
- (id)initWithLabelID:(id)arg1 phoneBookNumber:(id)arg2;	// IMP=0x0000000100243638
- (id)initWithLabelID:(id)arg1;	// IMP=0x0000000100243550

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
