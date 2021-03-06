/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:59 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CUTMetricLogger.h>

@class NSString;

@interface IDSCoreAnalyticsLogger : NSObject <CUTMetricLogger> {

	NSString* _domain;

}

@property (nonatomic,readonly) NSString * domain;                   //@synthesize domain=_domain - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultLogger;
-(NSString *)domain;
-(void)logMetric:(id)arg1 ;
-(id)initWithDomain:(id)arg1 ;
@end

