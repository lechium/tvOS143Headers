//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GEOAnalyticsPipelineQueueElem.h"

@class NSString;

@interface GEOAnalyticsPipelineMapKitCountQueueElem : GEOAnalyticsPipelineQueueElem
{
    int _countType;	// 16 = 0x10
    NSString *_appId;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000214f8
@property(readonly, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(readonly, nonatomic) int countType; // @synthesize countType=_countType;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000212f0
- (unsigned long long)hash;	// IMP=0x0000000100021290
- (id)copy;	// IMP=0x0000000100021244
- (id)initWithType:(int)arg1 appId:(id)arg2 createTime:(id)arg3;	// IMP=0x0000000100021188

@end

