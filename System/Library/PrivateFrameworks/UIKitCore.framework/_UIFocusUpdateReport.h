/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:00 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIFocusSystem, UIFocusUpdateContext;

@interface _UIFocusUpdateReport : NSObject {

	UIFocusSystem* _focusSystem;
	UIFocusUpdateContext* _context;

}

@property (nonatomic,__weak,readonly) UIFocusSystem * focusSystem;              //@synthesize focusSystem=_focusSystem - In the implementation block
@property (nonatomic,retain) UIFocusUpdateContext * context;                    //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) BOOL shouldLog; 
-(id)init;
-(UIFocusUpdateContext *)context;
-(void)setContext:(UIFocusUpdateContext *)arg1 ;
-(BOOL)shouldLog;
-(UIFocusSystem *)focusSystem;
-(id)initWithFocusSystem:(id)arg1 ;
@end

