//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PAMediaConversionServiceImageMetadataPolicy.h"

__attribute__((visibility("hidden")))
@interface PAMediaConversionServiceAddPFMediaMetadataPolicy : PAMediaConversionServiceImageMetadataPolicy
{
    unsigned char _type;	// 8 = 0x8
    id _value;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100008d28
+ (id)policyWithType:(unsigned char)arg1 value:(id)arg2;	// IMP=0x0000000100008cb8
- (void).cxx_destruct;	// IMP=0x00000001000090c0
@property(retain) id value; // @synthesize value=_value;
@property unsigned char type; // @synthesize type=_type;
- (id)processMetadata:(id)arg1;	// IMP=0x0000000100008eb8
- (_Bool)metadataNeedsProcessing:(id)arg1;	// IMP=0x0000000100008eb0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100008e0c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100008d30

@end

