/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:34 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class NSString;

@interface UIWebElementAction : NSObject {

	NSString* _title;
	/*^block*/id _actionHandler;
	/*^block*/id _dismissalHandler;
	int _type;

}

@property (nonatomic,readonly) int type;                     //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) id dismissalHandler;              //@synthesize dismissalHandler=_dismissalHandler - In the implementation block
+(id)standardElementActionWithType:(int)arg1 customTitle:(id)arg2 context:(id)arg3 ;
+(id)customElementActionWithTitle:(id)arg1 actionHandler:(/*^block*/id)arg2 ;
+(id)standardElementActionWithType:(int)arg1 ;
-(void)dealloc;
-(int)type;
-(id)_title;
-(void)setDismissalHandler:(id)arg1 ;
-(id)dismissalHandler;
-(id)initWithTitle:(id)arg1 actionHandler:(/*^block*/id)arg2 type:(int)arg3 ;
-(void)_runActionWithElement:(id)arg1 targetURL:(id)arg2 documentView:(id)arg3 interactionLocation:(CGPoint)arg4 ;
@end

