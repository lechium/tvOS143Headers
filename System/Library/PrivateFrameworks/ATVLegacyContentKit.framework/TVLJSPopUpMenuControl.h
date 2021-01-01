/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <ATVLegacyContentKit/ATVUpdatable.h>

@class UIViewController, TVLDocument, TVLPopUpMenuElement, TVLLegacyJSContext;

@interface TVLJSPopUpMenuControl : NSObject <ATVUpdatable> {

	UIViewController* _menuViewController;
	BOOL _didLoadPopUpMenu;
	TVLDocument* _feedDocument;
	TVLPopUpMenuElement* _popUpMenuElement;
	OpaqueJSValueRef _popUpMenuRef;
	TVLLegacyJSContext* _context;
	/*^block*/id _onDismiss;

}

@property (nonatomic,__weak,readonly) TVLLegacyJSContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) BOOL isVisible; 
@property (nonatomic,copy) id onDismiss;                                         //@synthesize onDismiss=_onDismiss - In the implementation block
-(void)dealloc;
-(TVLLegacyJSContext *)context;
-(id)initWithContext:(id)arg1 ;
-(void)dismiss;
-(BOOL)isVisible;
-(id)_rootViewController;
-(id)currentFeedElement;
-(void)updateWithFeedElement:(id)arg1 ;
-(void)_makeJSObjectWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_onDismiss;
-(void)_showWithDocument:(id)arg1 ;
-(id)onDismiss;
-(id)initWithContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)destroyJSObject;
-(void)setOnDismiss:(id)arg1 ;
@end

