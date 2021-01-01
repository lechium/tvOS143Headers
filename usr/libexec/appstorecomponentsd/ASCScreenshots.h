//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSArray;

@interface ASCScreenshots : NSObject <NSSecureCoding, NSCopying>
{
    NSArray *_artwork;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010001acbc
- (void).cxx_destruct;	// IMP=0x000000010001b0d0
@property(readonly, copy, nonatomic) NSArray *artwork; // @synthesize artwork=_artwork;
- (id)description;	// IMP=0x000000010001b020
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010001af10
- (unsigned long long)hash;	// IMP=0x000000010001ae8c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010001ae88
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010001ae10
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010001acc4
- (id)initWithArtwork:(id)arg1;	// IMP=0x000000010001ac3c

@end
