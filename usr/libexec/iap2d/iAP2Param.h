//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface iAP2Param : NSObject
{
    unsigned short paramID;	// 8 = 0x8
    unsigned short paramLen;	// 10 = 0xa
    unsigned short paramLenRemain;	// 12 = 0xc
    int paramType;	// 16 = 0x10
    union iAP2ParamDataInteger_ paramInteger;	// 24 = 0x18
    unsigned char paramRawLen;	// 32 = 0x20
    int paramParseState;	// 36 = 0x24
    id pNSParamData;	// 40 = 0x28
}

+ (id)createParamWithIDAndNSString:(unsigned short)arg1:(id)arg2;	// IMP=0x000000010000dd44
+ (id)createParamWithIDAndNSData:(unsigned short)arg1:(id)arg2;	// IMP=0x000000010000dce8
+ (id)createParamWithIDAndDataInt64:(unsigned short)arg1:(long long)arg2;	// IMP=0x000000010000dca4
+ (id)createParamWithIDAndDataInt32:(unsigned short)arg1:(int)arg2;	// IMP=0x000000010000dc60
+ (id)createParamWithIDAndDataInt16:(unsigned short)arg1:(short)arg2;	// IMP=0x000000010000dc1c
+ (id)createParamWithIDAndDataInt8:(unsigned short)arg1:(BOOL)arg2;	// IMP=0x000000010000dbd8
+ (id)createParamWithIDAndDataU64:(unsigned short)arg1:(unsigned long long)arg2;	// IMP=0x000000010000db94
+ (id)createParamWithIDAndDataU32:(unsigned short)arg1:(unsigned int)arg2;	// IMP=0x000000010000db50
+ (id)createParamWithIDAndDataU16:(unsigned short)arg1:(unsigned short)arg2;	// IMP=0x000000010000db0c
+ (id)createParamWithIDAndDataU8:(unsigned short)arg1:(unsigned char)arg2;	// IMP=0x000000010000dac8
+ (id)createParamWithIDAndDataBool:(unsigned short)arg1:(_Bool)arg2;	// IMP=0x000000010000da84
+ (id)createParamWithIDAndDataRaw:(unsigned short)arg1:(char *)arg2:(unsigned short)arg3;	// IMP=0x000000010000d9c4
+ (id)createParamWithID:(unsigned short)arg1;	// IMP=0x000000010000d990
- (id)description;	// IMP=0x000000010000e94c
- (unsigned short)generateRawParamBuffer:(char *)arg1;	// IMP=0x000000010000e77c
- (unsigned short)getRawParamLength;	// IMP=0x000000010000e6c0
- (void)setParamDataPtr:(id)arg1;	// IMP=0x000000010000e61c
- (id)getParamDataPtr;	// IMP=0x000000010000e614
- (unsigned short)getGrpParamLen;	// IMP=0x000000010000e60c
- (void)setGrpParamID:(unsigned short)arg1;	// IMP=0x000000010000e604
- (unsigned short)getGrpParamID;	// IMP=0x000000010000e5fc
- (int)parseParamBuffer:(const char *)arg1:(unsigned short)arg2:(unsigned short)arg3:(unsigned short *)arg4;	// IMP=0x000000010000e38c
- (void)dealloc;	// IMP=0x000000010000e340
- (id)init;	// IMP=0x000000010000e2ec
- (id)getParamDataAsNSString:(int *)arg1;	// IMP=0x000000010000e21c
- (id)getParamDataAsNSData:(int *)arg1;	// IMP=0x000000010000e1f0
- (unsigned long long)getParamDataAsU64:(int *)arg1;	// IMP=0x000000010000e144
- (unsigned int)getParamDataAsU32:(int *)arg1;	// IMP=0x000000010000e098
- (unsigned short)getParamDataAsU16:(int *)arg1;	// IMP=0x000000010000dfe8
- (unsigned char)getParamDataAsU8:(int *)arg1;	// IMP=0x000000010000df40
- (_Bool)getParamDataAsBool:(int *)arg1;	// IMP=0x000000010000de88
- (const char *)getParamDataAsRaw:(unsigned short *)arg1:(int *)arg2;	// IMP=0x000000010000ddf4
- (void)getParamDataAsNone:(int *)arg1;	// IMP=0x000000010000dda0

@end

