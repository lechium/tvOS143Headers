/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:11 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewPropertyAnimator.h>

@class NSHashTable;

@interface _UISwipePropertyAnimator : UIViewPropertyAnimator {

	NSHashTable* _viewsToAnimateAdditively;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)_shouldAnimateAdditivelyForView:(id)arg1 withKeyPath:(id)arg2 ;
-(void)addViewsToAnimateAdditively:(id)arg1 ;
@end
