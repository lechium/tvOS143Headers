/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:42 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/RETrainingSimulationCoordinator.h>

@class RERelevanceEngine, REConcurrentDictionary, RERemoteTrainingContext;

@interface RETrainingContext : NSObject <RETrainingSimulationCoordinator> {

	RERelevanceEngine* _relevanceEngine;
	REConcurrentDictionary* _attributes;
	RERemoteTrainingContext* _remoteContext;
	RETrainingContext* _cachedAttributeContext;

}

@property (nonatomic,readonly) RETrainingContext * attributeContext; 
@property (nonatomic,readonly) BOOL _wantsAutomaticRemoteContextForwarding; 
@property (nonatomic,retain) RERemoteTrainingContext * remoteContext; 
@property (retain) RETrainingContext * cachedAttributeContext;                           //@synthesize cachedAttributeContext=_cachedAttributeContext - In the implementation block
@property (nonatomic,readonly) RERelevanceEngine * relevanceEngine; 
@property (nonatomic,readonly) BOOL isCurrent; 
-(id)init;
-(void)dealloc;
-(void)becomeCurrent;
-(RERemoteTrainingContext *)remoteContext;
-(id)attributeForKey:(id)arg1 ;
-(void)setAttribute:(id)arg1 forKey:(id)arg2 ;
-(BOOL)isCurrent;
-(void)setRemoteContext:(RERemoteTrainingContext *)arg1 ;
-(RERelevanceEngine *)relevanceEngine;
-(void)_configureForRelevanceEngine:(id)arg1 ;
-(RETrainingContext *)attributeContext;
-(void)flushTraining;
-(void)_willResignCurrent;
-(void)_willBecomeCurrent;
-(void)_didResignCurrent;
-(void)_didBecomeCurrent;
-(void)_trainElementWithIdentifier:(id)arg1 isPositiveEvent:(BOOL)arg2 interaction:(id)arg3 ;
-(void)_trainElement:(id)arg1 isPositiveEvent:(BOOL)arg2 interaction:(id)arg3 ;
-(BOOL)_wantsAutomaticRemoteContextForwarding;
-(void)trainWithElement:(id)arg1 isPositiveEvent:(BOOL)arg2 interaction:(id)arg3 ;
-(void)trainWithUnmanagedElement:(id)arg1 isPositiveEvent:(BOOL)arg2 interaction:(id)arg3 ;
-(void)setCachedAttributeContext:(RETrainingContext *)arg1 ;
-(BOOL)performSimulationCommand:(id)arg1 withOptions:(id)arg2 ;
-(RETrainingContext *)cachedAttributeContext;
@end

