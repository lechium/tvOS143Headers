//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AFDictionaryConvertible-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface ADAudioSessionCoordinationMessageKeepAudioSessionAliveRequest : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible>
{
    double _expirationDuration;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010018b314
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x000000010018b708
@property(readonly, nonatomic) double expirationDuration; // @synthesize expirationDuration=_expirationDuration;
- (id)buildDictionaryRepresentation;	// IMP=0x000000010018b52c
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x000000010018b44c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010018b3c0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010018b31c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010018b310
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010018b284
@property(readonly) unsigned long long hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x000000010018b0a0
@property(readonly, copy) NSString *description;
- (id)initWithExpirationDuration:(double)arg1;	// IMP=0x000000010018b048
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x000000010018b788

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
