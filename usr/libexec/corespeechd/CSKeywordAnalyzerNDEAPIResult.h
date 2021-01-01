//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface CSKeywordAnalyzerNDEAPIResult : NSObject
{
    _Bool _isSecondChance;	// 8 = 0x8
    _Bool _isEarlyDetect;	// 9 = 0x9
    float _bestScore;	// 12 = 0xc
    unsigned long long _samplesFed;	// 16 = 0x10
    unsigned long long _bestStart;	// 24 = 0x18
    unsigned long long _bestEnd;	// 32 = 0x20
}

@property(nonatomic) _Bool isEarlyDetect; // @synthesize isEarlyDetect=_isEarlyDetect;
@property(nonatomic) _Bool isSecondChance; // @synthesize isSecondChance=_isSecondChance;
@property(nonatomic) float bestScore; // @synthesize bestScore=_bestScore;
@property(nonatomic) unsigned long long bestEnd; // @synthesize bestEnd=_bestEnd;
@property(nonatomic) unsigned long long bestStart; // @synthesize bestStart=_bestStart;
@property(nonatomic) unsigned long long samplesFed; // @synthesize samplesFed=_samplesFed;
@property(readonly, nonatomic) NSDictionary *dictionary;
- (id)initWithBlob:(id)arg1 isEarlyDetected:(_Bool)arg2;	// IMP=0x0000000100004cd4
- (id)init;	// IMP=0x0000000100004c90

@end
