/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:00 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotosUICore/PhotosUICore-Structs.h>
@interface PXGDiagnosticsSpriteProbe : NSObject {

	BOOL _active;
	/*^block*/id _predicate;
	/*^block*/id _tagDescriptor;
	/*^block*/id _eventHandler;

}

@property (assign,getter=isActive,nonatomic) BOOL active;              //@synthesize active=_active - In the implementation block
@property (nonatomic,copy) id predicate;                               //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,copy) id tagDescriptor;                           //@synthesize tagDescriptor=_tagDescriptor - In the implementation block
@property (nonatomic,copy) id eventHandler;                            //@synthesize eventHandler=_eventHandler - In the implementation block
+(id)spriteDataStore;
+(void)_recordEventIfNeededWithType:(long long)arg1 layout:(id)arg2 oldState:(const SCD_Struct_PX146*)arg3 newState:(const SCD_Struct_PX146*)arg4 userInfo:(id)arg5 ;
+(id)activeSpriteProbes;
+(void)layout:(id)arg1 willRemoveSprites:(SCD_Struct_PX84*)arg2 ;
+(void)layout:(id)arg1 didInsertSprites:(SCD_Struct_PX84*)arg2 ;
+(void)layout:(id)arg1 willChangeSprites:(SCD_Struct_PX84*)arg2 ;
+(void)layout:(id)arg1 didChangeSprites:(SCD_Struct_PX84*)arg2 ;
+(void)willRequestTextureForSpriteWithGeometry:(const SCD_Struct_PX106*)arg1 style:(const SCD_Struct_PX83*)arg2 info:(const SCD_Struct_PX15*)arg3 inLayout:(id)arg4 textureInfo:(id)arg5 ;
+(void)willAdjustSprites:(SCD_Struct_PX84*)arg1 forAnimation:(id)arg2 appearing:(BOOL)arg3 ;
+(void)didAdjustSprites:(SCD_Struct_PX84*)arg1 forAnimation:(id)arg2 appearing:(BOOL)arg3 ;
+(void)shouldUseDoubleSidedAnimationForSprites:(SCD_Struct_PX84*)arg1 indexes:(id)arg2 animation:(id)arg3 ;
-(id)init;
-(id)predicate;
-(void)setPredicate:(id)arg1 ;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(void)setEventHandler:(id)arg1 ;
-(id)eventHandler;
-(void)_recordEventWithType:(long long)arg1 oldState:(const SCD_Struct_PX146*)arg2 newState:(const SCD_Struct_PX146*)arg3 userInfo:(id)arg4 ;
-(id)descriptionForSpriteState:(const SCD_Struct_PX146*)arg1 ;
-(void)_recordEventIfNeededWithType:(long long)arg1 layout:(id)arg2 oldState:(const SCD_Struct_PX146*)arg3 newState:(const SCD_Struct_PX146*)arg4 userInfo:(id)arg5 ;
-(id)tagDescriptor;
-(void)setTagDescriptor:(id)arg1 ;
@end

