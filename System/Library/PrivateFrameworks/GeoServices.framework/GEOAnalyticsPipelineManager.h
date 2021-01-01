/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:57 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/GEOAnalyticsPipelineProxy.h>

@protocol GEOAnalyticsPipelineProxy;
@class geo_isolater, NSString;

@interface GEOAnalyticsPipelineManager : NSObject <GEOAnalyticsPipelineProxy> {

	id<GEOAnalyticsPipelineProxy> _proxy;
	BOOL _evDirectionsFeedbackAllowed;
	BOOL _directionsFeedbackAllowed;
	BOOL _evDirectionsFeedbackAuth;
	id _evDirectionsFeedbackAllowedListener;
	id _evDirectionsFeedbackAuthListener;
	geo_isolater* _evInfoIsolator;

}

@property (nonatomic,readonly) BOOL evDirectionsFeedbackAuth;               //@synthesize evDirectionsFeedbackAuth=_evDirectionsFeedbackAuth - In the implementation block
@property (assign,nonatomic) BOOL evDirectionsFeedbackAllowed;              //@synthesize evDirectionsFeedbackAllowed=_evDirectionsFeedbackAllowed - In the implementation block
@property (assign,nonatomic) BOOL directionsFeedbackAllowed;                //@synthesize directionsFeedbackAllowed=_directionsFeedbackAllowed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
+(void)useProxyClass:(Class)arg1 ;
-(id)init;
-(void)dealloc;
-(void)reportDailyUsageCountType:(int)arg1 usageString:(id)arg2 usageBool:(id)arg3 appId:(id)arg4 ;
-(void)shortSessionValuesWithCompletion:(/*^block*/id)arg1 ;
-(void)setShortSessionValues:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)reportLogMsgType:(int)arg1 handlingPolicyId:(int)arg2 logMsg:(id)arg3 completion:(/*^block*/id)arg4 completionQueue:(id)arg5 ;
-(void)reportMapKitCountType:(int)arg1 appId:(id)arg2 completion:(/*^block*/id)arg3 completionQueue:(id)arg4 ;
-(void)reportDailyUsageCountType:(int)arg1 usageString:(id)arg2 usageBool:(id)arg3 appId:(id)arg4 completion:(/*^block*/id)arg5 completionQueue:(id)arg6 ;
-(void)reportCuratedCollectionActionType:(unsigned long long)arg1 collectionId:(unsigned long long)arg2 completion:(/*^block*/id)arg3 completionQueue:(id)arg4 ;
-(void)reportDailySettingsStates:(id)arg1 completion:(/*^block*/id)arg2 completionQueue:(id)arg3 ;
-(void)setEvalMode:(BOOL)arg1 ;
-(void)flushEvalData;
-(void)initiateUploadOfType:(int)arg1 ;
-(void)showEvalDataWithPredicate:(id)arg1 visitorBlock:(/*^block*/id)arg2 summaryBlock:(/*^block*/id)arg3 ;
-(id)getEvalStatus;
-(void)runAggregationTasks;
-(BOOL)PlatformDiagAndUsage;
-(BOOL)AppleInternal;
-(BOOL)GEOImproveMaps;
-(BOOL)GEOMapsLocationAuth;
-(BOOL)PlatformDiagAndUsageOrAppleInternal;
-(void)logToDiagAndUsageUnderBugId:(id)arg1 filePrefix:(id)arg2 logData:(id)arg3 ;
-(BOOL)getEvDirectionsFeedbackAuth;
-(BOOL)getEvDirectionsFeedbackAllowed;
-(void)setEvDirectionsFeedbackAllowed:(BOOL)arg1 ;
-(void)toggleEVDirectionsFeedbackAllowed;
-(void)reportMapKitCountType:(int)arg1 ;
-(void)reportCuratedCollectionActionType:(unsigned long long)arg1 collectionId:(unsigned long long)arg2 ;
-(void)reportDailySettingsStates:(id)arg1 ;
-(int)functionalAppGroup;
-(BOOL)evDirectionsFeedbackAllowed;
-(BOOL)directionsFeedbackAllowed;
-(void)setDirectionsFeedbackAllowed:(BOOL)arg1 ;
-(BOOL)evDirectionsFeedbackAuth;
@end
