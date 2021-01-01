/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:56 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/WFAWDEvent.h>

@class PBCodable, NSString;

@interface WFUserJoinEvent : NSObject <WFAWDEvent> {

	unsigned _metricIdentifier;
	PBCodable* _metric;

}

@property (assign,nonatomic) unsigned metricIdentifier;              //@synthesize metricIdentifier=_metricIdentifier - In the implementation block
@property (nonatomic,retain) PBCodable * metric;                     //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)joinEventWithSecurity:(long long)arg1 error:(long long)arg2 sectionCounts:(id)arg3 sectionName:(id)arg4 ;
+(id)joinEventWithType:(long long)arg1 security:(long long)arg2 error:(long long)arg3 ;
-(PBCodable *)metric;
-(void)setMetric:(PBCodable *)arg1 ;
-(unsigned)_metricIdForType:(long long)arg1 ;
-(unsigned)metricIdentifier;
-(void)setMetricIdentifier:(unsigned)arg1 ;
-(id)_countMetricsFromSectionCounts:(id)arg1 ;
-(id)initWithType:(long long)arg1 security:(long long)arg2 error:(long long)arg3 sectionCounts:(id)arg4 sectionName:(id)arg5 ;
@end

