/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:42 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIGestureRecognizer.h>

@protocol _MKUserInteractionGestureRecognizerTouchObserver;
@class NSMutableSet;

@interface _MKUserInteractionGestureRecognizer : UIGestureRecognizer {

	NSMutableSet* _activeTouches;
	id<_MKUserInteractionGestureRecognizerTouchObserver> _touchObserver;

}

@property (assign,nonatomic,__weak) id<_MKUserInteractionGestureRecognizerTouchObserver> touchObserver;              //@synthesize touchObserver=_touchObserver - In the implementation block
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setTouchObserver:(id<_MKUserInteractionGestureRecognizerTouchObserver>)arg1 ;
-(id<_MKUserInteractionGestureRecognizerTouchObserver>)touchObserver;
@end

