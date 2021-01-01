//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSData;

@interface BTUUID : NSObject <NSCopying>
{
    NSData *data;	// 8 = 0x8
}

+ (id)randomUUID;	// IMP=0x0000000100358608
+ (id)UUID128WithString:(id)arg1;	// IMP=0x0000000100358544
+ (id)UUID128:(const char *)arg1;	// IMP=0x0000000100358510
+ (id)UUID16:(unsigned short)arg1;	// IMP=0x00000001003584d8
+ (id)UUIDWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000100358484
+ (id)UUIDWithData:(id)arg1;	// IMP=0x00000001003583e8
+ (id)UUIDWithLittleEndianBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000100358348
- (void).cxx_destruct;	// IMP=0x0000000100358f08
@property(copy) NSData *data; // @synthesize data;
- (id)description;	// IMP=0x0000000100358d60
- (_Bool)isEqualToUUID16:(unsigned short)arg1;	// IMP=0x0000000100358c90
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100358aac
- (unsigned long long)hash;	// IMP=0x0000000100358a48
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100358964
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001003588c8
@property(readonly) NSData *swappedData;
- (id)UUID128;	// IMP=0x000000010035867c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010035829c
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000001003581a4

@end

