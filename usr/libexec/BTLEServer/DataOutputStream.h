//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData;

@interface DataOutputStream : NSObject
{
    NSMutableData *_stream;	// 8 = 0x8
    long long _byteOrder;	// 16 = 0x10
}

+ (id)outputStreamWithByteOrder:(long long)arg1;	// IMP=0x000000010002c2fc
+ (id)outputStream;	// IMP=0x000000010002c2d0
- (void).cxx_destruct;	// IMP=0x000000010002c60c
@property(nonatomic) long long byteOrder; // @synthesize byteOrder=_byteOrder;
@property(retain, nonatomic) NSMutableData *stream; // @synthesize stream=_stream;
- (id)data;	// IMP=0x000000010002c5dc
- (void)writeString:(id)arg1;	// IMP=0x000000010002c550
- (void)writeBytes:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x000000010002c4f8
- (void)writeData:(id)arg1;	// IMP=0x000000010002c48c
- (void)writeUint32:(unsigned int)arg1;	// IMP=0x000000010002c40c
- (void)writeUint16:(unsigned short)arg1;	// IMP=0x000000010002c38c
- (void)writeUint8:(unsigned char)arg1;	// IMP=0x000000010002c334
- (id)initWithByteOrder:(long long)arg1;	// IMP=0x000000010002c264

@end

