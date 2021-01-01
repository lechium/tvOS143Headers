//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PAMediaConversionServiceImageMetadataPolicy.h"

__attribute__((visibility("hidden")))
@interface PAMediaConversionServiceDefaultImageMetadataPolicy : PAMediaConversionServiceImageMetadataPolicy
{
    float _lossyCompressionQuality;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100007bb0
+ (id)policyWithLossyCompressionQuality:(float)arg1;	// IMP=0x0000000100007b80
+ (id)standardPolicy;	// IMP=0x0000000100007a7c
@property float lossyCompressionQuality; // @synthesize lossyCompressionQuality=_lossyCompressionQuality;
- (id)processMetadata:(id)arg1;	// IMP=0x00000001000076dc
- (_Bool)metadataNeedsProcessing:(id)arg1;	// IMP=0x00000001000076d4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100007674
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000075e8
- (id)initWithLossyCompressionQuality:(float)arg1;	// IMP=0x0000000100007580
- (id)init;	// IMP=0x000000010000756c

@end
