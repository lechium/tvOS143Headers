/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:36 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CPAnalytics/CPAnalyticsEventMatcher.h>

@class CPAnalyticsEventMatcher, NSString, NSObject;

@interface CPAnalyticsCoreDuetEventMatcher : CPAnalyticsEventMatcher {

	CPAnalyticsEventMatcher* _eventMatcher;
	BOOL _matchNextEvent;
	NSString* _datasetName;
	NSString* _identifierPropertyName;
	NSString* _subsetPropertyName;
	NSObject* _subsetPropertyValue;

}

@property (nonatomic,readonly) NSString * datasetName;                         //@synthesize datasetName=_datasetName - In the implementation block
@property (nonatomic,readonly) NSString * identifierPropertyName;              //@synthesize identifierPropertyName=_identifierPropertyName - In the implementation block
@property (nonatomic,readonly) NSString * subsetPropertyName;                  //@synthesize subsetPropertyName=_subsetPropertyName - In the implementation block
@property (nonatomic,readonly) NSObject * subsetPropertyValue;                 //@synthesize subsetPropertyValue=_subsetPropertyValue - In the implementation block
@property (nonatomic,readonly) BOOL matchNextEvent;                            //@synthesize matchNextEvent=_matchNextEvent - In the implementation block
-(id)init;
-(id)initWithConfig:(id)arg1 ;
-(BOOL)doesMatch:(id)arg1 ;
-(NSString *)datasetName;
-(NSString *)identifierPropertyName;
-(NSString *)subsetPropertyName;
-(NSObject *)subsetPropertyValue;
-(BOOL)matchNextEvent;
@end

