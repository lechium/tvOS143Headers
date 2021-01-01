/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:27 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class RBSTarget, NSString, BSServiceConnectionEndpointInjector, NSMutableArray;

@interface _UIVisibilityPropagationView : UIView {

	os_unfair_lock_s _visibilityLock;
	RBSTarget* _visibilityLock_target;
	BOOL _visibilityLock_enabled;
	NSString* _visibilityLock_sourceEnvironment;
	BOOL _visibilityLock_updateEnqueued;
	os_unfair_lock_s _visibilityProcessingLock;
	RBSTarget* _visibilityProcessingLock_target;
	NSString* _visibilityProcessingLock_sourceEnvironment;
	BSServiceConnectionEndpointInjector* _visibilityProcessingLock_endpointInjector;
	NSMutableArray* _windowChangeNotifications;

}

@property (assign,getter=isVisibilityPropagationEnabled,nonatomic) BOOL visibilityPropagationEnabled; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(void)_updateVisibility;
-(void)setVisibilityTarget:(id)arg1 ;
-(void)setVisibilityPropagationEnabled:(BOOL)arg1 ;
-(BOOL)isVisibilityPropagationEnabled;
-(void)_visibilityLock_enqueueUpdateIfNecessary;
-(void)_visibilityLock_enqueueUpdateIfNecessary_body;
-(void)_visibilityLock_updateVisibility;
-(void)_visibilityLock_setSource:(id)arg1 ;
@end

