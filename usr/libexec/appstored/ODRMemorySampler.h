//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ODRDataSampler.h"

@class NSByteCountFormatter;

@interface ODRMemorySampler : ODRDataSampler
{
    NSByteCountFormatter *_bytesFormatter;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010011d630
- (id)currentStatsString;	// IMP=0x000000010011d444
- (id)takeSample;	// IMP=0x000000010011d36c

@end

