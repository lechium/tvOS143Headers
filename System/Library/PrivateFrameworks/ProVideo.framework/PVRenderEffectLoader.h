/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ProVideo/ProVideo-Structs.h>
@interface PVRenderEffectLoader : NSObject {

	deque<PVLoadedEffectItem, std::__1::allocator<PVLoadedEffectItem> >* _loadedEffects;
	HGSynchronizable* _lock;
	BOOL _flushesOnEffectStackChanges;
	float _unusedEffectTimeout;

}

@property (assign,nonatomic) float unusedEffectTimeout;              //@synthesize unusedEffectTimeout=_unusedEffectTimeout - In the implementation block
-(id)init;
-(void)dealloc;
-(void)unloadEffects;
-(void)_removeUnusedEffects_noLock:(id)arg1 ;
-(void)_loadEffects_noLock:(id)arg1 ;
-(void)_removeTimedOutEffects_noLock;
-(float)unusedEffectTimeout;
-(void)loadEffectsForGraphs:(id)arg1 loadContext:(HGRef<PVInstructionGraphContext>*)arg2 ;
-(void)ageOutEffects;
-(void)setUnusedEffectTimeout:(float)arg1 ;
@end

