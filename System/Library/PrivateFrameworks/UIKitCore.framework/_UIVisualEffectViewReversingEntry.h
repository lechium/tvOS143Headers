/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:46 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIVisualEffectViewEntry.h>

@class _UIVisualEffectViewEntry;

@interface _UIVisualEffectViewReversingEntry : _UIVisualEffectViewEntry {

	_UIVisualEffectViewEntry* _sourceEntry;

}
-(id)description;
-(void)applyRequestedEffectToView:(id)arg1 ;
-(void)applyIdentityEffectToView:(id)arg1 ;
-(void)removeEffectFromView:(id)arg1 ;
-(BOOL)canTransitionToEffect:(id)arg1 ;
-(BOOL)shouldAnimateProperty:(id)arg1 ;
-(void)addEffectToView:(id)arg1 ;
-(BOOL)isSameTypeOfEffect:(id)arg1 ;
-(id)initWithViewEntry:(id)arg1 ;
-(id)copyForTransitionToEffect:(id)arg1 ;
-(id)copyForTransitionOut;
@end

