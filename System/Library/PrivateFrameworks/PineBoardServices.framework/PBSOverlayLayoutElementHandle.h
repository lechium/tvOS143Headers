/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:34 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PineBoardServices/PineBoardServices-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/PBSOverlayLayoutElement.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class _PBSOverlayLayoutHandleElement, PBSOverlayLayoutController, PBSOverlayLayoutElementIdentifier, PBSOverlayLayoutElement, NSString;

@interface PBSOverlayLayoutElementHandle : NSObject <BSDescriptionProviding, PBSOverlayLayoutElement, BSInvalidatable> {

	/*^block*/id _hintHandler;
	long long _state;
	_PBSOverlayLayoutHandleElement* _settings;
	PBSOverlayLayoutController* _controller;
	PBSOverlayLayoutElementIdentifier* _identifier;

}

@property (nonatomic,readonly) long long state;                                                  //@synthesize state=_state - In the implementation block
@property (nonatomic,copy,readonly) _PBSOverlayLayoutHandleElement * settings;                   //@synthesize settings=_settings - In the implementation block
@property (nonatomic,__weak,readonly) PBSOverlayLayoutController * controller;                   //@synthesize controller=_controller - In the implementation block
@property (nonatomic,copy,readonly) PBSOverlayLayoutElementIdentifier * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) PBSOverlayLayoutElement * element; 
@property (getter=isHidden,nonatomic,readonly) BOOL hidden; 
@property (nonatomic,copy) id hintHandler;                                                       //@synthesize hintHandler=_hintHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGRect frame; 
@property (nonatomic,readonly) CGVector stickiness; 
@property (getter=isFixed,nonatomic,readonly) BOOL fixed; 
-(NSString *)debugDescription;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(PBSOverlayLayoutElement *)element;
-(void)invalidate;
-(PBSOverlayLayoutElementIdentifier *)identifier;
-(long long)state;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(_PBSOverlayLayoutHandleElement *)settings;
-(CGRect)frame;
-(BOOL)isHidden;
-(CGVector)stickiness;
-(PBSOverlayLayoutController *)controller;
-(BOOL)isFixed;
-(void)controller:(id)arg1 didReceiveHandleHint:(id)arg2 withTransitionContext:(id)arg3 ;
-(id)initWithController:(id)arg1 identifier:(id)arg2 ;
-(void)invalidateWithTransitionContext:(id)arg1 ;
-(void)_removeLayoutElementWithTransitionContext:(id)arg1 ;
-(id)_zeroOffsetHint;
-(id)_updateLayoutElement:(id)arg1 withTransitionContext:(id)arg2 ;
-(id)updateElement:(/*^block*/id)arg1 withTransitionContext:(id)arg2 ;
-(id)hintHandler;
-(void)setHintHandler:(id)arg1 ;
@end

