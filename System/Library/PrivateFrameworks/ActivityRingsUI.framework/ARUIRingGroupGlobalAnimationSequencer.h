/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ARUIAnimationSequencing.h>

@class ARUIObserverStore, CADisplayLink, NSString;

@interface ARUIRingGroupGlobalAnimationSequencer : NSObject <ARUIAnimationSequencing> {

	ARUIObserverStore* _observers;
	CADisplayLink* _displayLink;
	double _lastUpdateTime;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)_init;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)_updateDisplayLink;
-(BOOL)_needsDisplayLink;
-(void)_displayLinkFired:(id)arg1 ;
@end
