//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface PBServiceProviderRegistryKeyPair : NSObject <NSCopying>
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_providerType;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000971c4
@property(copy) NSString *providerType; // @synthesize providerType=_providerType;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;	// IMP=0x0000000100096fc4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100096d28
- (unsigned long long)hash;	// IMP=0x0000000100096c74
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100096b88

@end
