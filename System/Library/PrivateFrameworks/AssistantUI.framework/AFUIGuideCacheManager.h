/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:19 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class SAGuidanceGuideUpdate, NSObject, NSNumber, SAGuidanceGuideSnippet, SAGuidanceSuggestedUtterances;

@interface AFUIGuideCacheManager : NSObject {

	SAGuidanceGuideUpdate* _cachedGuideUpdate;
	NSObject*<OS_dispatch_queue> _cacheFileQueue;
	BOOL _isCheckingGuideUpdate;

}

@property (nonatomic,readonly) NSNumber * cachedGuideTag; 
@property (nonatomic,readonly) SAGuidanceGuideSnippet * cachedGuideSnippet; 
@property (nonatomic,readonly) SAGuidanceSuggestedUtterances * cachedSuggestedUtterances; 
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(id)_cachedGuideUpdate;
-(BOOL)_shouldCheckForUpdateAtDate:(id)arg1 lastAppUpdateTime:(id)arg2 ;
-(void)_updateLastCheckedWithDate:(id)arg1 ;
-(id)_pathForCachedGuideUpdate;
-(void)updateCacheWithGuideUpdate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateLastCheckedDate;
-(NSNumber *)cachedGuideTag;
-(void)_checkGuideUpdateUsingAFClientLiteWithTag:(id)arg1 ;
-(id)_aceObjectDictionaryAtFilepath:(id)arg1 ;
-(SAGuidanceGuideSnippet *)cachedGuideSnippet;
-(SAGuidanceSuggestedUtterances *)cachedSuggestedUtterances;
-(BOOL)shouldCheckForUpdateWithLastAppUpdateTime:(id)arg1 ;
-(void)_clearCachedGuide;
-(void)checkGuideUpdate;
@end

