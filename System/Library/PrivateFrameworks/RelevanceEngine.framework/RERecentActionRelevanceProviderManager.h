/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/RERelevanceProviderManager.h>

@class NSMutableDictionary, NSDate;

@interface RERecentActionRelevanceProviderManager : RERelevanceProviderManager {

	NSMutableDictionary* _relevanceProviderMap;
	NSDate* _lastDateUpdate;

}
+(id)_features;
+(Class)_relevanceProviderClass;
+(BOOL)_supportsHistoricProviders;
-(void)dealloc;
-(void)resume;
-(void)pause;
-(id)initWithQueue:(id)arg1 ;
-(void)_handleSignificantTimeChange;
-(id)_valueForProvider:(id)arg1 feature:(id)arg2 ;
-(void)_prepareForUpdate;
-(void)_handleActionPerformedNotifiction:(id)arg1 ;
-(void)_scheduleUpdatesForActionProvider:(id)arg1 ;
-(BOOL)_isHistoricProvider:(id)arg1 ;
-(float)_relevanceForHistoricProvider:(id)arg1 ;
-(void)_addedProvider:(id)arg1 ;
-(void)_removeProvider:(id)arg1 ;
@end

