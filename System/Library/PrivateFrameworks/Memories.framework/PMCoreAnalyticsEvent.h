/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:44 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CoreAnalyticsEventProtocol.h>

@class NSString;

@interface PMCoreAnalyticsEvent : NSObject <CoreAnalyticsEventProtocol> {

	BOOL _appendBundleName;

}

@property (assign,nonatomic) BOOL appendBundleName;                 //@synthesize appendBundleName=_appendBundleName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bundleForAnalytics;
-(id)eventName;
-(id)eventPayload;
-(void)sendToCoreAnalytics;
-(BOOL)appendBundleName;
-(void)setAppendBundleName:(BOOL)arg1 ;
@end

