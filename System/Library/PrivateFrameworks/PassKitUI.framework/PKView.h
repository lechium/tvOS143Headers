/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:30 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSHashTable;

@interface PKView : UIView {

	os_unfair_lock_s _observersLock;
	NSHashTable* _observers;

}
-(id)init;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(void)removeWindowObserver:(id)arg1 ;
-(void)addWindowObserver:(id)arg1 ;
@end

