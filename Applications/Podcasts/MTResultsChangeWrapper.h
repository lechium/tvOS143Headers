//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@protocol NSCopying;

@interface MTResultsChangeWrapper : NSObject <NSCopying>
{
    NSObject<NSCopying> *_object;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010015054c
@property(retain, nonatomic) NSObject<NSCopying> *object; // @synthesize object=_object;
- (unsigned long long)hash;	// IMP=0x00000001001504ec
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100150410
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001503a4
- (id)initWithObject:(id)arg1;	// IMP=0x0000000100150330

@end

