//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

__attribute__((visibility("hidden")))
@interface CKKSBaseAESSIVKey : NSObject <NSCopying>
{
    unsigned char key[80];	// 8 = 0x8
    unsigned long long size;	// 88 = 0x58
}

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100176da4
- (void)zeroKey;	// IMP=0x0000000100176d8c
- (void)dealloc;	// IMP=0x0000000100176d40
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100176cc4
- (id)initWithBase64:(id)arg1;	// IMP=0x0000000100176bc4
- (id)initWithBytes:(char *)arg1 len:(unsigned long long)arg2;	// IMP=0x0000000100176b50
- (id)init;	// IMP=0x0000000100176af0

@end

